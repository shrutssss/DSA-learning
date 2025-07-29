//1.Rectangular Star pattern
//Print nxn rectangular star pattern.
//Problem link: https://practice.geeksforgeeks.org/problems/square-pattern/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_1

void Solution(int n){
    //first for loop for rows
    for(int i=0;i<n;i++){
        //second for loop for columns
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter n for rectangular star pattern of nxn: "<<endl;
    cin>>n;
    Solution(n);
}