class Queue
	{
	private int n;
	public synchronized void put(int k)
		{n=k;
		System.out.println("PUT:"+n);
		}
	public synchronized int get()
		{
		System.out.println("GOT:"+n);
		return n;
		}
	}
class Producer implements Runnable
	{
	Queue q;
	Thread t;
	Producer(Queue a)
	{q=a;
	t=new Thread(this,"Producer");
	t.start();
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
	Thread t;
	Consumer(Queue a)
	{q=a;
	t=new Thread(this,"Consumer");
	t.start();
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
class TestNormal
	{
	public static void main(String args[])
		{
		Queue queue=new Queue();
		new Producer(queue);
		new Consumer(queue);
		System.out.println("To Stop Press cntl+break");
		}
	}
