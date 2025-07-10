 #include<iostream>
 using namespace std;
 int main(){
    int n;
    cout<<"Enter the no. ";
    cin>>n;
    for (int i=1;i<=n;i++){ 

        for(int j=1;j<=n;j++){
        if(i+j==n+1) cout<<i<<" ";
        else cout<<" ";
       }
       for(int j=1;j<=n-1;j++){
        if(j==i-1)
        cout<<i<<" ";
        else cout<<" ";
       }
      
       cout<<endl;
    }
}