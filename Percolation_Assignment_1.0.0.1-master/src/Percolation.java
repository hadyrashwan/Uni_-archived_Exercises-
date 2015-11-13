/**
 * Created by hady on 2/5/15.
 */
public class Percolation {
    private int[][] id; // id[i][j] = component identifier of i & j
    private int count;   // number of components
    private int[][] ic; // 2d array for state save used in isfull
    private boolean targetReached;


    public Percolation(int N) {

        count = N; // count the number of var in a row/colum
        id = new int[N + 1][N + 1];
//        ic = new int[N][N] ;


    }
    // create N-by-N grid, with all sites blocked


    private void changeVlaue(int p1, int p2, int value) {
        if (p1 > count() || p1 < 1) { // range exception
            throw new IllegalArgumentException("out of N range");
        }
        if (p2 > count() || p2 < 1) { // range exception
            throw new IllegalArgumentException("out of N range");
        }
        if (value > 1 || value < 0) { // range exception
            throw new IllegalArgumentException("out of  N range");
        }

        id[p1 - 1][p2 - 1] = value; // set a node to 1 or 0
    }

    private int count() {
        return count; // return size
    }
    private boolean openRow(int i) { // see if the row has any open nodes
        int check = 0;
        if (i > count() || i < 1) { // range exception
            throw new IllegalArgumentException(" of  N range");
        }

        if (i > count() || i < 1) {
            throw new IllegalArgumentException("out of N range");
        }
        for (int j = 0; j < id.length; j++)
            if (id[i - 1][j] == 1) check = 1;
        return check == 1;
    }

    public void open(int i, int j) {
        changeVlaue(i, j, 1);

    }          // open site (row i, column j) if it is not open already

    private int find(int p1, int p2) {
        return id[p1 - 1][p2 - 1]; // find the current value of a node
    }

    public boolean isOpen(int i, int j) {
        if (i > count() || i < 1)  { // range exception
            throw new IllegalArgumentException(" out of  N range");
        }
        if (j > count() || j < 1) { // range exception
            throw new IllegalArgumentException("out of N  range");
        }
        return find(i, j) == 1;
    }     // is site (row i, column j) open?


    private boolean rightLeftFull(int i, int j) { // part of isfull1
        if (j != 0 && j != count) { // not edges
            if (id[i][j - 1] == 1 && ic[i][j - 1] != 1 && !targetReached) { // and not marked as old patern in ic a N*N array
                ic[i][j - 1] = 1;
                isFull1(i + 1, j);
            }
            if (id[i][j + 1] == 1 && ic[i][j + 1] != 1 && !targetReached) { // and not marked as old patern in ic a N*N array
                ic[i][j + 1] = 1;
                isFull1(i + 1, j + 2);
            }

        } else if (j == 0) { // right site
            if (id[i][j + 1] == 1 && ic[i][j + 1] != 1 && !targetReached) { // and not marked as old patern in ic a N*N array
                ic[i][j + 1] = 1;
                isFull1(i + 1, j + 2);
            }

        } else { // left site
            if (id[i][j - 1] == 1 && ic[i][j - 1] != 1 && !targetReached) { // and not marked as old patern in ic a N*N array
                ic[i][j - 1] = 1;
                isFull1(i + 1, j);
            }
        }


        return false;
    }

    private boolean isFull1(int i, int j)// is site (row i, column j) full?
    {
        i--; // required the N * N to start from 1 not 0 as the array
        j--;
        //StdOut.println("the i  "+ i +"  ,the j  "+j); //for testing
        if (i == 0) { //top row the true part and only possible way  of getting true
            targetReached = true;
            return true;

        } else if (i == count) { // bottom row

            if (id[i + 1][j] == 1 && ic[i + 1][j] != 1 && !targetReached) { // and not marked as old patern in ic a N*N array
                ic[i + 1][j] = 1;
                isFull1(i + 2, j + 1);
            }
            rightLeftFull(i, j);


        } else { // in between//
            if (id[i - 1][j] == 1 && ic[i - 1][j] != 1 && !targetReached) { // and not marked as old patern in ic a N*N array
                ic[i - 1][j] = 1;
                isFull1(i, j + 1);
                rightLeftFull(i, j);
            }
            if (id[i + 1][j] == 1 && ic[i + 1][j] != 1 && !targetReached) { // and not marked as old patern in ic a N*N array
                ic[i + 1][j] = 1;
                isFull1(i + 2, j + 1);
                rightLeftFull(i, j);
            } else rightLeftFull(i, j);
        }
        return false;
    }


    public boolean isFull(int i, int j)// is site (row i, column j) full?
    {
        ic = new int[count()][count()];
        if (i > count() || i < 1) { // range exception
            throw new IllegalArgumentException(" out of N range");
        }
        if (j > count() || j < 1) { // range exception
            throw new IllegalArgumentException("out of  N range");
        }
        if (!isOpen(i, j)) return false;
        targetReached = false;
        isFull1(i, j);
        return targetReached;
    }

    private void printAll() {
        int printedElments = 0;
        for (int i = 0; i < count; i++) {
            for (int j = 0; j < count; j++) {
                StdOut.print(id[i][j]);
                printedElments++;
            }
            StdOut.println();
        }
        StdOut.println(printedElments);
    }


    public boolean percolates() { // calls isfull
        for (int i = 1; i < count() + 1; i++)
            if (isFull(count(), i)) return true;
        return false;
    }         // does the system percolate?

    public static void main(String[] args) { // for  testing
        Percolation p1 = new Percolation(8);
        p1.printAll();
        StdOut.println();
        p1.open(1, 4);
        p1.open(2, 4);
        p1.open(2, 5);
        p1.open(3, 4);
        p1.open(4, 4);
        p1.open(5, 4);
        p1.open(6, 4);
        p1.open(7, 3);
        p1.open(7, 4);
        p1.open(8, 1);
        p1.open(8, 4);
        p1.printAll();
        StdOut.println(p1.isFull(1, 1));
        StdOut.println(p1.isFull(7, 2));
        StdOut.println(p1.isFull(6, 4));
        StdOut.println(p1.isFull(6, 2));
        StdOut.println(p1.isFull(2, 5));
        StdOut.println(p1.percolates());


    }  // test client (optional)
}


