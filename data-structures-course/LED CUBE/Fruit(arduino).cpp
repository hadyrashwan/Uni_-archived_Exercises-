class intNode
{
public:
	int info;
	intNode *next, *previous;
	intNode(int el, intNode *n=0, intNode *p=0);
	~intNode(void);
};
intNode::intNode(int el, intNode *n, intNode *p)
{
	info = el;
	next = n;
	previous = p;
}


intNode::~intNode(void)
{
}
class DoublyLinkedList
{
public:
    void SwapNodes(void) ;
    void movetofront(void);
	DoublyLinkedList(void);
	~DoublyLinkedList(void);
	int isEmpty(void);
	void addToHead(int);
	void addToTail(int);
	int deleteFromTail(void);
	int deleteFromHead();
	void deleteNode(int);
	bool isInList(int);
	void printAll();
private:
	intNode *head, *tail;
};
DoublyLinkedList::DoublyLinkedList(void)
{
	head = tail = 0;
}

int DoublyLinkedList::isEmpty(){
	return head == 0;
}

void DoublyLinkedList::addToHead(int el) {
	if (tail != 0){ //if list not empty;
		head -> previous = new intNode(el, head, 0);
		head = head->previous;
		//head -> next -> previous = head;
	}
	else head = tail = new intNode(el);
}

int DoublyLinkedList::deleteFromHead() {
	int el = head->info;
	if (head == tail){
		delete head;
		head = tail = 0;
	}
	else {
		head = head -> next;
		delete head -> previous;
		head -> previous = 0;
	}
	return el;
}

void DoublyLinkedList::addToTail(int el) {
	if (tail != 0) { // if list not empty;
		tail->next = new intNode(el, 0, tail);
		tail = tail -> next;
		//tail -> previous ->next = tail;
	}
	else head = tail = new intNode(el);
}

int DoublyLinkedList::deleteFromTail() {
	int el = tail -> info;
	if (head == tail){
		delete head;
		head = tail = 0;
	}
	else {
		tail = tail -> previous;
		delete tail -> next;
		tail -> next = 0;
	}
	return el;
}

void DoublyLinkedList::deleteNode(int el) {
	if (head != 0) // if non-empty list;
	// if only one node in the list
		if (head == tail && el == head->info) {
		delete head;
		head = tail = 0;
		}
	//if more than one node and el is the 1st on list
		else if (el == head->info) {
			deleteFromHead();
		}
		else if (el == tail-> info) {
			deleteFromTail();
		}
		else {
			intNode *tmp;
			for (tmp = head; tmp != 0 && !(tmp->info == el);tmp = tmp->next);
			if (tmp != 0) {
				tmp -> previous -> next = tmp -> next;
				tmp -> next -> previous = tmp -> previous;
				delete tmp;
			}
		}
}

bool DoublyLinkedList::isInList(int el){
	intNode *tmp;
	for (tmp = head; tmp != 0 && tmp->info != el; tmp = tmp->next);
	return tmp != 0;
}

void DoublyLinkedList::printAll(void){
	intNode *tmp;
	for (tmp = head; tmp != 0; tmp = tmp->next){
//            cout<<tmp->info ;
		    Serial.println(tmp->info);
	}
}
void DoublyLinkedList::movetofront(void){
    int t ;
    t=tail->info;
    deleteFromTail();
    addToHead(t);

}

DoublyLinkedList::~DoublyLinkedList(void)
{
}


void setup() {
    Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  DoublyLinkedList l1 ;
l1.addToTail(1);
l1.addToTail(2);
l1.addToTail(3);
l1.addToTail(4);
l1.addToTail(5);
//cout<<endl<<endl<<endl;
l1.printAll();
int Fruit=random(126);
while(l1.isInList(Fruit)==true){
  Fruit=random(126);
}
    //cout<<Fruit ;
    Serial.println(Fruit) ;
               // wait for a second
}
