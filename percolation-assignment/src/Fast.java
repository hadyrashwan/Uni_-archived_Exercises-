import java.util.Arrays;

/**
 * Created by hady on 2/22/15.
 */
public class Fast {


    private Point [] p;
    private int size;

    public Fast() {
        p = null;
        size = 0;
    }

    private Fast(In in) {
        size = in.readInt();
        p = new Point [size];
        for (int i = 0; i < size; i++) {
            int x = in.readInt();
            int y = in.readInt();
            p[i] = new Point(x, y);
            p[i].draw();
        }
        Arrays.sort(p);
    }


    private void search() {
        Point [] aux = new Point[size];
        for (int i = 0; i < size; i++)
            aux[i] = p[i];
        for (int i = 0; i < size; i++) {
            Arrays.sort(aux);
            Arrays.sort(aux, p[i].SLOPE_ORDER);
            int start = 1;
            int end = 1;
            for (int j = 2; j < size+1; j++) {
                if (j != size && p[i].slopeTo(aux[j]) == p[i].slopeTo(aux[j-1])) {
                    end++;
                }
                else {
                    if (end > start+1) {
                        int k;
                        for (k = start; k <= end; k++) {
                            if (p[i].compareTo(aux[k]) >= 0) {
                                break;
                            }
                        }
                        if (k == end+1) {
                            p[i].drawTo(aux[end]);
                            StdOut.print(p[i].toString());
                            for (int m = start; m <= end; m++) {
                                StdOut.print(" -> "+aux[m].toString());
                            }
                            StdOut.println();
                        }
                    }
                    start = j;
                    end = j;
                }
            }
        }
    }

    public static void main(String [] args) {
        In in = new In(args[0]);

        StdDraw.setXscale(0, 32768);
        StdDraw.setYscale(0, 32768);

        Fast f = new Fast(in);
        f.search();
    }
    }
