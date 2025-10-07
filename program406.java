
public class program406 {


    public static void main(String[] args) {
        Demo obj = null;// null reference
        obj = new Demo(); //0x50000
        Demo obj2= new Demo();


        System.out.println(obj);
        System.out.println(obj.hashCode());
        System.out.println(obj.getClass());
        System.out.println(obj.getClass().getName());
        System.out.println("------------------------");

        System.out.println(obj2);
        System.out.println(obj2.hashCode());
        System.out.println(obj2.getClass());
        System.out.println(obj2.getClass().getName());
        System.out.println("-------------------------------");
        System.out.println(obj==obj2);//compare references
        System.out.println(obj.hashCode()==obj2.hashCode());//compare hashcode
        System.out.println(1==1);//primitive comaparison
        System.out.println("i".equals("i")); //compare string contents
        System.out.println("L".equals("l"));//false
        System.out.println("L".equalsIgnoreCase("l"));//true
        System.out.println(obj.toString());
    }
}
class Demo
{

    public int i,j;

    @Override
    public String toString() {
        return "Demo{" +
                "i=" + i +
                ", j=" + j +
                '}';
    }
}

