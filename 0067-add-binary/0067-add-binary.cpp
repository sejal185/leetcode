class Solution {
public:
    string addBinary(string a, string b) {
        string s;
        int i = a.size() - 1,j = b.size() - 1,c = 0;

        while(i >= 0 || j >= 0 || c){
            int x =0,y =0;

            if(i >= 0){
                x = a[i--] - '0';
            }
            if(j >= 0){
                y = b[j--] - '0';
            }

            int sum = x+y+c;
            s +=char('0' + sum % 2);
            c =sum / 2;
        }

        reverse(s.begin(), s.end());
        return s;
    }
};