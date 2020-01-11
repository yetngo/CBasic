package baitap;

import java.util.Scanner;

public class Baimot {
    public static void main(String[] arg) {
        int a, b, c;
        double delta;

        Scanner in = new Scanner(System.in);

        System.out.printf("Phuong trinh bac 2 co dang ax^2+bx+c=0(a||0)/n");
        System.out.printf("Nhap vao a, b, c");
        a = in.nextInt();
        b = in.nextInt();
        c = in.nextInt();
        if (a != 0) {
            delta = b * b - 4 * a * c;
            if (delta < 0)
                System.out.printf("phuong trinh vo nghiem");
            else if (delta == 0)
                System.out.printf("phuong trinh co nghiem kep x1=x2=" + (-b / (2 * a)));
            else
                System.out.printf("pt co 2 nghiem x1 = " + (-b + Math.sqrt(delta)) / (2 * a)
                 + "\n1x2 = "+ (-b - Math.sqrt(delta)) / (2 * a));
        } else
            System.out.printf("day ko phai la pt b2");
    }
}
