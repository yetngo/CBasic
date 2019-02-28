import java.util.Scanner;

public class Keybroad {
    public static void main(String[] args) {
        int num1;
        double num2;
        String name;
        double sum;

        Scanner in = new Scanner(System.in);
        System.out.printf("Enter an integer");
        num1 = in.nextInt();
        System.out.printf("Enter a floating point number");
        num2 = in.nextDouble();
        System.out.printf("Enter your name");
        name = in.next();
        System.out.printf("hello" + name);
        sum = (double) num1 + num2;
        System.out.printf("sum=" + sum);
        in.close();
    }
}