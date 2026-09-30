
//1) copying one array elements to another array 

// class arr
// {
//     public static void main(String args[])
//     {

//         int a1[]={11,22,33,44,55};
//         int a2[]=new int[a1.length];

//         for (int i=0;i<a1.length;i++)
//         {
//             System.out.print(a1[i]+" ");
//         }
//         System.out.println();
//         for (int i=0;i<a1.length;i++)
//         {
//             a2[i]=a1[i];
//         }
//         for (int i=0;i<a1.length;i++)
//         {
//             System.out.print(a2[i]+" ");
//         }
//     }
// }




//2) array elements from the user

// import java.util.Scanner;
// class arr2
// {
//     public static void main(String args[])
//     {
//         Scanner s=new Scanner(System.in);
//         int[] a1=new int[5];

//         System.out.println("enter the elements");
//         for (int i=0;i<a1.length;i++)
//         {
//             a1[i]=s.nextInt();
//         }
//         for (int i=0;i<a1.length;i++)
//         {
//             System.out.print(a1[i]+" ");
//         }
//     }
// }





// class arr3
// {
//     public static void main(String args[])
//     {
//         int a1[]={11,22,3,44,21,1,4,6,54,66};
//         int temp;

//         for (int i=0;i<a1.length-1;i++)
//         {
//             for(int j=0;j<a1.length-i-1;j++)
//             {
//                 if(a[j]>a[j+1])
//                 {
//                   temp=a[j];
//                   a[j]=a[j+1];
//                   a[j+1]=temp;
//                 }
//             }
//         }
//         for (int i=0;i<a1.length;i++)
//         {
//             System.out.print(a1[i]+" ");
//         }
//     }
// }





public class arr4
{
    public static void main(String args[])
    {
        int i,j;
        int a[]={1,2,2,2,1,3,4,5,1,5,3,6,7};

        int [] fr=new int[a.length];

        int visited=-1;

        for (i=0;i<a.length;i++)
        {
            int count=1;
            for (j=0;j<a.length;j++)
            {
                if (a[i]==a[j])
                {
                    count++;
                    fr[j]=visited;
                }
            }
        }
        if (fr[i]!=visited)
        {
            fr[i]=count;
        }
        System.out.println("---------------------");
        System.out.println("Element | frequency");
        System.out.println("---------------------");

        for (i=0;i<a.length;i++)
        {
            if (fr[i]!=visited)
            {
                System.out.println(" "+a[i]+" "+fr[i]);
            }
        }
        System.out.println("----------------------");
    }
}
















