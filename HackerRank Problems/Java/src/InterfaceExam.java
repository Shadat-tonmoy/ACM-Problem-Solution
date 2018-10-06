
interface A{
    int a=10;
    final int b=20;
    void am();
}
interface B extends A{
    static int b=30;
    int c=50;
    interface C{
        final static int c=40;
        void bm();
        void am();
    }
    void bm();
}

class InterfaceExam implements B,B.C{ //needs to B.C
    int a=60;
    public static void main(String[] args){
        InterfaceExam inf=new InterfaceExam();
        inf.am();
        A a=inf;
        B b=inf;
        C c=inf;
        
        a.am();
        b.am();//error
        b.bm();
        c.bm();
    }
    
    public void am(){ //needs to be public void
        System.out.println("AM:= "+c);
    }
    public void bm(){ //needs to be public void
        System.out.println("BM: "+a);
    }
}