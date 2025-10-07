public class program416 {
    public static void main(String[] args) {
        SinglyLL obj = new SinglyLL();
        obj.InsertFirst(10);
        obj.InsertFirst(20);
        obj.Display();
        obj.InsertLast(30);
        obj.InsertLast(40);
        obj.Display();
        obj.DeleteFirst();
        obj.Display();
        obj.DeleteLast();
        obj.Display();
        obj.InsertAtLoc(50,3);
        obj.InsertAtLoc(5,1);
        obj.InsertAtLoc(25,3);
        obj.Display();
        obj.DeleteAtLoc(3);
        obj.Display();
        System.out.println("no of nodes in LL are :"+obj.getCount());
    }
}
class Node
{
    public int data;
    public Node next;
    public Node(int ino)
    {
        data =ino;
        next = null;
    }
}

class SinglyLL
{
    private Node first;
    private int count;

    public SinglyLL() {
        first = null;
        count = 0;
    }
    public void InsertFirst(int iNO){
        Node newn = new Node(iNO);
        if(first==null) //LL is Empty // count==0
        {
            first = newn;
        } else {
            newn.next=first;
            first = newn;
        }
        count++;
    }
    public void InsertLast(int iNo){
        Node newn = new Node(iNo);
        if(first==null) //LL is Empty // count==0
        {
            first = newn;
        } else {
            Node temp = first;
            while(temp.next!=null)
            {
                temp = temp.next;
            }
            temp.next = newn;
        }
        count++;
    }
    public void InsertAtLoc(int iNo, int iLoc){
        //count =5 considered
        if((iLoc<1) ||(iLoc>count+1) ) //iLoc =7
        {
            return;
        }
        if(iLoc==1)
        {
            InsertFirst(iNo);
        } else if (iLoc==count+1)//iloc=6
        {
            InsertLast(iNo);
        } else
        { //iLoc = 2,3,4,5
            Node newn = new Node(iNo);

            Node temp = first;
            int i=0;
            for(i=1;i<iLoc-1;i++)
            {
                temp = temp.next;
            }
            newn.next = temp.next;
            temp.next = newn;
            count++;
        }
    }
    public void DeleteFirst(){
        if(first==null)//LL is Empty
        {
            return;
        } else if(first.next==null)//LL with single node
        {
            first = null;
        } else { //LL with multiple nodes
            first = first.next;
        }
        count--;
    }
    public void DeleteLast(){
        if(first==null)//LL is Empty
        {
            return;
        } else if(first.next==null)//LL with single node
        {
            first = null;
        }
        else { //LL contains n nodes
            Node temp = first;
            while(temp.next.next!=null){
                temp=temp.next;
            }
            temp.next = null;
        }
        count--;
    }
    public void DeleteAtLoc(int iLoc){
        //Count = 5
        if((iLoc<1)||(iLoc>count))//iLoc=-1,0,6,7
        {
            return;
        }

        if(iLoc==1)
        {
            DeleteFirst();
        } else if (iLoc==count)//iLoc=5
        {
            DeleteLast();
        } else {//iLoc = 2,3,4
            Node temp = first;
            int i=0;
            for(i=1;i<iLoc-1;i++)
            {
                temp = temp.next;
            }
            temp.next = temp.next.next;
            count--;
        }
    }
    public void Display(){
        Node temp = first;
        System.out.println("Elements in the Linked List are :");
        while(temp!=null) //type1
        {
            System.out.print("|"+temp.data+"| ->");
            temp=temp.next;
        }
        System.out.println("null");
    }
    public int getCount(){return count;}
}
