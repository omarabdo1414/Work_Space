#include <iostream>
using namespace std;
struct nodeType
{
	int info;
	nodeType *next;
};

class linkedListType
{
public:
	linkedListType();
	int listSize();
	bool isEmpty();
	int seqSearch(int);
	void remove(int);
	void insertFirst(int);
	void insertEnd(int);
	void insertAt(int, int);
	void removeAt(int);
	void print();
	void clearList();
	void insertOrdered(int);
	void removeFirst();
	void removeLast();
	void removeLast2();
	int removeOddSumEven();
	void reverse();
	~linkedListType();


private:
	nodeType *first, *last;
	int length;
};

int linkedListType::removeOddSumEven()
{
	int sum = first->info;
	nodeType *current = first->next;
	nodeType *trailCurrent = first;

	while (current != NULL)
	{
		if (current->info % 2 == 0)
		{
			sum += current->info;
			trailCurrent = current;
			current = current->next;
		}
		else
		{
			trailCurrent->next = current->next;
			delete current;
			length--;
			current = trailCurrent->next;
		}
	}
	return sum;
}

void linkedListType::removeLast()
{
	if (length == 0)
		cout << "ERROR: EMPTY LIST" << endl;
	else if (length == 1)
	{
		delete first;
		last = first = NULL;
		length--;
	}
	else
	{
		nodeType *current = first->next;
		nodeType *trailCurrent = first;
		while (current != last)
		{
			trailCurrent = current;
			current = current->next;
		}
		delete current;
		trailCurrent->next = NULL;
		last = trailCurrent;
		length--;
	}
}
void linkedListType::removeLast2()
{
	if (length == 0)
		cout << "ERROR: EMPTY LIST" << endl;
	else if (length == 1)
	{
		delete first;
		last = first = NULL;
		length--;
	}
	else
	{
		nodeType *current = first;
		while (current->next != last)
			current = current->next;

		delete last;
		current->next = NULL;
		last = current;
		length--;
	}
}

void linkedListType::removeFirst()
{
	if (length == 0)
		cout << "ERROR: EMPTY LIST" << endl;
	else if (length == 1)
	{
		delete first;
		last = first = NULL;
		length--;
	}
	else
	{
		nodeType *current = first;
		first = first->next;
		delete current;
		length--;
	}
}
linkedListType::linkedListType()
{
	first = last = NULL;
	length = 0;
}

int linkedListType::listSize()
{
	return length;
}

bool linkedListType::isEmpty()
{
	return (length == 0);
}

int linkedListType::seqSearch(int item)
{
	nodeType *current = first;
	int loc = 0;
	while (current != NULL)
	{
		if (current->info == item)
			return loc;
		current = current->next;
		loc++;
	}
	return -1;
}
void linkedListType::remove(int item)
{
	if (isEmpty())
	{
		cout << "Can not remove from empty list\n";
		return;
	}

	nodeType *current, *trailCurrent;
	if (first->info == item)//delete the first element, special case
	{
		current = first;

		first = first->next;
		delete current;
		length--;
		if (length == 0)
			last = NULL;
	}
	else
	{
		current = first->next;
		trailCurrent = first;
		while (current != NULL)
		{
			if (current->info == item)
				break;
			trailCurrent = current;
			current = current->next;
		}

		if (current == NULL)
			cout << "The item is not there\n";
		else
		{
			trailCurrent->next = current->next;
			if (last == current) //delete the last item
				last = trailCurrent;
			delete current;
			length--;
		}
	}
}



void linkedListType::insertFirst(int item)
{
	nodeType *newNode = new nodeType;
	newNode->info = item;
	if (length == 0) {
		first = last = newNode;
		newNode->next = NULL;
	}
	else {
		newNode->next = first;
		first = newNode;
	}
	length++;
}

void linkedListType::insertEnd(int item)
{
	nodeType *newNode = new nodeType;
	newNode->info = item;
	if (length == 0) {
		first = last = newNode;
		newNode->next = NULL;
	}
	else {
		last->next = newNode;
		newNode->next = NULL;
		last = newNode;
	}
	length++;
}


void linkedListType::insertAt(int loc, int item)
{
	if (loc < 0 || loc > length)
		cout << "ERROR: Out of range" << endl;
	else
	{
		nodeType *newNode = new nodeType;
		newNode->info = item;
		if (loc == 0) //insert at the begining
			insertFirst(item);
		else if (loc == length) //insert at the end;
			insertEnd(item);
		else
		{
			nodeType *current = first;
			for (int i = 1; i < loc; i++)
				current = current->next;

			newNode->next = current->next;
		    current->next = newNode;
			length++;
		}

	}
}

void linkedListType::removeAt(int loc)
{
	if (loc < 0 || loc >= length)
		cout << "ERROR: Out of range" << endl;
	else
	{
		nodeType *current, *trailCurrent;
		if (loc == 0)
		{
			current = first;
			first = first->next;
			delete current;
			length--;
			if (length == 0)
				last = NULL;
		}
		else
		{
			current = first->next;
			trailCurrent = first;
			for (int i = 1; i < loc; i++)
			{
				trailCurrent = current;
				current = current->next;
			}

			trailCurrent->next = current->next;
			if (last == current) //delete the last item
				last = trailCurrent;
			delete current;
			length--;
		}
	}
}


void linkedListType::print()
{
	nodeType *current = first;
	while (current != NULL)
	{
		cout << current->info << endl;
		current = current->next;
	}
}

void linkedListType::clearList()
{
	nodeType *current;
	while (first != NULL)
	{
		current = first;
		first = first->next;
		delete current;
	}
	last = NULL;
	length = 0;
}

void linkedListType::insertOrdered(int item)
{
	nodeType *newNode = new nodeType;
	newNode->info = item;

	if (first == NULL)
	{
		first = last = newNode;
		newNode->next = NULL;
		length++;
	}
	else if (first->info >= item)
	{
		newNode->next = first;
		first = newNode;
		length++;
	}
	else
	{
		nodeType *current = first->next;
		nodeType *trailCurrent = first;

		while (current != NULL)
		{
			if (current->info >= item)
				break;
			current = current->next;
			trailCurrent = trailCurrent->next;
		}
		if (current == NULL){
			last->next = newNode;
			newNode->next = NULL;
			last = newNode;
			length++;
		}
		else
		{
			trailCurrent->next = newNode;
			newNode->next = current;
			length++;
		}
	}
}

void linkedListType::reverse() {
	nodeType *prev, *next, *curr;
	prev = NULL;
	curr = first;
	next = curr->next;
	while (next != NULL)//curr!=NULL
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	first = prev;
}
linkedListType::~linkedListType()
{
	clearList();
}

int main()
{
	linkedListType l1;
	l1.insertAt(0, 10);
	l1.insertAt(1, 15);
	l1.insertAt(2, 20);
	l1.insertAt(3, 25);
	l1.print();

	return 0;
}