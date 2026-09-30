import java.util.Scanner;

class classroom{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);

        int evensum=0;
        int oddsum=0;
        int n;

        System.out.print("enter no of iterations:");
        int limit=sc.nextInt();

        for (int i=1;i<=limit;i++){

            System.out.print("enter the values:");
            n=sc.nextInt();

            if(n%2==0){
                evensum+=n;
            }
            else{
                oddsum+=n;
            }
        }
        System.out.println("even sum :"+evensum+" ");
        System.out.println("odd sum :"+oddsum+" ");

        sc.close();
    }
}