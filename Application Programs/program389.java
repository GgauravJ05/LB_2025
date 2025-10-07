public class program389 {
    public static void main(String[] args) {
        B bobj = new B(10);
        bobj.show();
        bobj.display();
    }

}
class A
{
    int ino;
    A(){}
    A(int no)
    {
        ino = no;
    }
    public void display()
    {
        System.out.println("in Class A display value in ino is:" + ino);
    }
}

class B extends A {
    int bno;
    B(){super();}

    B(int no)
    {
        super(no);
        bno = no;
    }
    public void show()
    {
        System.out.println("value of bno is: "+bno);
    }

}

