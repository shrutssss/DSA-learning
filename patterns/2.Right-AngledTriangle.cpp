//2.Right-Angled Triangle
//Print right-angled triangle pattern of *
//Problem link: https://www.geeksforgeeks.org/problems/right-triangle/1

void Solution(int n){
    //first for loop for rows
    for(int i=0;i<n;i++){
        //second for loop for columns 
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter n : "<<endl;
    cin>>n;
    Solution(n);
}