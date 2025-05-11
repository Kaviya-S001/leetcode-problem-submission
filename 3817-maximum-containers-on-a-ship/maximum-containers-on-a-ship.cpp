class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
          int count=0;
       int a=maxWeight/w;
       if(a<=n*n){
        return a;
       }
       else{
        return n*n;
       }
        return count;
        
    }
};