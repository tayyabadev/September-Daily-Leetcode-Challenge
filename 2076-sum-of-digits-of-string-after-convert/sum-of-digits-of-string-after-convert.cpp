class Solution {
public:
    int getLucky(string s, int k) {
        long num = 0;
        string numstr = "";
        for (int i = 0; i < s.size(); i++) {
            numstr += to_string((s[i] - 'a' + 1));
        }
        int sum = 0;
        while (k > 0) {
            sum = 0;
            for (int i = 0; i < numstr.size(); i++) {
                sum += (numstr[i] - '0');
            }
            numstr = to_string(sum);
            k--;
        }
        return sum;
    }
};