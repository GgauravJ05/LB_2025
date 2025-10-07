public class program421 {
    public static void main(String[] args) {
        DBMS obj = new DBMS();
        obj.InsertIntoTable(1,"nikita","barshi",98);
        obj.InsertIntoTable(2,"vaishnavi","pcmc",99);
        obj.InsertIntoTable(3,"gaurav","pune",98);
        obj.InsertIntoTable(4,"gautami","pune",99);
        obj.InsertIntoTable(5,"shital","mumbai",98);
        obj.InsertIntoTable(6,"a","solapur",65);
        obj.InsertIntoTable(7,"b","solapur",89);
        obj.SelectStarFrom();
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

    //select * from student
    public void SelectStarFrom()
    {
        System.out.println("Student Table Data:");
        Node temp = first;
        System.out.println("-----------------------------------------");
        while(temp != null)
        {
            System.out.println(temp.Rno+"\t"+temp.Name+"\t"+temp.City+"\t"+temp.Marks);
            temp = temp.next;
        }
        System.out.println("-----------------------------------------");
    }
}


