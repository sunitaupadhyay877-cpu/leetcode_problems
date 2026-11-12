class Solution {
    public int subtractProductAndSum(int num) {
        int sum=0;
        int product=1;
        int difference=0;

        while(num > 0){

            sum += num % 10;
            product*=num % 10;
    
            num = num / 10;
        }
        difference=product - sum;
        return difference;
        }
    }
