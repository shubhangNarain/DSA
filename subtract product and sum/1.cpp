class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,product=1;
        int x;
        while(n>0){
            x=n%10;
            sum+=x;
            product*=x;
            n/=10;
        }
        return product-sum;
    }
};