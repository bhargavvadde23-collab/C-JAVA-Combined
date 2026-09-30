
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



//sorting an array

// class arr3
// {
//     public static void main(String args[])
//     {
//         int a[]={11,22,3,44,21,1,4,6,54,66};
//         int temp;

//         for (int i=0;i<a.length-1;i++)
//         {
//             for(int j=0;j<a.length-i-1;j++)
//             {
//                 if(a[j]>a[j+1])
//                 {
//                   temp=a[j];
//                   a[j]=a[j+1];
//                   a[j+1]=temp;
//                 }
//             }
//         }
//         for (int i=0;i<a.length;i++)
//         {
//             System.out.print(a[i]+" ");
//         }
//     }
// }





