void solve(){
 
    int y,x;
    cin>>y>>x;
    int k=max(x,y);
 
   if(k==x){
      if(x&1){
            cout<<x*x-(y-1)<<endl;;
      }else{
         cout<<(x-1)*(x-1) + y<<endl;
      }
   }else{
    if(y&1){
        cout<<(y-1)*(y-1) +x<<endl;
    }else{
       cout<<y*y-(x-1)<<endl;
    }
   }
 
}
 
