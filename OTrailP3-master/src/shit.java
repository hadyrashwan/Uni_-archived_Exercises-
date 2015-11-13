import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
public class shit {
    static	    List<Integer>  weightArray = new ArrayList<Integer>();
    public static void main(String[] args) { // for  testing
        Scanner scanner = new Scanner(System.in);

        String input  = scanner.nextLine();
        String[] tokens = input.split(" ");
        scanner.close();
        int[] inputNumbers = new int[tokens.length];
        for(int i = 0; i < tokens.length; i++) {
            inputNumbers[i] = Integer.parseInt(tokens[i]);
        }
        for(int i=0 ; i<inputNumbers.length;i++)
        System.out.print(inputNumbers[i]);
    }}
