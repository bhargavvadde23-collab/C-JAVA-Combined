//initialization through reference

// class student
// {
//     int id;
//     String name;
// }
// class teststudent
// {
//     public static void main(String args[])
//     {
//         student s1=new student();
//         student s2=new student();
//         s1.id=101;
//         s1.name="hulk";
//         s2.id=102;
//         s2.name="cap";
//         System.out.println(s1.id+" "+s1.name);
//         System.out.println(s2.id+" "+s2.name);
//     }
// }




//initialization through method

// class student
// {
//     int id;
//     String name;
//     void insert(int i,String n)
//     {
//         id=i;
//         name=n;
//     }
//     void display()
//     {
//         System.out.println(id+" "+name);
//     }
// }
// class teststudent
// {
//     public static void main(String args[])
//     {
//         student s1=new student();
//         student s2=new student();
//         s1.insert(111,"hulk");
//         s2.insert(222,"cap");
//         s1.display();
//         s2.display();
//     }
// }




//initialization through constructor

// class student
// {
//     int length;
//     int width;
//     void insert(int l,int w)
//     {
//         length=l;
//         width=w;
//     }
//     void calculate()
//     {
//         System.out.println(length*width);
//     }
// }
// class teststudent
// {
//     public static void main(String args[])
//     {
//         student s1=new student(),s2=new student();
//         s1.insert(2,4);
//         s2.insert(3,6);
//         s1.calculate();
//         s2.calculate();
//     }
// }




//real world example

// class account
// {
//     int acc_no;
//     String name;
//     float amount;
//     void insert(int a,String n,float amt)
//     {
//         acc_no=a;
//         name=n;
//         amount=amt;
//     }
//     void deposit(float amt)
//     {
//         amount=amount+amt;
//         System.out.println(amt+"deposited");
//     }
//     void withdraw(float amt)
//     {
//         if(amount<amt)
//         {
//             System.out.println("insufficient balance");
//         }
//         else
//         {
//             amount=amount-amt;
//             System.out.println(amt+"withdraw");
//         }
//     }
//     void checkbalance()
//     {
//         System.out.println("balance:"+amount);
//     }
//     void display()
//     {
//         System.out.println(acc_no+" "+name+" "+amount);
//     }
// }
// class testaccount
// {
//     public static void main(String args[])
//     {
//         account a1=new account();
//         a1.insert(80000,"hulk",1000);
//         a1.display();
//         a1.checkbalance();
//         a1.deposit(4000);
//         a1.withdraw(10000);
//         a1.checkbalance();
//     }
// }






