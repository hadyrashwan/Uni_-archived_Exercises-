/*************************************************************************
 * Name:
 * Email:
 *
 * Compilation:  javac Point.java
 * Execution:
 * Dependencies: StdDraw.java
 *
 * Description: An immutable data type for points in the plane.
 *
 *************************************************************************/

import java.util.Comparator;

public class Point implements Comparable<Point> {

    // compare points by slope
    public final Comparator<Point> SLOPE_ORDER = new Pointii();      // YOUR DEFINITION HERE

    private final int x;                              // x coordinate
    private final int y;                              // y coordinate

    // create the point (x, y)
    public Point(int x, int y) {
        /* DO NOT MODIFY */
        this.x = x;
        this.y = y;
    }

    // plot this point to standard drawing
    public void draw() {
        /* DO NOT MODIFY */
        StdDraw.point(x, y);
    }

    // draw line between this point and that point to standard drawing
    public void drawTo(Point that) {
        /* DO NOT MODIFY */
        StdDraw.line(this.x, this.y, that.x, that.y);
    }

    // slope between this point and that point
    public double slopeTo(Point that) {
        /* YOUR CODE HERE */
        if (this.compareTo(that) == 0) // same point
            return Double.POSITIVE_INFINITY*-1;
        else if (this.x == that.x) // equal x
            return Double.POSITIVE_INFINITY;
        else if (this.y == that.y) // equal y
            return +0;
        else
            return (that.y - this.y) * 1.0 / (that.x - this.x); //( x-x/y-y) pure math
    }

    // is this point lexicographically smaller than that one?
    // comparing y-coordinates and breaking ties by x-coordinates
    public int compareTo(Point that) {
        /* YOUR CODE HERE */
        if (this.y < that.y || (this.y == that.y && this.x < that.x))  return -1 ;// smaller y or equal y and smaller x
            if(this.x==that.x && this.y == that.y) return 0; // same point
        else return 1 ;// greater
    }

    private class Pointii implements Comparator<Point> {

        @Override
        public int compare(Point p1, Point p2) {
            if (slopeTo(p1) < slopeTo(p2) || (slopeTo(p1) == slopeTo(p2) && p1.compareTo(p2) == -1)) // smaller slope or smaller p1
                return -1;
            else if (slopeTo(p1) > slopeTo(p2) || (slopeTo(p1) == slopeTo(p2) && p1.compareTo(p2) == 1)) // greater slope or greater p2
                return 1;
            else
                return 0;
        }

    }
    // return string representation of this point
    public String toString() {
        /* DO NOT MODIFY */
        return "(" + x + ", " + y + ")";
    }

    // unit test
    public static void main(String[] args) {
        /* YOUR CODE HERE */
    }
}
