import java.math.BigInteger;
import java.util.*;

class Main{

    public static void main(String args[])
    {
        int i,j,k,l,m,n,a,b,c,d,x,y;
        Scanner scanner = new Scanner(System.in);
        while (scanner.hasNext())
        {
            BigInteger maximum = new BigInteger("-999999999999999999");
            List<Integer> nums =  new ArrayList<>();
            while (scanner.hasNext())
            {
                k = scanner.nextInt();
                if(k==-999999)
                    break;
                nums.add(k);
            }
            for(i=0;i<nums.size();i++)
            {
                for(j=1;j<=nums.size()-i;j++)
                {
                    BigInteger multipliedResult = new BigInteger("1");
                    for(k=i;k<i+j;k++)
                    {
                        multipliedResult = multipliedResult.multiply(BigInteger.valueOf(nums.get(k)));
                        maximum = maximum.max(multipliedResult);
//                        System.out.print(nums.get(k)+" multiplied result "+multipliedResult+" ");

                    }
//                    System.out.println();
                }
            }
            System.out.println(maximum);

        }
    }


}

/*
1 2 3 -999999
-5 -2 2 -30 -999999
-8 -999999
-1 0 -2 -999999


* */
