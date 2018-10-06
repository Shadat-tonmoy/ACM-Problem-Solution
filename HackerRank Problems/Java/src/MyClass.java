
public class MyClass implements MyInterface, MyInterface2{

	@Override
	public void setMessage(String message) {
		
	}

	@Override
	public void getMessage(String message) {
		System.out.println("From MyClass printing...."+message);
		
	}	
	
	public void myClassMethod()
	{
		System.out.println("Hello world from myClassMethod");
	}

}
