//Synchronized method
/* 
class table
{
    synchronized void printtable(int n)
    {
        System.out.println(n+"table");
        for (int i=0;i<5;i++)
        {
            System.out.println(n*i);
        }
        try
        {
            Thread.sleep(100);
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
}
class thread1 extends Thread
{
    table t;
    thread1(table t)
    {
        this.t=t;
    }
    public void run()
    {
        t.printtable(5);
    }
}
class a
{
    public static void main(String args[])
    {
        table obj=new table();
        thread1 t1=new thread1(obj);
        t1.start();
    }
}
*/






