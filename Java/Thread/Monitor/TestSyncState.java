class ItemSyncState
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
class MyThreadSyncState implements Runnable
	{
	String msg;
	ItemSyncState item;
	Thread t;
	MyThreadSyncState(ItemSyncState a,String s)
		{
		msg=s;
		item=a;
		t=new Thread(this);
		t.start();
		}
	public void run()
		{
		synchronized(item)
		{
		item.display(msg);
		}
		}
	}
class TestSyncState
	{
	public static void main(String rags[])
		{
		ItemSyncState ref=new ItemSyncState();
		MyThreadSyncState obj1=new MyThreadSyncState(ref,"Hello");
		MyThreadSyncState obj2=new MyThreadSyncState(ref,"Sync");
		MyThreadSyncState obj3=new MyThreadSyncState(ref,"World");
		try{
			obj1.t.join();
			obj2.t.join();
			obj3.t.join();
		   }catch(InterruptedException e)
				{e.printStackTrace();
				}
		}
	}