#include <iostream>
#include <queue>
using namespace std;
void showQueue(queue<int> q)
{
	queue<int> qu=q;
	while(!q.empty()){
		cout<<"\t"<<q.front();
		q.pop();
	}
	cout<<"\n";
}
int main()
{
	queue<int> newQueue;
	newQueue.push(10);
	newQueue.push(20);
	newQueue.push(40);
	cout<<"The content of the queue is: ";
	showQueue(newQueue);
	cout << "\n newQueue size : " << newQueue.size();
    cout << "\nnewQueuefront() : " << newQueue.front();
    cout << "\nnewQueue.back() : " << newQueue.back();
  
    cout << "\nnewQueue.pop() : ";
    newQueue.pop();
    showQueue(newQueue);
	return 0;
}
