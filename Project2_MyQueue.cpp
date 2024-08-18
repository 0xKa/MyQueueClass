// Project2_MyQueue 
#include <iostream>
#include "clsMyQueue.h";
using namespace std;


int main()
{

	clsMyQueue <int> queue1;

	queue1.push(10);
	queue1.push(20);
	queue1.push(30);
	queue1.push(40);
	queue1.push(50);

	cout << "\n-----Queue:\n";
	queue1.Print();

	cout << "\n\nQueue Size  : " << queue1.Size() << endl;
	cout << "Queue Front : " << queue1.front() << endl;
	cout << "Queue Back  : " << queue1.back() << endl;

	queue1.pop();
	cout << "\n-----Queue After pop(): \n";
	queue1.Print();

	cout << "\n\nQueue Size After pop()  : " << queue1.Size() << endl;
	cout << "Queue Front After pop() : " << queue1.front() << endl;
	cout << "Queue Back After pop()  : " << queue1.back() << endl;

	//Extension #1
	cout << "\nGet Item(2): " << queue1.GetItem(2) << endl;

	//Extension #2
	cout << "Reverse Queue: ";
	queue1.Reverse(); 
	queue1.Print();
	
	//Extension #3
	cout << "\nUpdate Item(2): ";
	queue1.UpdateItem(2, 600);
	queue1.Print();

	//Extension #4
	cout << "\nInsert After Item(2): ";
	queue1.InsertAfter(2, 800);
	queue1.Print();
	
	//Extension #5
	cout << "\nInsert At Front: ";
	queue1.InsertAtFront(1000);
	queue1.Print();

	//Extension #6
	cout << "\nInsert At Back: ";
	queue1.InsertAtBack(2000);
	queue1.Print();
	
	//Extension #7
	cout << "\nQueue After Clear(): ";
	queue1.Clear();
	queue1.Print();

	system("pause>0");
	return 0;
}

