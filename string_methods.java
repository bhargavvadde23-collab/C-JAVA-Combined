//1) string length

// class a
// {
//     public static void main(String args[])
//     {
//         String str="welcome to IIIt";
//         int strlength=str.length();

//         System.out.println(strlength)
//     }
// }




//2) string index (string.charAt(index))

// class a
// {
//     public static void main(String args[])
//     {
//         String str="hello world";
//         char ch=str.charAt(4);
//         System.out.println(ch);
//     }
// }





//3) Stirng equqls or not

// class a
// {
//     public static void main(String args[])
//     {
//         String s1="Bhargav";
//         String s2="Bhargav";

//         if (s1.equals(s2))
//         {
//             System.out.print("yes");
//         }
//         else
//         {
//             System.out.print("no");
//         }
//     }
// }





//4) String.contains();

// class a
// {
//     public static void main(String args[])
//     {
//         String str="what are you doing";

//         System.out.println(str.contains("are"));
//         System.out.println(str.contains("what are"));
//         System.out.println(str.contains("doing"));
//         System.out.println(str.contains("hello"));
//     }
// }




//5) String join()

// class a
// {
//     public static void main(String args[])
//     {
//         String str1=String.join("-","Iam","Bhargav");

//         System.out.print(str1);
//     }
// }






//6) String concatination

// class a
// {
//     public static void main(String args[])
//     {
//         String s1="CSE";

//         System.out.print("concatination of s1 :"+s1.concat(" BRANCH"));
//     }
// }




//7) String replace

// class a
// {
//     public static void main(String args[])
//     {
//         String s1="Hello everyone how are you";

//         System.out.print("replacing e with E: "+s1.replace('e','E'));
//     }
// }




//8) String startsWith()

// class a
// {
//     public static void main(String args[])
//     {
//         String s1="I am Bhargav";

//         System.out.print("Startswith : "+s1.startsWith("I"));
//     }
// }




//9) String endsWith()

// class a
// {
//     public static void main(String args[])
//     {
//         String s1="I am bhargav";

//         System.out.println("endsWith 'v':"+s1.endsWith("v"));

//         System.out.println("endsWith : 'V' "+s1.endsWith("V"));
//     }
// }




//10) String trim()

// class a
// {
//     public static void main(String args[])
//     {
//         String s1=" String trim method ";

//         System.out.println("before trimming : "+s1);
//         System.out.println("after trimming : "+s1.trim());
//     }
// }




//11) String.toUpperCase();


// class a
// {
//     public static void main(String args[])
//     {
//         String s1="javatpoint And String";

//         String s2=s1.toUpperCase();

//         System.out.println(s2);
//     }
// }





//12) String.toLowerCase()

// class a
// {
//     public static void main(String args[])
//     {
//         String s1="JAVATPOINT AND String";

//         String s2=s1.toLowerCase();

//         System.out.println(s2);
//     }
// }




//13) String.intern();

// class a
// {
//     public static void main(String args[])
//     {
//         String s1=new String("hello");
//         String s2="hello";
//         String s3=s1.intern();

//         System.out.println(s1==s2);
//         System.out.println(s2==s3);
//     }
// }





//14) String indexOf();

// class a
// {
//     public static void main(String args[])
//     {
//         String s1="this is java program";

//         int a1=s1.indexOf('i');
//         System.out.println(a1);

//         int a2=s1.indexOf("java");
//         System.out.println(a2);

//         int a3=s1.indexOf("is",4);
//         System.out.println(a3);
//     }
// }





//15) StringBuffer string.append();

// class a
// {
//     public static void main(String args[])
//     {
//         StringBuffer s1=new StringBuffer("hello ");
//         s1.append("world");

//         System.out.println(s1);
//     }
// }




//16) StringBuffer string.insert();

// class a
// {
//     public static void main(String args[])
//     {
//         StringBuffer s1=new StringBuffer("hello ");
//         s1.insert(1,"i ");

//         System.out.println(s1);
//     }
// }




//17) StrinBuffer String.reverse();

// class a
// {
//     public static void main(String args[])
//     {
//         StringBuffer s1=new StringBuffer("hello world");
//         s1.reverse();

//         System.out.println(s1);
//     }
// }




//18) StrinBuffer String.replace

// class a
// {
//     public static void main(String args[])
//     {
//         StringBuffer s1=new StringBuffer("hello");
//         s1.replace(1,2,"java");

//         System.out.println(s1);
//     }
// }





//19) StringBuffer String.delete();

// class a
// {
//     public static void main(String args[])
//     {
//         StringBuffer s1=new StringBuffer("hello");
//         s1.delete(1,3);

//         System.out.println(s1);
//     }
// }




//20) StringBuffer String.reverse();

// class a
// {
//     public static void main(String args[])
//     {
//         StringBuffer s1=new StringBuffer("hello");
//         s1.reverse();

//         System.out.println(s1);
//     }
// }





//21) StringTokenizer 
/*
 import java.util.StringTokenizer;

 class a
 {
     public static void main(String args[])
     {
         String input="hi how are you feeling today";
         StringTokenizer t1=new StringTokenizer(input);
         while(t1.hasMoreTokens())
         {
             String token=t1.nextToken();
             System.out.println(token);
         }
     }
}
*/










