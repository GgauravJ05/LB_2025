public class program409 {
    public static void main(String[] args) {
        SinglyLL obj = new SinglyLL();
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
    public void InsertFirst(int iNO){}
    public void InsertLast(int iNo){}
    public void InsertAtLoc(int iNo, int iLoc){}
    public void DeleteFirst(){}
    public void DeleteLast(){}
    public void DeleteAtLoc(int iLoc){}
    public void Display(){}
    public int getCount(){return count;}
}
