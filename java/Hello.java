import java.awt.Graphics;
import javax.swing.JFrame;

public class Hello extends JFrame{
 public Hello() {
  setTitle("Hello"); // Tiêu đề form sẽ là Hello
  setVisible(true); // Cho nhìn thấy form, nếu truyền false sẽ ko thấy form
  setSize(400, 400);
 }
 @Override
 public void paint(Graphics g) {
  super.paint(g);
  g.drawString("Hello world", 200, 200);
  // Vẽ xâu "Hello world" tại vị trí (100, 100)
 }
 public static void main(String[] args) {
  new Hello(); // tạo mới một form
 }
}