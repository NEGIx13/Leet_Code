class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> arr;
        for(int i=0;i<n+1;i++){
            int num = i;
            int count = 0;
            while(num>=1){
                if(num%2 == 1){
                    count++;
                }
                num = num/2;
            }
            arr.push_back(count);
        }
        return arr;
    }
};