//Thread usingg runnable class

class Mythread implements Runnable
	{Thread t;
	Mythread()
	 {
	   t=new Thread(this,"First Thread");
	   System.out.println("child Thread:"+t);
	    t.start();
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

class Runnablethread
	{public static void main(String args[])
		{
		System.out.println("Main Thread:"+Thread.currentThread());
		Mythread tobj=new Mythread();
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