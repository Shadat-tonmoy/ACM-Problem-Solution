public class Teacher extends Person{
    public void work(){
        System.out.println("teaching");
    }
    public void work(String course){
            System.out.println("Teaching course:" +course);
    }
}