#include "split.h"
#include <cstddef>
#include <cstdlib>
#include <cmath>
#include <iostream>
using namespace std;

	
int main()
{
	Node *odds;
	Node *evens;
	Node *head;
	Node first = Node (2, NULL);
    Node second = Node(6, NULL);
    Node third = Node(8, NULL);
    Node fourth = Node(12,NULL);
    head = &first;
    odds = &first;
    evens = &first;
    first.next = &second;
    second.next = &third;
    third.next = &fourth;

		split(head, odds, evens);
		Node *temp = odds;
		while(temp != NULL)
		{
			cout << temp->value << " ";
			odds = temp->next;
		}

		cout << endl;
        Node *temp_one = evens;
		while(temp_one != NULL)
		{
			cout << temp_one->value << " ";
			evens = temp_one->next;
		}
		return 0;
}