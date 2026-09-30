//encapsulation example

// class a
// {
//     private String name;
//     String getname()
//     {
//         return name;
//     }
//     void setname(String name)
//     {
//         this.name=name;
//     }
// }
// class b
// {
//     public static void main(String args[])
//     {
//         a a1=new a();
//         a1.setname("bhargav");
//         System.out.println(a1.getname());
//     }
// }



//abstrction example

// abstract class a
// {
//     abstract void run();
// }
// class b extends a
// {
//     void run()
//     {
//         System.out.println("running safely");
//     }
//     public static void main(String args[])
//     {
//         a a1=new b();
//         a1.run();
//     }
// }



// abstract class a
// {
//     abstract int intrest();
// }
// class b extends a
// {
//     int intrest()
//     {
//         return 7;
//     }
// }
// class c extends a
// {
//     int intrest()
//     {
//         return 8;
//     }
// }
// class test
// {
//     public static void main(String args[])
//     {
//         a a1=new b();
//         System.out.println("rate of intrest:"+a1.intrest());
//         a a2=new c();
//         System.out.println("rate of intrest:"+a2.intrest());
//     }
// }




//inheritance example
//single level

// class animal
// {
//     void eating()
//     {
//         System.out.println("eating");
//     }
// }
// class dog extends animal
// {
//     void barking()
//     {
//         System.out.println("barking");
//     }
// }
// class test
// {
//     public static void main(String args[])
//     {
//         dog d1=new dog();
//         d1.eating();
//         d1.barking();
//     }
// }



//multilevel example

// class animal
// {
//     void eat()
//     {
//         System.out.println("eating");
//     }
// }
// class dog extends animal
// {
//     void bark()
//     {
//         System.out.println("barking");
//     }
// }
// class cat extends dog
// {
//     void meow()
//     {
//         System.out.println("drinking");
//     }
// }
// class test
// {
//     public static void main(String args[])
//     {
//         cat c1=new cat();
//         c1.eat();
//         c1.bark();
//         c1.meow();
//     }
// }



//hierarchical example

// class animal
// {
//     void eat()
//     {
//         System.out.println("eating");
//     }
// }
// class dog extends animal
// {
//     void bark()
//     {
//         System.out.println("barking");
//     }
// }
// class cat extends animal
// {
//     void meow()
//     {
//         System.out.println("drinking");
//     }
// }
// class test
// {
//     public static void main(String args[])
//     {
//         dog d1=new dog();
//         cat c1=new cat();
//         d1.eat();
//         d1.bark();
//         c1.eat();
//         c1.meow();
//     }
// }




//polymorphism example
//run-time polymorphism(metod overriding)

// class bike
// {
//     void run()
//     {
//         System.out.println("running");
//     }
// }
// class honda extends bike
// {
//     void run()
//     {
//         System.out.println("running safely");
//     }
// }
// class test
// {
//     public static void main(String args[])
//     {
//         bike b1=new honda();
//         b1.run();
//     }
// }




//compile-time polymorphism

//method overloading example
// class a
// {
//     void add(int a,int b)
//     {
//         System.out.println(a+b);
//     }
//     void add(String name)
//     {
//         System.out.println(name);
//     }
//     public static void main(String args[])
//     {
//         a a1=new a();
//         a1.add(2,4);
//         a1.add("bhargav");
//     }
// }







