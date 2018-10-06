
interface MyInterface2 {
	int n = 10;
	void setMessage(String message);
	void getMessage(String message);
	
	
	interface NestedInterface{
		
	}
	default void defaultMethod(String string)
	{
		
		System.out.println("From interface default method message is "+string);
	}	
	static void defaultStaticMethod()
	{
		System.out.println("From Static Method");
		
	}


}
