#include <stack> //stack header
#include <iostream>

using namespace std;
//stack use vector, deque or list as it underlying container
int main()
{
	stack<int> secondstack;
	stack<int> firststack; //stack of int type
	
	//empty() checks if stack is empty
	if(firststack.empty()){
		cout<<"Stack is empty"<<endl;
	}
	firststack.push(21);
	firststack.push(22);
	firststack.pop();
	firststack.push(43);
	cout<<"The size of the stack is "<<firststack.size()<<endl;
	
	while(!firststack.empty()){
		cout<<firststack.top()<<"  ";
		firststack.pop();
		
	}
	firststack.push(50);
	firststack.push(70);
	
	secondstack.push(2);
	secondstack.push(0);
	//swap content of stack with stack2
	firststack.swap(secondstack);
	cout<<"Content of firststack after swaping \n";
	while(!firststack.empty()){
		cout<<firststack.top()<<"  ";
		firststack.pop();
	}
	return 0;
}
