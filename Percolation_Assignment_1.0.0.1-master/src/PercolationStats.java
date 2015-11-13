/**
 * Created by hady on 2/6/15.
 */
public class PercolationStats {
    private Percolation newPercolationStat;
    private double[] thresholdArray; // array to include the threshold values
    private double T; // T number of  tryies
    private int sitiesCounter;

    public PercolationStats(int N, int T) {
        if (T <  1 || N <  1) {
            throw new IllegalArgumentException(" out of N range");
        }
        thresholdArray = new double[T];
        int newI, newJ; // axis
        this.T = T;
        for (int i = 0; i < T; i++) {

            newPercolationStat = new Percolation(N);
            newI = StdRandom.uniform(1, N + 1); // random i
            newJ = StdRandom.uniform(1, N + 1); // random j
            newPercolationStat.open(newI, newJ);
            sitiesCounter = 1; // intial value
            while (!newPercolationStat.percolates()) {
                newI = StdRandom.uniform(1, N + 1); //random i
                newJ = StdRandom.uniform(1, N + 1); // random j the same as above but for the loop

                if (!newPercolationStat.isOpen(newI, newJ)) { // escape if the site is already open
                    newPercolationStat.open(newI, newJ); // open the site
                    sitiesCounter++; //inc the number of opened sites or nodes
                }
            }

            thresholdArray[i] = ((double) sitiesCounter) / (N * N);
        }
    }

    public double mean() {
        return StdStats.mean(thresholdArray);
    }

    public double stddev() {
        return StdStats.stddev(thresholdArray);
    }

    public double confidenceLo() {
        return mean() - (1.96 * stddev()) / Math.sqrt(T);
    }

    public double confidenceHi() {
        return mean() + (1.96 * stddev()) / Math.sqrt(T);
    }

    public static void main(String[] args) {
        int T, N;
        StdOut.println("Enter your T");
        T = StdIn.readInt();
        StdOut.println("Enter your N ");
        N = StdIn.readInt();
        PercolationStats percolationStats = new PercolationStats(N, T);

        StdOut.println(" PercolationStats " + T + " " + N);
        StdOut.println("Mean " + percolationStats.mean());
        StdOut.println("stddev " + percolationStats.stddev());
        StdOut.println("95% confidence interval = " + percolationStats.confidenceLo() + ", " + percolationStats.confidenceHi());

    }
}