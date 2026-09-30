class Linkedlist{

    //node class

    class Node{
        int data;
        Node next;

        Node(int data){
            this.data=data;
            next=null;
        }
    }

    Node head=null;

    public void insertatbegining(int data){

        Node newnode=new Node(data);

        newnode.next=head;
        head=newnode;

    }


    public void insertatend(int data){

        Node newnode=new Node(data);

        if(head==null){
            head=newnode;

            return;
        }

        Node temp=head;

        while(temp.next!=null){
            temp=temp.next;
            
        }

        temp.next=newnode;

    }


    public void insertatposition(int data,int position){

        if(position==1){
            insertatbegining(data);

            return;
        }

        Node newnode=new Node(data);

        Node temp=head;
        int count=1;

        while (temp!=null && count<position-1){

            temp=temp.next;
            count++;
        }

        if (temp==null){
            System.out.println("invalid position");
        }

        newnode.next=temp.next;
        temp.next=newnode;

        
    }

    public void deletenode(int key){

        Node temp=head , prev=null;

        if(temp!=null && temp.data==key){
            head=temp.next;
            return;

        }

        while(temp!=null && temp.data!=key){
            prev=temp;
            temp=temp.next;
        }

        if(temp==null){
            System.out.println("invalid data");
        }

        prev.next=temp.next;

    }

    public boolean search(int key){

        Node temp=head;
        
        while (temp!=null){
            if(temp.data==key)
                return true;
            
            temp=temp.next;
        }

        return false;

    }

    public void display(){

        Node temp=head;

        if(temp==null){
            System.out.println("list is empty");
        }

        while(temp!=null){
            System.out.print(temp.data+"->");
            temp=temp.next;
        }

        System.out.println("null");
    }

    public static void main(String[] args){

        Linkedlist list=new Linkedlist();

        list.insertatbegining(10);
        list.insertatend(20);
        list.insertatend(30);
        list.insertatposition(40,3);

        System.out.println("Linkedlist");
        list.display();

        list.deletenode(20);
        System.out.println("linkedlist after deletion");
        list.display();

        System.out.println("searching 10: "+list.search(10));
        System.out.println("searching 2: "+list.search(2));

    }


}