import java.util.ArrayList;
import java.util.List;

/**
 * Created by hady on 6/14/15.
 */
public class shit2 {
    static List<Integer> primes = new ArrayList<Integer>();

    public static void main(String[] args) {
        int end=20;
        for (int i = 2; i < end; i++) {
            if(checkPrime(i)){
                primes.add(i);
            }
        }
        System.out.println(primes);
    }

    private static boolean checkPrime(int n) {
        for (Integer i : primes) {
            if(i*i > n ){
                break;
            }else if(n%i==0 )
                return false;
        }
        return true;
    }
}
