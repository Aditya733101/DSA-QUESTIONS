import java.util.*;
class AramstrongNum {

  static boolean getArmstrong(int N,int power)
  {
      int temp = N;
      int re=0;
      while (N>0) {
          int rem=N%10;
           re +=Math.pow(rem,power);
           N/=10;
      }
      if(temp==re)
       return true;
       return false;

  } 

   static int digigCount(int n)
   {
       int count =0;
       while (n>0) {
           n/=10;
           count++;
       }
       return count;
   }


    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the number--");
        int n=sc.nextInt();
        int power = digigCount(n);
        if(getArmstrong(n,power))
        {
            System.out.println("Armstrong number");
        }
        else{
            System.out.println("not Armstrong--");
        }
        

    }
}
