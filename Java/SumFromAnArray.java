import java.util.*;
class Test{
	public static void find(int[] A,int currSum,int index,int sum,int[] solution)
		{
			 if (currSum == sum) 
				{

                  System.out.print("Output: [");
                  for (int i = 0; i < solution.length; i++) 
					{
                        if (solution[i] == 1) 
                {
                    if(A[i]!=0)
                    {
                                System.out.print("  " + A[i]);
                    }
                        }
                }
                  System.out.print(" ]\n");

            }
     else if (index == A.length) 
        {
                  return;
            } 
        else 
        {
                  solution[index] = 1;
                  currSum += A[index];
                  find(A, currSum, index + 1, sum, solution);
                  currSum -= A[index];  
                  solution[index] = 0;
                  find(A, currSum, index + 1, sum, solution);
            }
          return;
      }
	 public static void main(String args[])
    {
        Scanner in =new Scanner(System.in);
        System.out.println("How many integer you have to insert: ");
        int n=in.nextInt();
        int []A=new int[n];
        System.out.println("\nEnter elements in Array:\n ");
        for(int i=0;i<A.length;i++)
        {
            A[i]=in.nextInt();
        }
        System.out.println("\nEnter required sum: ");
        int sum=in.nextInt();
        int[] solution = new int[A.length];
        find(A, 0, 0, sum, solution);
    }
}