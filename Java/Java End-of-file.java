import java.util.Scanner;

public class problem 
{
    public static void main(String[] args) 
        {
            Scanner x = new Scanner(System.in);
            int count=1;
            
            while(x.hasNextLine())
            {
                
                String s = x.nextLine();
                
                System.out.println(count+" "+s);
                count++;
            }
            
        }
}
