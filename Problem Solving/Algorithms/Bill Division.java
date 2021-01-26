import java.util.Scanner;

public class mesele 
{
    public static void main(String[] args) 
    {
        Scanner x = new Scanner(System.in);
        
        int size = x.nextInt();
        int k = x.nextInt();//anna doesnt
        int bill[] = new int[size];
        
        int sum=0;
        
        for(int i=0;i<size;i++)
        {
            bill[i]= x.nextInt();
            sum+=bill[i];
           }
        
        sum=sum-bill[k];
        
        int ch= x.nextInt();// charged
        
        
        
        if(ch-(sum/2)==0)
            System.out.println("Bon Appetit");
        else
            System.out.println(ch-(sum/2));
        
        
    }
}
