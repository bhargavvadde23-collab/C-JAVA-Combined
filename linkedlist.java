//linkedlist program

// import java.util.*;
// class linkedlist1
// {
//     public static void main(String args[])
//     {
//         LinkedList<String> ll=new LinkedList<String>();

//         ll.add("bhargav");
//         ll.add("virat");
//         ll.add("abd");

//         Iterator<String> itr=ll.iterator();
//         while(itr.hasNext())
//         {
//             System.out.println(itr.next());
//         }
//     }
// }




//linked list example of adding elements

// import java.util.*;
// class linkedlist2
// {
//     public static void main(String args[])
//     {
//         LinkedList<String> ll=new LinkedList<String>();
//         ll.add("bhargav");
//         ll.add("virat");
//         ll.add("abd");
//         ll.add("rohit");
//         ll.add("hardik");

//         System.out.println("initial elements : "+ll);
//         System.out.println();
//         //adding element at specific position

//         ll.add(1,"gaurav");
//         System.out.println("after invoking index elements : "+ll);
//         System.out.println();

//         LinkedList<String> ll2=new LinkedList<String>();

//         ll2.add("king");
//         ll2.add("soldier");
//         ll2.add("queen");

//         System.out.println("second list of elements : "+ll2);
//         System.out.println();

//         //adding second list elements to the first list 

//         ll.addAll(ll2);
//         System.out.println("updated list : "+ll);
//         System.out.println();
        
//         LinkedList<String> ll3=new LinkedList<String>();

//         ll3.add("babu");
//         ll3.add("aa");

//         //adding third list elements to the first list elements at specific position

//         ll.addAll(1,ll3);
//         System.out.println("after adding thirs list elements : "+ll);
//         System.out.println();

//         //addding element at first position

//         ll.addFirst("lokesh");
//         System.out.println("after adding first element : "+ll);
//         System.out.println();

//         //adding element to last

//         ll.addLast("raju");
//         System.out.println("after last element: "+ll);
//     }
// }





//java example for removing elements from the list

// import java.util.*;
// class linkedlist3
// {
//     public static void main(String args[])
//     {
//         LinkedList<String> ll=new LinkedList<String>();
//         ll.add("bhargav");
//         ll.add("aa");
//         ll.add("vijay");
//         ll.add("hardik");
//         ll.add("virat");
//         ll.add("bhargav");
//         ll.add("aa");
//         ll.add("abd");
//         ll.add("styen");

//         System.out.println("initial elements : "+ll);
//         System.out.println();
//         //removing specific element from the list
//         ll.remove("aa");
//         System.out.println("after removing element: "+ll);
//         System.out.println();
//         //removing element at specific index
//         ll.remove(0);
//         System.out.println("after removing index element: "+ll);
//         System.out.println();
//         LinkedList<String> ll2=new LinkedList<String>();
//         ll2.add("king");
//         ll2.add("queen");
//         ll2.add("soldier");
//         //adding new elements to the list
//         ll.addAll(ll2);
//         System.out.println("after adding second elements to list: "+ll);
//         System.out.println();
//         //removing second elements from the list 
//         ll.removeAll(ll2);
//         System.out.println("after removing second list elements: "+ll);
//         System.out.println();
//         //removing first element from the list
//         ll.removeFirst();
//         System.out.println("after removing first element: "+ll);
//         System.out.println();
//         //removing last element from the list
//         ll.removeLast();
//         System.out.println("after removing last element: "+ll);
//         System.out.println();
//         //removing first occurence
//         ll.removeFirstOccurrence("bhargav");
//         System.out.println("removing first occurence: "+ll);
//         System.out.println();
//         //removing last occurence
//         ll.removeLastOccurrence("aa");
//         System.out.println("last occurence: "+ll);
//         System.out.println();
//         //removing all elements from the list
//         ll.clear();
//         System.out.println("after invoking clear: "+ll);
//         System.out.println();
//     }
// }











