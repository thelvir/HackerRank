import java.util.Scanner;
public class problem 
{
    public static int diagonalDifference(int size,int arr[][])
    {
        int s1=0,s2=0,ans=0;
        for(int i=0;i<size;i++)
        {
            for(int j=0;j<size;j++)
            {
                if(j==i)
                    s1+=arr[i][j];
                if(size-1-i==j)
                    s2+=arr[i][j];
            }
            
        }
        ans=s1-s2;
        if(ans<0)
            ans*=-1;
        return ans;
    }
    public static void main(String[] args)
    {
        Scanner x = new Scanner(System.in);
        int size = x.nextInt();
        int[][] arr = new int[size][size];
        
        for(int i=0;i<size;i++)
        {
            for(int j=0;j<size;j++)
            {
                arr[i][j] = x.nextInt();
            }
        }
        
        System.out.println(diagonalDifference(size, arr));
        
    }
    
}
