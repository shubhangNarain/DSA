class Solution {
public:
    double myPow(double x, int n) {
        long m = n;
        if (m < 0) {
             m = -m;
             x = 1 / x;
         }
        if(m==0){return 1;}
        double temp,ans;
        temp = myPow(x,m/2);
        temp = temp * temp;
        if(m%2==0){
            return temp;
        }
        else{
            return temp * x;
        }
    }
};