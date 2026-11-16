class Solution {
    public double myPow(double x, int n) {
        long num = n;
        double answer = 1.0;
        if(num < 0){
            num = -num;
        }
        while(num !=0){
            if(num %2 ==1){
                answer = answer * x;
                num--;
            }
            else{
                x = x*x;
                num = num/2;
            }
        }
        if(n<0){
            answer =1.0/answer;

        }
        return answer;
    }
}