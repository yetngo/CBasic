import java.util.Scanner;   // import thư viện để nhập dữ liệu

// Tên class phải trùng với tên file
public class KeyboardScanner
{
    public static void main(String[] args)      // hàm main
    {
        int num1;       
        double num2;
        String name;
        double sum;

        Scanner in = new Scanner(System.in);

        System.out.print("Enter an integer: ");
        num1 = in.nextInt();    // Nhập 1 số integer sẽ làm như thế này

        System.out.print("Enter a floating point number: ");
        num2 = in.nextDouble();     // Tương tự với double, string, v.v..

        System.out.print("Enter your name: ");
        name = in.next();       // Kiểu dữ liệu không xác định thì thế này, mặc định sẽ là kiểu string, nếu cần thì éo kiểu sáng kiểu khác

        // Display to screen
        System.out.println("Hello " + name);
        sum = (double) num1 + num2;
        System.out.println("Sum " + num1 + "+" + num2 + "=" + sum);

        in.close();     // Sau khi nhập xong hết thì đóng đối tượng "in" lại

        // cuối hàm main thì không cần return như C
    
    }
}