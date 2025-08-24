//6. Inverted Numbered Right Pyramid
//problem link: https://www.geeksforgeeks.org/problems/triangle-number-1661489840/1

class Solution {
  public:

    void printTriangle(int n) {
        for(int i=n;i>=1;i--){
            for(int j=1;j<=i;j++){
                cout<<j<<" ";
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