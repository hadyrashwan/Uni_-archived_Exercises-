/**
 * Created by hady on 2/15/15.
 */
public class Subset {
    public static void main(String[] args) {
        RandomizedQueue rq = new RandomizedQueue();
        int k = Integer.parseInt(args[0]);
        while (!StdIn.isEmpty())
            rq.enqueue(StdIn.readString());

        for (int i = 0; i < k; i++)
            StdOut.println(rq.dequeue());

    }}
