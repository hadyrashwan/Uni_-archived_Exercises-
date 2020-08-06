/**
 * Created by hady on 2/22/15.
 */
public class Brute {

    public static void main(String[] args) {
        StdDraw.setXscale(0, 32768);
        StdDraw.setYscale(0, 32768);

        In in = new In(args[0]);
        int num = in.readInt();
        Point points[] = new Point[num];
        for (int i = 0; i < num; i++) { // take inputs
            int x = in.readInt();
            int y = in.readInt();
            points[i] = new Point(x, y); // put them to points
            points[i].draw(); // draw
        }

        for (int i = 0; i < num; i++) //sort the inputs
            for (int j = 0; j < num - i - 1; j++) {
                if (points[j].compareTo(points[j + 1]) == 1) { // see if j point is greater that the next point
                    Point temp = points[j];
                    points[j] = points[j + 1]; // swaping using temp
                    points[j + 1] = temp;
                }
            }

        for (int i = 0; i < num; i++)
            for (int j = i + 1; j < num; j++)
                for (int k = j + 1; k < num; k++)
                    for (int l = k + 1; l < num; l++) {
                        if (points[i].slopeTo(points[j]) == points[j].slopeTo(points[k])
                                && points[j].slopeTo(points[k]) == points[k].slopeTo(points[l])) { //see if the slope of i,j are equal and if the slope of k,l are equal
                            StdOut.print(points[i].toString() + "->" + points[j].toString() + "->" + points[k].toString() + "->" + points[l].toString() + "\n");points[i].drawTo(points[l]);
                        }
                    }
    }

}
