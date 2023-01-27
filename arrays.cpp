#include <iostream>
#include <array>
using namespace std;
int main()
{
/*	int arr[5] = {66,77,2,43,99};
	cout<< arr[2];
*/
/*
array <int, 5> arr = {66,77,2,43,99};
cout<<arr.size()<<endl;
//access first element
cout<<"Array first element before sorting is "<<arr.front()<<endl;
//access last element
cout<<"Array last element before sorting is "<<arr.back()<<endl;
//bubble sort
for(int i=1; i<arr.size(); i++){
	for(int j=0; j<arr.size()-1; j++){
		if(arr[j]>arr[j+1]){
		
		int temp = arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=temp;}
	}
}
for(int k=0;k<arr.size();k++){
	cout<<arr[k]<<endl;
}	
//access first element
cout<<"Array first element after sorting is "<<arr.front()<<endl;
	//access last element
cout<<"Array last element after sorting is "<<arr.back()<<endl;
	*/
	/*array <int , 5> arr;
	//fill arr with 1
    arr.fill(1);
    for(int i: arr)
       cout<<i<<" ";
       //total array size in bytes
       cout<<sizeof(arr);*/
       //return pointer to 1st arr element
       const char* str = "GeeksforGeeks";
  array<char,13> arr;
  memcpy (arr.data(),str,13);
  cout << arr.data() << '\n';
	return 0;
}
