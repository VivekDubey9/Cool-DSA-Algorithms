#include<bits/stdc++.h>

vector<int> Solution::repeatedNumber( const vector<int> &A) {
   int repeat = -1,missing = -1;
   vector<int> v = A;
   for(int i=0;i<v.size();i++){
       int pos = abs(v[i])-1;
       if(v[pos]<0){
           repeat = abs(v[i]);
       }
       else
       v[pos] = -1*v[pos];
   }
   for(int i=0;i<v.size();i++){
       if(v[i]>0)missing = i+1;
   }
   return {repeat,missing};
}
