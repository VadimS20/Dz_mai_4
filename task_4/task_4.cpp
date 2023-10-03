#include "task_4.h"

using namespace std;


int main()
{
	list<int> mylist;
	mylist.addNode(1,0);
	mylist.addNode(2,1);
	mylist.addNode(3,2);
	mylist.addNode(17, 3);
	mylist.showNode();
	cout << "\n";
	mylist.removeNode(3);
	mylist.showNode();
	return 0;
}
