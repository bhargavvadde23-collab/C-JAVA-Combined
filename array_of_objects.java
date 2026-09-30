//array of objects

// class a
// {
//     public static void main(String args[])
//     {
//         product[] obj=new product[5];
//         obj[0]=new product(11,"bhargav");
//         obj[1]=new product(22,"hello");
//         obj[2]=new product(33,"hi");
//         obj[3]=new product(44,"welcome");
//         obj[4]=new product(55,"hell");

//         System.out.println("product 1");
//         obj[0].display();
//         System.out.println("product 2");
//         obj[1].display();
//         System.out.println("product 3");
//         obj[2].display();
//         System.out.println("product 4");
//         obj[3].display();
//         System.out.println("product 5");
//         obj[4].display();
//     }
// }
// class product
// {
//     int pro_id;
//     String name;

//     product(int pid,String n)
//     {
//         pro_id=pid;
//         name=n;
//     }
//     void display()
//     {
//         System.out.println("product id "+pro_id+" product name "+name);
//         System.out.println();
//     }
// }



//command line arguments

 class a
 {
     public static void main(String args[])
     {
         for (int i=0;i<args.length;i++)
         {
             System.out.println(args[i]);
         }
     }
}



















