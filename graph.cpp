#include <iostream>
#include <list>
using namespace std;
class graph{
	public:
	list <int> *adjlist; //pointer to an adjacency list
	int n; 
	graph(int v){
		adjlist = new list<int> [v];
		n=v; //length of list
	}
	void addedge(int u, int v, bool bi){
		adjlist[u].push_back(v);
		if(bi){
			//if connection is bidirectional put it in the other node
			adjlist[v].push_back(u);
		}
	}
	void displayadjacencylist(){
		for(int i=0; i<n; i++){
			cout<<i<<"-->";
			for(auto it:adjlist[i]){
				cout<<it<<" "; //prints out nodes connected to adjlist[i]
			}
			cout<<endl;
		}
		cout<<endl;
	}
};
int main(){
	graph g(5); //graph with 5 nodes
	g.addedge(1,2,true);
	g.addedge(0,1,false);
    g.addedge(4,2,true);
    g.addedge(1,3,true);
    g.addedge(4,3,true);
    g.addedge(1,4,true);
	g.displayadjacencylist();
	return 0;
}
