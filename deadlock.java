class deadlock
{
    public static void main(String args[])
    {
        final String r1="rgukt";
        final String r2="hello";
        Thread t1=new Thread()
        {
            public void run()
            {
                synchronized(r1)
                {
                    System.out.println("Thread:locked r1");
                    try
                    {
                        Thread.sleep(100);
                    }
                    catch(Exception e)
                    {
                        System.out.println(e);
                    }
                    synchronized(r2)
                    {
                        System.out.println("Thread1:locked r2");
                    }
                }
            }
        };
        Thread t2=new Thread()
        {
            synchronized(r2)
            {
                System.out.println("Thread2:locked r2");
                try
                {
                    Thread.sleep(100);
                }
                catch(Exception e)
                {
                    System.out.println(e);
                }
                synchronized(r1)
                {
                    System.out.println("Thread2:locked r1");
                }
            }
        };
        t1.start();
        t2.start();
    }
}