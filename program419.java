public class program419 {
    public static void main(String[] args) {
        DBMS obj = new DBMS();
        obj.InsertIntoTable(1,"nikita","barshi",98);
        obj.InsertIntoTable(2,"vaishnavi","pcmc",99);
        obj.InsertIntoTable(3,"gaurav","pune",98);
        obj.InsertIntoTable(4,"gautami","pune",99);
        obj.InsertIntoTable(5,"shital","mumbai",98);
    }
}
class Node
{
    public int Rno;
    public String Name;
    public String City;
    public int Marks;
    public Node next;

    public Node(int rno, String name, String city, int marks) {
        Rno = rno;
        Name = name;
        City = city;
        Marks = marks;
        next = null;
    }
}

class DBMS
{
    public Node first;

    public DBMS()
    {
        first = null;
        System.out.println("DBMS initialized successfully..");
        System.out.println("Student table created successfully...");
    }

    //insertlast
    public void InsertIntoTable(int Rno, String Name, String City, int Marks)
    {
        Node newn = new Node(Rno,Name,City,Marks);
        if(first == null)
        {
            first=newn;
        }
        else {
            Node temp = first;
            while(temp.next!=null)
            {
                temp = temp.next;
            }
            temp.next = newn;
        }
        System.out.println("one student added successfully..");
    }
}
