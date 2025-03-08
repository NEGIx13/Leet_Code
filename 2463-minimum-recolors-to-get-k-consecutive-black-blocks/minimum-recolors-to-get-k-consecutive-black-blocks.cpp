class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int min = 101;
        for(int i=0;i<=blocks.length()-k;i++){
            int start = i;
            int count = 0;
            for(int j=0;j<k;j++){
                if(blocks[start] == 'W'){
                    count++;
                    start++;
                }
                else{
                    start++;
                }
            }
            if(count < min){
                min = count;
            }
        }
        return min;
    }
};