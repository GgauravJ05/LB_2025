class A
{
    int iNo;
    A(){}
    A(int no)
    {
        iNo = no;
    }
    public void display()
    {
        System.out.println("In class A display value in iNo is :: " +iNo);
    }
}

class B extends A
{
    int bno;
    B(){super();}
    B(int no){
        bno = no;
    }
}

public class program389 {
}
