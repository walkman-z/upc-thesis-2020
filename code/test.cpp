#include "LinearList.h"
#include <iostream>
using namespace std;


void print(int i)
{
	cout << i << " ";
}




// void ListInversion(LinearList &L)
// {
// 	Node next, now, pre;
// 	pre = L->head;
// 	now = pre->next;

// 	if (L->length <= 1)return;
// 	while (now != NULL)
// 	{
// 		next = now->next;
// 		now->next = pre;
// 		pre = now;
// 		now = next;
// 	}

// 	L->head->next->next = NULL;
// 	L->head->next = pre;
// }

void ListInversion(LinearList &L)
{
	LinearList L0;
	ListInit(L0);


	Node temp;
	while (L->head->next != NULL)
	{
		temp = L0->head->next;
		L0->head->next = L->head->next;
		L->head->next = L->head->next->next;
		L0->head->next->next = temp;
	}

	L->head->next = L0->head->next;
	L0->head->next = NULL;
	ListDestroy(L0);

}
int main(int argc, char const *argv[])
{

	LinearList L;
	int a[] = {1, 2, 3, 4};

	ListCreatWithArray(L, 4, a);
	ListTraverse(L, print);
	cout << endl;
	ListInversion(L);
	ListTraverse(L, print);
	cout << endl;
	ListDestroy(L);

	return 0;
}

