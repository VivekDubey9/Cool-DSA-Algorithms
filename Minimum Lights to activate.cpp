int Solution::solve(vector<int> &A, int B) {
   int curr=0;
   int n =A.size();
   int i=0;
   int ans =0;
   while(i<n){
       int lightbulb =0;
       for(int j=min(n,i+B-1);j>=max(0,i-B+1);j--){
           if(A[j]==1){
               //indx = j;
               ans++;
               i=j+B;
               lightbulb=1;
               break;
           }
       }
        if(lightbulb==0)return -1;
           
         //  i = indx+B;
   }
   return ans;
}
