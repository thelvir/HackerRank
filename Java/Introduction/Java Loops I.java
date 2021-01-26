import java.util.Scanner;

public class Ders3 
{
    public static void main(String[] args)
    {
        Scanner x = new Scanner(System.in);
        
        int a=x.nextInt();
        
        for(int i=1;i<=10;i++)
        {
            System.out.println(a+ " x " + i + " = "+ a*i);
        }
        
    }
}
