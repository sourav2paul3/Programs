class Threadtest
	{public static void main(String args[])
		{
		Thread ts=Thread.currentThread();
		System.out.println("Currently Running Thread"+ts);
		ts.setName("My Thread");
		System.out.println("After name chnage:"+ts);
		for(int i=1;i<=5;i++)
		{System.out.println("I="+i);
		try{
		Thread.sleep(1000);
		}catch(InterruptedException e)
			{e.printStackTrace();
			}
		}
	System.out.println("The End");
	}
}