/**
 * Created by hady on 6/14/15.
 */
public class sheet3 {
    static int  startBond=11;
    public static void  main(String[] args) {
        int tempStart = startBond;
        int tempStartStore=0;
        while (tempStart > 0) {
            tempStartStore+=tempStart%10;

            tempStart = tempStart / 10;}

        System.out.println(tempStartStore);
    }
    }
