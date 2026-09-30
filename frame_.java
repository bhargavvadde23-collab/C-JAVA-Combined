import java.awt.*;
class myframe extends Frame
{
    myframe()
    {
        setVisible(true);
        setSize(400,300);
        setTitle("creation of frame");
        setBackground(Color.green);
    }
    public void paint(Graphics g)
    {
        Font f=new Font("ARIAL",Font.BOLD+Font.ITALIC,35);
        g.setFont(f);
        setForeground(Color.red);
        g.drawString("vedavyass",100,100);
    }
}
class FrameByExtendingFrameClass
{
    public static void main(String args[])
    {
        myframe m=new myframe();
    }
}