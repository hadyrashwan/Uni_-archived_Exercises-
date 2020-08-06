import java.util.Scanner;

/**
 * Created by hady on 29/07/15.
 */
public class Class1 {
    String input="dkfdfg";
    void printing(){
        System.out.print(input);
    }
    void scanning(){
        Scanner sc = new Scanner(System.in);
        String input = sc.next();
        this.input=input;
    }
    public Class1() {
        super();
    }

    public static void main(String[] args) {
        Class1 class1 = new Class1();
        class1.scanning();
        class1.printing();
    }
}
