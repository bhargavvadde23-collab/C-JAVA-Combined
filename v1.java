//String initialization

// class a
// {
//     public static void main(String args[])
//     {
//         String s1="java";
//         char ch[]={'j','a','v','a','t','p','o','i','n','t'};
//         String s2=new String(ch);
//         String s3=new String("welcome");

//         System.out.println(s1);
//         System.out.println(s2);
//         System.out.println(s3);
//     }
// }

//string length

// class a
// {
//     public static void main(String args[])
//     {
//         String str="welcome to IIIt";
//         int strlength=str.length();

//         System.out.println(strlength)
//     }
// }


//string index (string.charAt(index))

// class a
// {
//     public static void main(String args[])
//     {
//         String str="hello world";
//         char ch=str.charAt(4);
//         System.out.println(ch);
//     }
// }



//String charAt()

// class a
// {
//     public static void main(String args[])
//     {
//         String str="I am Bhargav";
//         int strlength=str.length();

//         System.out.println("character at index: "+str.charAt(0));
//         System.out.println("character at index last:"+str.charAt(strlength-1));
//     }
// }






//index position at both begining and ending

// class a
// {
//     public static void main(String args[])
//     {
//         String str="I am Bhargav";
//         int strlength=str.length();

//         System.out.println("character at index: "+str.charAt(0));
//         System.out.println("character at index last:"+str.charAt(strlength-1));
//     }
// }





// class a
// {
//     public static void main(String args[])
//     {
//         String str="I am Bhargav";

//         int count =0;
//         for (int i=0;i<str.length()-1;i++)
//         {
//             if (str.charAt(i)=='a'){
//                 count++;
                
//         }
//         System.out.println("number of a's in str:"+count);
//     }
// }









//characters at odd position

// class a
// {
//     public static void main(String args[])
//     {
//         String str="I am Bhargav";
//         int i;
//         for (i=0;i<str.length()-1;i++)
//         {
//             if ((i%2)!=0)
//                 System.out.println(str.charAt(i));
//         }
//     }
// }






//reversing a string

// class a
// {
//     public static void main(String args[])
//     {
//         String str="bhargav";
//         int size=str.length();
//         for (int i=0;i<size;i++)
//         {
//             System.out.print(str.charAt(size-i-1));
//         }
//     }
// }









//String substring() method

// class a
// {
//     public static void main(String args[])
//     {
//         String str="helloworld";

//         String s1=str.substring(0);
//         System.out.println(s1);
//         String s2=str.substring(2,5);
//         System.out.println(s2);
//         String s3=str.substring(2,15);
//         System.out.println(s3);
//     }
// }




//3) substring.equlas(string)

// class a
// {
//     public static void main(String args[])
//     {
//         String str[]=
//         {
//             "virat kohli",
//             "harbajan singh",
//             "yuvraj singh",
//             "sandeep singh",
//             "ab devilliers",
//             "ms singh"
//         };
//         int str1=str.length;

//         String surname="singh";

//         int str2=surname.length();

//         for (int i=0;i<str1;i++)
//         {
//             int length=str[i].length();
//             String substr=str[i].substring(length-str2);

//             if (substr.equals(surname))
//             {
//                 System.out.println(str[i]);
//             }
//         }
//     }
// }






