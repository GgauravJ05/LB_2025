public class program408 {
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
}
