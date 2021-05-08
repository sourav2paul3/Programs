class Queue
	{
	private int n;
	private boolean valueset=false;
	public synchronized void put(int k)
		{if(valueset)
		 {try{
			wait();
			}catch(InterruptedException e)
				{e.printStackTrace();
				}
		}
		n=k;
		valueset=true;
		System.out.println("PUT:"+n);
		}
	public synchronized int get()
		{
		if(!valueset)
		 {try{
			wait();
			}catch(InterruptedException e)
				{e.printStackTrace();
				}
		}
		System.out.println("GOT:"+n);
		valueset=false;
		notify();
		return n;
		}
	}
class Producer implements Runnable
	{
	Queue q;
	Producer(Queue a)
	{q=a;
	new Thread(this,"Producer").start();
	}
	public void run()
		{
		int i=0;
		while(true)
			{
			q.put(++i);
			}
		}
	}
class Consumer implements Runnable
	{
	Queue q;
	Consumer(Queue a)
	{q=a;
	new Thread(this,"Consumer").start();
	}
	public void run()
		{
		int i=0;
		while(true)
			{
			q.get();
			}
		}
	}
class Test
	{
	public static void main(String args[])
		{
		Queue queue=new Queue();
		new Producer(queue);
		new Consumer(queue);
		System.out.println("To Stop Press cntl+break");
		}
	}
