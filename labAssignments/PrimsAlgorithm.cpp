#include <iostream>
using namespace std;

class Graph{
    public:
    int G[20][20];
    int n;
    
    void accept(){
        int src, dest, cost;
        int e;
        cout<<"enter no. of vertices: ";
        cin>>n;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                G[i][j]=0;
            }
        }
        cout<<"enter no. of edges: ";
        cin>>e;
        for(int i=0;i<e;i++){
            cout<<"Enter source: ";
            cin>>src;
            cout<<"Enter destination: ";
            cin>>dest;
            cout<<"Enter cost: ";
            cin>>cost;
            G[src][dest]=cost;
            G[dest][src]=cost;
        }
    }
    
    void display(){
        for(int i=0;i<n;i++){
            cout<<endl;
            for(int j=0;j<n;j++){
                cout<<"\t"<<G[i][j];
            }
        }
    }
    
    void prims(){
        int src, dest, cost;
        int count = 0;
        int min, total = 0;
        int R[20][20], visited[n];
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(G[i][j]==0){
                    R[i][j]=999;
                }
                else{
                    R[i][j]=G[i][j];
                }
            }
        }
        
        for(int i=0;i<n;i++){
            visited[i]=0;
        }
        
        cout<<"Enter start vertex: ";
        cin>>src;
        visited[src]=1;
        
        while(count<n-1){
            min=999;
            for(int i=0;i<n;i++){
                if(visited[i]==1){
                    for(int j=0;j<n;j++){
                        if(visited[j]!=1 && R[i][j]<min){
                            min=R[i][j];
                            src=i;
                            dest=j;
                        }
                    }
                }
            }
            total += min;
            cout<<"Edge from"<<src<<" to "<<dest<<"with min cost: "<<min<<endl;;
            visited[dest]=1;
            count++;
        }
        cout<<"Total cost: "<<total<<endl;
    }
};

int main(){
    Graph g;
    g.accept();
    g.display();
    g.prims();
}