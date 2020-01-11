package baitap;

import java.util.Scanner;

public class Baihai {
    public static void main(String[] arg) {
        int n,i,gt;

        Scanner in = new Scanner(System.in);

        System.out.printf("n=");
        n=in.nextInt();
        gt=1;
        for (i=1;i<=n;i++) gt*=i;
        System.out.printf("gt="+gt);
    }
 }