 import java.util.*;

 class Sequence {
    public static long FastExpo(long x, long y) {
        if (y==0) {
            return 1;
        } else {
            long z = FastExpo(x, y/2);
            if (y%2==0) {
                return (z*z)%1000000007;
            } 
            else {
                return (z*z)%1000000007 * x %1000000007;
            }
        }
    }
    
    public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            String inp = sc.next();
            int len = inp.length();
            long res = 0;
            long zero = 0, one = 0, que = 0;
            for (char ch: inp.toCharArray()) {
                if (ch == '0') {
                    zero += 1;
                } else if (ch == '1') {
                    one += 1;
                } else {
                    que += 1;
                }
            }
            long mq = que;
        
            for (int i=len-1; i>=0; i--) {
                if (inp.charAt(i) == '?') {
                    que -= 1;
                    res += FastExpo(2, mq-1-que) * (que * FastExpo(2, que-1)%1000000007 + one * FastExpo(2, que)%1000000007)%1000000007;
                } else if (inp.charAt(i) == '0') {
                    zero -= 1;
                    res += FastExpo(2, mq-que) * (que * FastExpo(2, que-1)%1000000007 + one * FastExpo(2, que)%1000000007)%1000000007;
                } else {
                    one -= 1;
                }
                res %= 1000000007;
                
            }
            System.out.println(res);
        }       
}
