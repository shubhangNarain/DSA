/*
You are given an integer array cost where cost[i] is the cost of ith step on a staircase. Once you pay the cost, you can either climb one or two steps.

You can either start from the step with index 0, or the step with index 1.

Return the minimum cost to reach the top of the floor.

 

Example 1:

Input: cost = [10,15,20]
Output: 15
Explanation: Cheapest is: start on cost[1], pay that cost, and go to the top.
Example 2:

Input: cost = [1,100,1,1,1,100,1,1,100,1]
Output: 6
Explanation: Cheapest is: start on cost[0], and only step on 1s, skipping cost[3].
*/

#include<iostream>
#include<vector>
using namespace std;

int mincost(vector<int> &cost){
    int a=0;
        int b=0;
        for(int i=cost.size()-1;i>=0;i--){
            int c=cost[i]+min(a,b);
            a=b;
            b=c;
        }
        return min(a,b);
}

int main(){
    int n; cin>>n;
    vector<int> cost;
    for(int i=0;i<n;i++){
        int t; cin>>t;
        cost.push_back(t);
    }
    cout<<mincost(cost)<<endl;

}