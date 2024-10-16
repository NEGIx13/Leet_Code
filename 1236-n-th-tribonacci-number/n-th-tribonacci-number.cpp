class Solution {
public:
    int tribonacci(int n) {
        int x = 0;
        int y = 1;
        int z = 1;
        if(n <= 2){
            if(n == 0){
                return 0;
            }
            else{
                return 1;
            }
        }
        for(int i=3;i<=n;i++){
            int temp = z;
            z += x+y;
            x = y;
            y = temp;
        }
        return z;
    }
};