#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--){

  int x,y;
  cin>>x>>y;

  int res =0;
  int min_screens = 0;

    if( x == 0 && y == 0){

        cout<<0<<endl;
        continue;
    }
   
   if(y == 0 &&  x != 0 ){

    res = 1;
   }
 else if( y%2 != 0){
     res =  y/2 +1;
    

  }else{
     
     res = y/2;

  }

//   cout<<res;
  
  int total_cells =  res * 15 ;
  int rem = total_cells - (y*4);

  int m= rem - x;
   min_screens = res;
   if(  m >= 0){
   
    min_screens = res;


   }
   else{

     int extra = x - rem;

      //min_screens += extra/15;
    //   int n = extra / 15;

      if(extra % 15 != 0){
            int n=  extra /15 + 1;

            min_screens +=n;

          //  cout<<n<<"-n"<<min_screens;
       
      }else{
        
          int  n = extra/15;
           min_screens +=n;

      }




   }
 

  
  



cout<<min_screens<<endl;

    }



    return 0;
}
