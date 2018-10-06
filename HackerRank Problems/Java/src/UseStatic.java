

class Test{
	static int n;
	static int m;
	private int age;
	Test()
	{
		System.out.println("Cons...");
		//n = 5;
	}
	static{
		System.out.println("Static Block Calling....");
		n = 15;
	}
	
	
	static void PrintMessage()
	{
		System.out.println("Static method PrintMessage");
		System.out.println("N is "+n);
		System.out.println("M is "+m);
		//nothing();
	}
	static final void nothing(){
		System.out.println("Static method Nothing.....");
	}
	void varargs(int ...v)
	{
		System.out.println("Printing varargs");
		for(int i : v)
		{
			System.out.println(i);
		}
	}
	void varargs(int n, int ...v)
	{
		System.out.println("Printing varargs with aditional param");
		for(int i : v)
		{
			System.out.println(i);
		}
	}
	void varargs(boolean ...v)
	{
		System.out.println("Printing varargs of boolean with aditional param");
		for(boolean i : v)
		{
			System.out.println(i);
		}
		
	}
	class NestedClass{
		void PrintMessage()
		{
			System.out.println("From nested Class Print Message"+age);
		}
	}
	
	
}
class SuperClass{
	
	String className,classType;
	static int tmp = 6;
	final int N = 5;
	SuperClass()
	{
		System.out.println("Parent class constructor");
//		className = "superClass";
//		classType = "Super Class";
//		System.out.println("From Super Class Constructor");
	}
	SuperClass(int n)
	{
		this();
		System.out.println("From Super class with a param of value "+n);
	}
	static void a()
	{
		
	}
	public void B()
	{
		
	}
	public static void display()
	{
		//System.out.println("From super class"+className+" "+classType);
	}
	{
		System.out.println("Parent Class Instance Block");
	}
	static{
		
		System.out.println("Parent class static block");
	}
}
class SubClass extends SuperClass{
	String name;
	int N=34;
	SubClass()
	{
		//super(5);
		name = "Shadat";
		System.out.println("Child class constructor");
		a();
		
		
		
	
		
	}
	public static void  display(){
		
		
	}
	public void B()
	{
		
	}
	
	public void display2()
	{
		System.out.println("From sub class"+className+" "+classType+" "+name);
	}
	{
		System.out.println("Child class instance block");
	}
	static{
		System.out.println("Child Class Static block");
	}
}
public class UseStatic {

	public static void main(String[] args) {
//		Test test =  new Test();
//		Test.PrintMessage();
//		Test.NestedClass nestedClass =  test.new NestedClass();
//		nestedClass.PrintMessage();
		SuperClass subclass = new SubClass();
		
		SubClass subClass2 = new SubClass();
		//display2();
//		subclass.display();
//		MyClass myClass = new MyClass();
//		myClass.getMessage("Hello World");
//		myClass.defaultMethod("Hey You");
		
		
		
		
		//test.varargs(); //ambeguious call
		//test.varargs(1,2,3,4,5);//ambigeous call
		
		

	}
	
	public static void main(int n)
	{
		
	}

}
