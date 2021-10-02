class Solution {
public:
    char addTwoBinaryNumbers(char a, char b, int& carry){
        if(a == '0' && b == '0')
        {
            if(carry > 0){
                carry = 0;
                return '1';
            }
            return '0';
        }
        else if(a == '0' && b == '1' || a=='1' && b=='0'){
            if(carry > 0){
                carry = 1;
                return '0';
            }
            return '1';
        }
        else if(a=='1' && b == '1'){
            if(carry > 0){
                carry = 1;
                return '1';
            }
            carry = 1;
            return '0';
        }
        return '0';
    }
    
    string addBinary(string a, string b) {
        string result = "";
        int carry = 0;
        
        int i = a.length()-1, j = b.length()-1;
        
        while(i>=0 && j>=0){
            result = addTwoBinaryNumbers(a[i], b[j], carry) + result;
            i--;
            j--;
        }
        
        while(i>=0){
            result = addTwoBinaryNumbers(a[i], '0', carry) + result;
            i--;
        }
        
        while(j>=0){
            result = addTwoBinaryNumbers(b[j], '0', carry) + result;
            j--;
        }
        
        if(carry){
            carry = 0;
            result = '1' + result;
        }
        
        return result;
    }
};