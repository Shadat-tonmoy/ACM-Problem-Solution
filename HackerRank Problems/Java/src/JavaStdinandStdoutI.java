import java.util.Scanner;

public class JavaStdinandStdoutI {
	{
		System.out.println("enter");
		Scanner sc = new Scanner(System.in);
		int b = sc.nextInt();
		int h = sc.nextInt();
		if(b<=0 || h<=0)
		{
			System.out.println("java.lang.Exception: Breadth and height must be positive");
		}
		else 
		{
			System.out.println(b*h);
		}
		
	}
	public static void main(String args[])
	{
		System.out.println("He");
		
		
		
		
	}

}
