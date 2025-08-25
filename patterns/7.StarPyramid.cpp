//7. Star Pyramid
//problem link: https://www.geeksforgeeks.org/problems/triangle-pattern-1661492263/1

class Solution {
  public:
    void printTriangle(int n) {
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i;j++){
                cout<<" ";
            }
            for(int k=1;k<=2*i-1;k++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
};

int main(){
    int n;
    cout<<"Enter n for this pattern: "<<endl;
    cin>>n;
    Solution obj;
    obj.printTriangle(n);
}