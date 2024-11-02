class Solution {
public:
    bool isCircularSentence(string sentence) {
        int i;
        for(i=0;i<sentence.length();i++){
            if(sentence[i] == ' '){
                if(sentence[i-1] == sentence[i+1]){
                    continue;
                }
                else{
                    return false;
                }
            }
            else{
                continue;
            }
        }
        if(sentence[0] == sentence[i-1]){
            return true;
        }
        else{
            return false;
        }
    }
};