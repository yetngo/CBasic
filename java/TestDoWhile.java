import java.util.Scanner;

public class TestDoWhile {
 public static void main(String[] args) {
  int num;
  Scanner scanner = new Scanner(System.in);
  do {
   System.out.println("Nham vao 1 so tu nam trong [1-10]:");
   num = scanner.nextInt();
  } while(num < 1 || num > 10);
  scanner.close();
 }

}

