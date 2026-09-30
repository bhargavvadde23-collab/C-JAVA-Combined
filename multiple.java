import java.util.*;

class multiple{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);

        while(true){
            System.out.print("enter the number:");
            int n=sc.nextInt();

            if(n%10==0){
                continue;
            }
            System.out.println(n);
            
        }
    }
    
}