import java.util.Random;
class a
{
    public static void main(String args[])
    {
        int i;
        Random r1=new Random();
        System.out.println("longs "+r1.longs());
        System.out.println("doubles "+r1.doubles());
        byte bytes[]=new byte[10];
        r1.nextBytes(bytes);
        for (i=0;i<10;i++)
        {
            System.out.println(bytes[i]);
            System.out.println(r1.nextInt());
            System.out.println(r1.nextDouble());
            System.out.println(r1.nextLong());
        }
    }
}