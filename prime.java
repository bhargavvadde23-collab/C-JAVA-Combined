import java.util.*;

class prime{
    public static void main(String args[]){
        // System.out.println("hello world");

        Scanner sc=new Scanner(System.in);

        int n=sc.nextInt();

        int count=0;

        for(int i=1;i<=n;i++){

            if(n%i==0){
                count++;
            }
        }

        if(count==2){
            System.out.println("prime");
        }
        else{
            System.out.println("not");
        }
        sc.close();
    }
}