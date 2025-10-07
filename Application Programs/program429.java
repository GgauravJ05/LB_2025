public class program429 {
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
        obj.SelectStarFromWhereCity("pune");
        obj.SelectCount();
        obj.SelectSum();
        obj.SelectAvg();
        obj.SelectMax();
        obj.SelectMin();
        obj.SelectStarFromName("gautami");
        obj.UpdateCityForRollno(3,"Tokyo");
        obj.SelectStarFromName("gaurav");

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

    //    select * from student where city ="Pune";
    public void SelectStarFromWhereCity(String city)
    {
        System.out.println("Select * from student where city is :"+city);

        Node temp = first;
        System.out.println("-----------------------------------------");
        while(temp != null)
        {
            if(temp.City.equalsIgnoreCase(city)) {
                System.out.println(temp.Rno+"\t"+temp.Name+"\t"+temp.City+"\t"+temp.Marks);
            }
            temp = temp.next;
        }
        System.out.println("-----------------------------------------");

    }

    //select count(marks) from student;
    public void SelectCount()
    {
        System.out.println("select count(marks) from student");
        int iCnt = 0;
        Node temp = first;
        while(temp!=null)
        {
            temp= temp.next;
            iCnt++;
        }
        System.out.println("Number of records/students in the table are: "+iCnt);
        System.out.println("--------------------------");
    }

    //5: select sum(marks) from student;
    public void SelectSum()
    {
        System.out.println("select sum(marks) from student;");
        int iSum =0;
        Node temp = first;
        while(temp!=null)
        {
            iSum = iSum+temp.Marks;
            temp= temp.next;
        }
        System.out.println("sum of all the marks is : "+iSum);
        System.out.println("--------------------------");
    }

    public void SelectAvg()
    {
        System.out.println("select Avg(marks) from student;");
        int iSum =0;
        int count = 0;
        Node temp = first;
        while(temp!=null)
        {
            iSum = iSum+temp.Marks;
            temp= temp.next;
            count++;
        }
        System.out.println("average of marks is : "+ ((float)iSum/(float)count));
        System.out.println("--------------------------");
    }

    public void SelectMax()
    {
        System.out.println("select Max(maks) from student");
        int iMax = 0;
        Node temp = first;
        if(temp!=null)
        {
            iMax= temp.Marks;
        }
        while(temp!=null)
        {
            if(temp.Marks>iMax)
            {
                iMax=temp.Marks;
            }
            temp = temp.next;
        }
        System.out.println("Maximum marks from cloumn is : "+iMax);
        System.out.println("--------------------------");
    }
    public void SelectMin()
    {
        System.out.println("select Min(maks) from student");
        int iMin = 0;
        Node temp = first;
        if(temp!=null)
        {
            iMin= temp.Marks;
        }
        while(temp!=null)
        {
            if(temp.Marks<iMin)
            {
                iMin=temp.Marks;
            }
            temp = temp.next;
        }
        System.out.println("Minimum marks from cloumn is : "+iMin);
        System.out.println("--------------------------");

    }

    public void SelectStarFromName(String name)
    {
        System.out.println("select * from student where name =" + name);
        Node temp = first;
        while(temp != null)
        {
            if(temp.Name.equalsIgnoreCase(name)) {
                System.out.println(temp.Rno+"\t"+temp.Name+"\t"+temp.City+"\t"+temp.Marks);
            }
            temp = temp.next;
        }
        System.out.println("------------------------------------");
    }

    public void UpdateCityForRollno(int rno, String city)
    {
        System.out.println("update student set City ="+city+"where Rno ="+rno);
        Node temp =first;
        while(temp!=null)
        {
            if(temp.Rno==rno)
            {
                temp.City = city;
                break;
            }
            temp =temp.next;
        }
        System.out.println("Record updated successfully...");
        System.out.println("------------------------------------");
    }
}

/*
1: insert into student values(1,"nikita","barshi",98);
2: select * from student
3: select * from student where city ="Pune";
4: select count(Marks) from student;
5: select sum(marks) from student;
6: select Avg(marks) from student;
7: select Max(maks) from student;
8: select Min(maks) from student;
9: select * from student where name ="----"
10: update student set City ="____" where Rno = "---";
 */