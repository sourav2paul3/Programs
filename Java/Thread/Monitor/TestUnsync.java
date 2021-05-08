class ItemUnsync
	{
	public void display(String a)
		{
		try{
		    System.out.print("["+a);
		   Thread.sleep(3000);
			}catch(InterruptedException e)
				{e.printStackTrace();
				}
		System.out.println("]");
		}
	}
class MyThreadUnsync implements Runnable
	{
	String msg;
	ItemUnsync item;
	Thread t;
	MyThreadUnsync(ItemUnsync a,String s)
		{
		msg=s;
		item=a;
		t=new Thread(this);
		t.start();
		}
	public void run()
		{
		item.display(msg);
		}
	}
class TestUnsync
	{
	public static void main(String rags[])
		{
		ItemUnsync ref=new ItemUnsync();
		MyThreadUnsync obj1=new MyThreadUnsync(ref,"Hello");
		MyThreadUnsync obj2=new MyThreadUnsync(ref,"Sync");
		MyThreadUnsync obj3=new MyThreadUnsync(ref,"World");
		try{
			obj1.t.join();
			obj2.t.join();
			obj3.t.join();
		   }catch(InterruptedException e)
				{e.printStackTrace();
				}
		}
	}