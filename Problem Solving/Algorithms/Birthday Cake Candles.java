import java.util.Scanner;
public class problem 
{
    
    
    public static int birthdayCakeCandles(int n,int candles[])
    {
        int max=-101,count=0;
        for(int i=0;i<n;i++)
        {
            if(max<candles[i])
                max=candles[i];
        }
        for(int i=0;i<n;i++)
        {
            if(max==candles[i])
                count++;
        }
        return count;
    }
    
    public static void main(String[] args)
    {
        Scanner x = new Scanner(System.in);
        int n = x.nextInt();
        int candles[] = new int[n];
        for(int i=0;i<n;i++)
        {
            candles[i]= x.nextInt();
        }
        
        System.out.println(birthdayCakeCandles(n, candles));
        
    }
    
}
