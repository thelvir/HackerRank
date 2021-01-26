import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double payment = scanner.nextDouble();
        scanner.close();

        NumberFormat objus=NumberFormat.getCurrencyInstance(Locale.US);
        NumberFormat objin=NumberFormat.getCurrencyInstance(new Locale("en","IN"));
        NumberFormat objch=NumberFormat.getCurrencyInstance(Locale.CHINA);
        NumberFormat objfr=NumberFormat.getCurrencyInstance(Locale.FRANCE);

        String us=objus.format(payment);
        String in=objin.format(payment);
        String ch=objch.format(payment) ;
        String fr=objfr.format(payment);
        
        System.out.println("US: " +us );
        System.out.println("India: " + in );
        System.out.println("China: " + ch);
        System.out.println("France: " + fr);
    }
}
