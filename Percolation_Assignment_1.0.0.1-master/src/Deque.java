import java.util.Iterator;
import java.util.NoSuchElementException;

/**
 * Created by hady on 2/13/15.
 */
public class  Deque<Item> implements Iterable<Item> { // double linked list implementation nothing new
    private  class node {
        private Item data; //  my data
        private node next; //pointer to next
        private node prev; // pointer to prev

        private node(Item data) {
            this.data = data; // intial values of the pointers are null only data has the value which is item
            next = null;
            prev = null;
        }

    }
    private node head; // a pointer to the top
    private node tail; // a pointer to the buttom
    private int size; // defines the size of the list

    public boolean isEmpty() {
        return head == null;
    } // see if the head has no value which means no values in the list

    public int size() {
        return size;
    }

    public void addFirst(Item item){
        if (item == null)
            throw new NullPointerException();
        node tmp = new node(item);
        if (size() == 0) { // no values
            node newNode = new node(item); //take new item
            newNode.next = null; //empty pointers
            newNode.prev = null;
            head = newNode; // both the head and tail have the same address as it's only one node
            tail = newNode;
            size++; // inc size
        } else {
            node newNode = new node(item); // many times state
            newNode.next = null; // on top so no next
            newNode.prev = head; // old head is ur prev
            head.next = newNode;  // old head next pointer has the new item address
            head = newNode; // replace the head pointer to be on the new item
            size++; // inc size
        }
    }
    public void addLast(Item item) { //  the same here as addfrist but reversed as you are looking on the bottom
        if (item == null)
            throw new NullPointerException();
        if (size() == 0) {
            node newNode = new node(item);
            newNode.prev = null;
            newNode.next = null;
            head = newNode;
            tail = newNode;
            size++;
        } else { //here is a change
            node newNode = new node(item);
            newNode.next = tail; //using the tail instead on head because ath the bottom  and next instead of prev as the direction is reveresed
            newNode.prev = null;
            tail.prev = newNode; // using prev because the direction is revered
            tail = newNode;
            size++;
        }
    }
    public Item removeFirst() { // removing a item
        if (isEmpty()) // empty already noting to do
            throw new java.util.NoSuchElementException();
        if (size() == 1) { // one item so remove it
            Item item = head.data; // reset the pointers and return the item
            head = null;
            tail = null;
            size--; // dec size
            return item;
        } else {
            Item item = head.data; // take the item for return
            node temp = head.prev; // take the prev pointer from the current head
            head.prev.next = null; // next for BEFORE last node (a reset)
            head.prev = null; // no prev no (a rest)
            head = temp; // make temp replace the current head
            size--; // dec size
            return item;
        }}
    public Item removeLast() { // the same but revered apply the same knowlage with the change that happened in addLast
        if (isEmpty())
            throw new java.util.NoSuchElementException();
        if (size() == 1) {
            Item item = head.data;
            head = null;
            tail = null;
            size--;
            return item;
        } else {
            Item item = tail.data;
            node temp = tail.next;
            tail.next.prev = null;
            tail.next = null;
            tail = temp;
            size--;
            return item;}}
    private  void    PrintAll(){
        for (node i=tail  ; i.data!=null ; i =i.next) {
            StdOut.print(i.data);
        }
    }

    private  class ListIterator implements Iterator<Item> {

        private node ptr;
        private Item i;

        public ListIterator()
        {
            ptr = head ;
        }

        @Override
        public boolean hasNext() { // check the pointer if equal null
            // TODO Auto-generated method stub
            if (ptr == null)
                return false;
            else
                return true;
        }

        @Override
        public Item next() {// inc counter
            // TODO Auto-generated method stub
            if (!hasNext())
                throw new java.util.NoSuchElementException();
            else {
                i = ptr.data;
                ptr = ptr.prev; // using this line to inc by pointing to its prev
                return i;
            }

        }

        public void remove() {
            // shouldn't be used as said by the leacture
        }

    }
    @Override
    public Iterator<Item> iterator() {
        // TODO Auto-generated method stub
        return new ListIterator();}

    public static void main(String[] args){
            Deque<Integer> d = new Deque<Integer>();
            d.addFirst(12);
            d.addFirst(13);
            d.addFirst(14);
            d.addFirst(15);
            d.addFirst(16);
            for(Iterator<Integer> it = d.iterator() ; it.hasNext() ;){
                Integer i = it.next();
                StdOut.print(i);
            }
            //d.PrintAll();
            }






        }


