import java.io.*;
import java.util.ArrayList;
import java.util.List;

/**
 * Created by hady on 6/14/15.
 */
public class Main {


    /**
     * Created by hady on 6/13/15.
     */
    private int startBond ;
    private   int endBond ;
    List<Integer> primes = new ArrayList<Integer>(); // all prime number to the end edge
    List<Integer> primesOut = new ArrayList<Integer>(); // the prime number that are in range plus the 2 added digits the edges


    private Main() {
    }

    private     String ReadLn (int maxLg)  // utility function to read from stdin
    {
        byte lin[] = new byte [maxLg];
        int lg = 0, car = -1;
        String line = "";

        try
        {
            while (lg < maxLg)
            {
                car = System.in.read();
                if ((car < 0) || (car == '\n')) break;
                lin [lg++] += car;
            }
        }
        catch (IOException e)
        {
            return (null);
        }

        if ((car < 0) && (lg == 0)) return (null);  // eof
        return (new String (lin, 0, lg));
    }

    private void startPrime() { //  get the start of the range add digits and see if its prime
        int tempStart = startBond;
        int tempStartStore=0;
        while (tempStart > 0) {
            tempStartStore+=tempStart%10;

            tempStart = tempStart / 10;}

        if (primes.contains(tempStartStore) && !primesOut.contains(tempStartStore)) // if its in side the prime table so its prime
            primesOut.add(tempStartStore);} // see if its inside primesOut so if its already counted dont dublicate
    private void getInput(){ // get both range edges

        String input=ReadLn(100000);
         String[] tokens = input.split(" ");
         int[] inputNumbers = new int[tokens.length];
         for (int i = 0; i < tokens.length; i++) {
             inputNumbers[i] = Integer.parseInt(tokens[i]);}

         startBond = inputNumbers[0]  ;
         endBond =inputNumbers[1] ;

    }
    private void endPrime(){ // get the end of the range the same as the start <code dublicate>
        int tempStart=endBond ;
        int tempStartStore=0;
        while (tempStart > 0) {
            tempStartStore+=tempStart%10;

            tempStart = tempStart / 10;}

        if (primes.contains(tempStartStore) && !primesOut.contains(tempStartStore))
            primesOut.add(tempStartStore);}
    private void inBetweenPrime() { // genreate all the possblities till the edge number and put them in prime
        for (int i = 2; i < endBond+1; i++) {
            if(checkPrime(i)){
                primes.add(i);
                if(i>=startBond)primesOut.add(i); // see if the prime number is in the range add it
            }
        }
    }

    private    boolean checkPrime(int n) { // check the number if its prime or not
        for (Integer i : primes) {
            if(i*i > n ){
                break;
            }else if(n%i==0 )
                return false;
        }
        return true;
    }
    public void mainPrimeChecker(){ // run the 3 functions and count the out array size
        getInput();
        inBetweenPrime();
        startPrime();
        endPrime();
        System.out.println(primesOut.size());
    }
    public static void main(String[] args) { // for  testing
        Main pl = new Main();
       int loop=Integer.parseInt(pl.ReadLn(10000));
        while (loop>0){
            Main p3 = new Main();
            p3.mainPrimeChecker();
            p3=null;
            loop--;}
    }}


