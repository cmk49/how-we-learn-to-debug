#include <iostream>
#include <cstddef>

//singly linked list of integers

struct node {
	int data;
	node *next;
};

class linked_list {
public:
	linked_list();
	~linked_list();
	void add(int value);
	bool remove(int value);

private:
	node *head;
};

linked_list::linked_list() {
	head = NULL;
}

linked_list::~linked_list() {
	node *iter = head;
	while(iter!=NULL)
	{
		node *temp = iter;
		iter = iter->next;
		delete temp;
	}
}

/*
adds the value to the end of the list
*/
void linked_list::add(int value) {
	node *temp = new node;
	temp->data = value;
	temp->next = NULL;
	if(head==NULL) {
		
	}
	else {
		node *iter = head;
		while(iter->next!=NULL) {
			iter = head->next;
		}
		iter->next = temp;
	}
}
}
/*
removes the first occurence of the specified value from the list
returns true if the value was removed
returns false otherwise
*/
bool linked_list::remove(int value) {
	if(head==NULL) {
		return false;
	}
	if(head->data=value) {
		node *temp = head;
		head = head.next;
		delete temp;
		return true;
	}
	node *iter = head;
	while(iter->next!=NULL) {
		if(iter->next->data==value) {
			node *temp = iter->next;
			iter->next = iter->next->next;
			delete temp;
			return true;
		}
		iter = iter->next;
	}
	return false;
}

int main() {
}