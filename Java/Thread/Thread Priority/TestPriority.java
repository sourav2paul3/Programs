class MyThread implements Runnable
	{
	long count=0;
	Thread t;
	private volatile boolean running=true;
	MyThread(String s,int priority)
		{
		t=new Thread(this,s);
		t.setPriority(priority);
		}
	public void run()
		{while(running)
			count++;
		}
	public void start()
		{
		t.start();
		}
	public void stop()
		{running=false;
		}
	}

class TestPriority
	{
	public static void main(String args[])
		{
		MyThread obj1=new MyThread("HI",Thread.NORM_PRIORITY+2);
		MyThread obj2=new MyThread("HI",Thread.NORM_PRIORITY-2);
		obj1.start();
		obj2.start();
		try{
		Thread.sleep(10000);
		}catch(InterruptedException e)
			{e.printStackTrace();
			}
		obj1.stop();
		obj2.stop();
		System.out.println("First Thread:"+obj1.t+"Executed:"+obj1.count+"times");
		System.out.println("Second Thread:"+obj2.t+"Executed:"+obj2.count+"times");
		}
	}