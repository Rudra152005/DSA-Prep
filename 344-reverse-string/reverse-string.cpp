class Solution {
public:
    void reversestr(vector<char>& s, int left, int right){
        if(left >= right) return;

        swap(s[left], s[right]);
        left++;
        right--;
        reversestr(s, left, right);
    }

    void reverseString(vector<char>& s) {
        reversestr(s, 0, s.size() - 1);
    }
};