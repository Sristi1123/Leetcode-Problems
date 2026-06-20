class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
        char ch=letters[0];
        for(auto i:letters){
            if (i>target){
                ch=i;
                break;
            }
        }
        return ch;
    }
};