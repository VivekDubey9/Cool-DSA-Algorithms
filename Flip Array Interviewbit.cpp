vector<int> Solution::flip(string A) {
     int n = A.size();
     for(int i=0;i<n;i++){
         A[i] = A[i]=='1'?-1:1;
     }
     int l =0,curr_sum = 0,mxsum=0;
     pair<int,int> pr;
     pr.first = INT_MAX;
     pr.second = INT_MIN;
     for(int i=0;i<n;i++){
         if(curr_sum+A[i]<0){
             curr_sum=0;
              l = i+1;
         }
         else curr_sum+=A[i];
         if(mxsum<curr_sum){
             mxsum=curr_sum;
             pr.first = l;
             pr.second = i;
            
         }
     }
     if(pr.first == INT_MAX)return vector<int>();
     vector<int> res;
     res.push_back(pr.first+1);
     res.push_back(pr.second+1);
     return res;
    
  
}
