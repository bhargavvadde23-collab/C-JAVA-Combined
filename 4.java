// class table
// {
//     synchronized void printtable(int n)
//     {
//         System.out.println(n+"th table");
//         for (int i=0;i<n;i++)
//         {
//             System.out.println(n*i);
//         }
//         try
//         {
//             Thread.sleep(100);
//         }
//         catch(Exception e)
//         {
//             System.out.println(e);
//         }
//     }
// }
// class thread1 extends Thread
// {
//     table t;
//     thread1(table t)
//     {
//         t.printtable(5);
//     }
// }
// class test 
// {
//     public static void main(String args[])
//     {
//         table obj=new table();
//         thread1 t1=new thread1(obj);
//         t1.start();
//     }
// }