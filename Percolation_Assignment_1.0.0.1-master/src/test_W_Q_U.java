/**
 * Created by hady on 2/7/15.
 */
public class test_W_Q_U {
 public static void main(String arg[]){
     int N = StdIn.readInt();
     WeightedQuickUnionUF W_U = new WeightedQuickUnionUF(N);
     W_U.union(1,6);
     W_U.union(2,7);
     W_U.union(1,8);
     W_U.union(8,9);
     W_U.union(4,3);
     W_U.union(5,6);
     W_U.union(7,4);
     W_U.union(7,1);
     W_U.union(7,0);
     W_U.PrintAll();


 }
}
