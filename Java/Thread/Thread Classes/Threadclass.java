//Thread using Thread class

class Newthread extends Thread
	{
	Newthread()
	 {
	   super("Child Thread");
	   System.out.println("Thread:"+this);
	    start();
	  }
	public void run()
		{
		try{
		    for(int i=1;i<=5;i++)
			{System.out.println("Child I=:"+i);
			Thread.sleep(500);
			}
		}catch(InterruptedException e)
			{
			e.printStackTrace();
			}
	System.out.println("Child Thread End");
		}
	}

class Threadclass
	{public static void main(String args[])
		{
		System.out.println("Main Thread:"+Thread.currentThread());
		Newthread tobj=new Newthread();
		try{for(int i=1;i<=5;i++)
			{System.out.println("Main I="+i);
			Thread.sleep(1000);
			}
		}catch(InterruptedException e)
			{e.printStackTrace();
			}
		System.out.print("Main Thread End");
	}
	}	