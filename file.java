// import java.io.File;
// import java.io.IOException;
// class createnewfile
// {
//     public static void main(String args[])
//     {
//         File f1=new File("D:3.txt");
//         if (f1.createNewFile())
//         {
//             System.out.println(f1.getName()+" created file");
//         }
//         else
//         {
//             System.out.println("file already exists");
//         }
//     }
// }







import java.io.File;
import java.io.IOException;
class read
{
    public static void main(String args[])
    {
        File f1=new File("vscode.java:2.txt");
        if (f1.exists())
        {
            System.out.println("File name:"+f1.getName());
            System.out.println("location:"+f1.getAbsolutePath());
            System.out.println("is file writable:"+f1.canWrite());
            System.out.println("is file readable:"+f1.canRead());
            System.out.println("length of file:"+f1.length());
        }
        else
        {
            System.out.println("file already exists");
        }
    }
}















