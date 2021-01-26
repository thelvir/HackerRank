import java.util.Scanner;

public class mesele 
{
    public static void main(String[] args) {
        Scanner x = new Scanner(System.in);
      int t = x.nextInt();
      int count=0; //geciken sayi
      
      for(int j=0;j<t;j++)
      {
          int n = x.nextInt();
          int k = x.nextInt();//teleb olunan
          int arr[] = new int[n];
          for(int i=0;i<n;i++)
          {
              arr[i]=x.nextInt();
              if(arr[i]<=0)
                  count++;
          }
          if(count>=k)
              System.out.println("NO");
          else
              System.out.println("YES");
          count=0;
      }
      
        
    }
}
