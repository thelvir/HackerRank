import java.util.Scanner;

public class mesele 
{
    public static void main(String[] args) 
    {
        Scanner x = new Scanner(System.in);
        
        int b = x.nextInt();
        int n = x.nextInt();
        int m = x.nextInt();
        int arrn[] = new int[n];
        int arrm[] = new int[m];
        int z=-1;
     
        for(int i=0;i<n;i++)
            arrn[i]=x.nextInt();
        for(int i=0;i<m;i++)
            arrm[i]=x.nextInt();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(arrn[i]+arrm[j]<=b  && arrn[i]+arrm[j]>z)
                {
                    z=arrn[i]+arrm[j];
                }
            }
        }
        System.out.println(z);
        
        
                
        
    }
}
