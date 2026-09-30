//super key-word used to refer immediate parent class variable

// class a
// {
//     String color="red";
// }
// class b extends a
// {
//     String color="green";
//     void run()
//     {
//         System.out.println(color);
//         System.out.println(super.color);
//     }
// }
// class test
// {
//     public static void main(String args[])
//     {
//         b b1=new b();
//         b1.run();
//     }
// }






//super key-word is used to invoke immediate parent class method

// class a
// {
//     void hello()
//     {
//         System.out.println("hello");
//     }
// }
// class b extends a
// {
//     void hello()
//     {
//         System.out.println("world");
//     }
//     void hi()
//     {
//         super.hello();
//         System.out.println("welcome");
//     }
// }
// class test
// {
//     public static void main(String args[])
//     {
//         b b1=new b();
//         b1.hi();
//     }
// }





//super key-word used to invoke parent class constructor

// class a
// {
//     a()
//     {
//         System.out.println("hello world");
//     }
// }
// class b extends a
// {
//     b()
//     {
//         super();
//         System.out.println("welcome");
//     }
// }
// class test
// {
//     public static void main(String args[])
//     {
//         b b1=new b();
//     }
// }




//final variable

// class a
// {
//     final int a=10;
//     void run()
//     {
//         a=20;
//     }
// }
// class b extends a
// {
//     public static void main(String args[])
//     {
//         b b1=new b();
//         b1.run();
//     }
// }




//final method

// class a
// {
//     final void run()
//     {
//         System.out.println("hello");
//     }
// }
// class b extends a
// {
//     void run()
//     {
//         System.out.println("hi");
//     }
//     public static void main(String args[])
//     {
//         b b1=new b();
//         b1.run();
//     }
// }





//final class

// final class a{}
// class b extends a
// {
//     public static void main(String args[])
//     {
//         System.out.println("hello");
//     }
// }












