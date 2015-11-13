import java.util.Iterator;

/**
 * Created by hady on 2/15/15.
 */
public class RandomizedQueue<Item> implements Iterable<Item> {
    private Item items[];
    private int size;

    public RandomizedQueue() {
        items = (Item[]) new Object[2]; // Array
        size = 0;
    }

    public boolean isEmpty() {
        return size == 0; // check if size is zero
    }

    public int size() {
        return size; // return size value
    }

    public void enqueue(Item item) {
        if (item == null) // empty array
            throw new NullPointerException();
        if (size == items.length) //array is full
            resize(items.length * 2);
        items[size] = item;
        size++;
    }

    public Item dequeue() {
        if (isEmpty()) // empty array
            throw new java.util.NoSuchElementException();
        int n = (int) (Math.random() * size); // random genrate USING DOUBLE WILL BE A MEMORY WASTE
        Item i = items[n]; // return random value from the array
        if (n != size - 1) // n not equal the last in the array
            items[n] = items[size - 1];
        size--;// dec size
        if (size > 0 && size == items.length / 4) // 1/4 of the array is full
            resize(items.length / 2); // make the array half the size
        return i;
    }

    private void resize(int n) {
        Item newItem[] = (Item[]) new Object[n]; // create new array
        for (int i = 0; i < size; i++)
            newItem[i] = items[i]; // fill the new array with the old values
        items = newItem; // replace the old with the new one
    }

    public Item sample() {
        if (isEmpty())
            throw new java.util.NoSuchElementException();
        int n = (int) (Math.random() * size); // random genarte
        Item i = items[n]; // get the radom value
        return i;
    }

    @Override
    public Iterator<Item> iterator() {
        return new ListIterator();
    }

    private class ListIterator<Item> implements Iterator {

        int index;

        public ListIterator() {
            index = 0;
        }

        @Override
        public boolean hasNext() {
            return index <= size - 1; // compare the current index to the size
        }

        @Override
        public Object next() {
            if (!hasNext())
                throw new java.util.NoSuchElementException();
            int n = (int) (Math.random()*(size -index));// random genreate
            Object item = items[n];
            if(n != size -index-1)
                items[n] = items[size -index-1];
            index++;
            return item;
        }

        public void remove() {
            // not used according to the lectures but to solve the abstract problem
        }

    }

    public static void main(String[] args) {

    }
}
