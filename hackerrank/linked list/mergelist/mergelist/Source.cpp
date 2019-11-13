#include <iostream>
#include <fstream>

using namespace std;

class SinglyLinkedListNode {
public:
	int data;
	SinglyLinkedListNode* next;

	SinglyLinkedListNode(int node_data) {
		this->data = node_data;
		this->next = nullptr;
	}
};

class SinglyLinkedList {
public:
	SinglyLinkedListNode* head;
	SinglyLinkedListNode* tail;

	SinglyLinkedList() {
		this->head = nullptr;
		this->tail = nullptr;
	}

	void insert_node(int node_data) {
		SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);

		if (!this->head) {
			this->head = node;
		}
		else {
			this->tail->next = node;
		}

		this->tail = node;
	}
};

void print_singly_linked_list(SinglyLinkedListNode* node, string sep) {
	while (node) {
		cout << node->data;

		node = node->next;

		if (node) {
			cout << sep;
		}
	}
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
	while (node) {
		SinglyLinkedListNode* temp = node;
		node = node->next;

		free(temp);
	}
}

// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

	SinglyLinkedListNode* pCur = head1, * pCur2 = head2, * pPre = NULL;

	while (pCur != NULL)
	{
		if (pCur2 == NULL)break;
		if (pCur->data >= pCur2->data)
		{
			cout << "ok";
			SinglyLinkedListNode* pNew = new SinglyLinkedListNode(pCur2->data);
			if (pPre == NULL)
			{
				pNew->next = head1;
				head1 = pNew;
			}
			else
			{
				pPre->next = pNew;
				pNew->next = pCur;
			}
			pCur2 = pCur2->next;
			pPre = pNew;
			pCur = pNew->next;
		}
		else
		{
			pPre = pCur;
			pCur = pCur->next;
		}
	}
	if (pCur2 != NULL)
	{
		if (head1 == NULL)head1 = head2;
		else
		{
			pPre->next = pCur2;
		}
	}
	return head1;
}

int main()
{
//	ofstream fout(getenv("OUTPUT_PATH"));

	int tests;
	cin >> tests;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	for (int tests_itr = 0; tests_itr < tests; tests_itr++) {
		SinglyLinkedList* llist1 = new SinglyLinkedList();

		int llist1_count;
		cin >> llist1_count;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		for (int i = 0; i < llist1_count; i++) {
			int llist1_item;
			cin >> llist1_item;
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			llist1->insert_node(llist1_item);
		}

		SinglyLinkedList* llist2 = new SinglyLinkedList();

		int llist2_count;
		cin >> llist2_count;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		for (int i = 0; i < llist2_count; i++) {
			int llist2_item;
			cin >> llist2_item;
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			llist2->insert_node(llist2_item);
		}

		SinglyLinkedListNode* llist3 = mergeLists(llist1->head, llist2->head);

		print_singly_linked_list(llist3, " ");
		cout << "\n";

		free_singly_linked_list(llist3);
	}

	//fout.close();

	return 0;
}