/* Leetcode Problem: Power(x,n)

Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

 

Example 1:

Input: x = 2.00000, n = 10
Output: 1024.00000
Example 2:

Input: x = 2.10000, n = 3
Output: 9.26100
Example 3:

Input: x = 2.00000, n = -2
Output: 0.25000
Explanation: 2-2 = 1/22 = 1/4 = 0.25
*/

// SOlution
class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;
        double power = 1;
        double power1 = 1;
        /*
        if(N > 0){
            for(long long i = 0; i < N; i++){
                power *= x;
            }
            return power;
        }else{
            for(long long i = N; i < 0; i++){
                power1 *= x;
            }
            return power / power1;
        }
        */
        if(N < 0){
            x = 1 / x;
            N = -N;
        }
        while (N > 0) {
            if (N % 2 == 1) {   
                power *= x;
            }
            x *= x;             
            N /= 2; 
        }
        return power;

    }
};