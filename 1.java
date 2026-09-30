class vehicle
{
    void drive()
    {
        System.out.println("running");
    }
}
class car extends vehicle{
    void drive()
    {
        System.out.println("repairig car");
    }
    public static void main(String args[])
    {
        car obj=new car();
        obj.drive();
    }
}
