package baitap;

import java.util.Scanner;

public class Bai3 {
    public static void main(String[] arg) {
        int n,i;

        Scanner in = new Scanner(System.in);

        System.out.printf("n=");
        n=in.nextInt();
        System.out.printf("chuyen sang co so ");
        i=in.nextInt();
        if (n>i)
        do { 
            System.out.print(n % i);
            n=n/i;}
        while ((n%i)!=0);
        else System.out.print("false");
    }
}
       