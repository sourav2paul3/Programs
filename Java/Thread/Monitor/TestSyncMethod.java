class ItemSyncMethod
	{
	public synchronized void display(String a)
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
class MyThreadSyncMethod implements Runnable
	{
	String msg;
	ItemSyncMethod item;
	Thread t;
	MyThreadSyncMethod(ItemSyncMethod a,String s)
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
class TestSyncMethod
	{
	public static void main(String rags[])
		{
		ItemSyncMethod ref=new ItemSyncMethod();
		MyThreadSyncMethod obj1=new MyThreadSyncMethod(ref,"Hello");
		MyThreadSyncMethod obj2=new MyThreadSyncMethod(ref,"Sync");
		MyThreadSyncMethod obj3=new MyThreadSyncMethod(ref,"World");
		try{
			obj1.t.join();
			obj2.t.join();
			obj3.t.join();
		   }catch(InterruptedException e)
				{e.printStackTrace();
				}
		}
	}