import java.util.Scanner;

public class TamGiac {
    public static void main(String[] args) {
        int a, b, c; // 3 canh tam giac
        double cvi, dtich, p;// p la nua chu vi

        Scanner in = new Scanner(System.in);

        System.out.printf("Nhap vao 3 canh:");
        a = in.nextInt();
        b = in.nextInt();
        c = in.nextInt();

        if ((a < b + c) && (b < a + c) && (c < a + b)) {
            cvi = a + b + c;
            p = cvi / 2;
            dtich = Math.sqrt(p * (p - a) * (p - b) * (p - c));
            System.out.printf("Chu vi=" + cvi);
            System.out.printf("\nDien tich=" + dtich);
        }
        in.close();
    }
}