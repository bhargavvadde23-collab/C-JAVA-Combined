import javax.swing.*;
class swingexample
{
    public static void main(String args[])
    {
        JFrame f=new JFrame();
        JButton b=new JButton("click");
        b.setBounds(100,200,100,200);
        f.add(b);
        f.setSize(400,500);
        f.setTitle("frame");
        f.setVisible(true);
        f.setLayout(null);
    }
}