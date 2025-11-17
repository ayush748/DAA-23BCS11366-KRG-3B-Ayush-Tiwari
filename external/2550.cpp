class Solution {
public:
    int m = 1000000007;
    long long function(long long n){

        if(n == 1) {
            return 2;
        }
        long long t1 = function(n/2);
        t1 = (t1*t1) % m;
        
        if(n%2){
            return (2*t1)%m;
        }else{
            return t1;
        }
        
    }
    
    int monkeyMove(int n) {
        int target = function(n) - 2;
        if(target < 0){
            return m  + target;
        }else{
            return target;
        }
        
    }
};



















