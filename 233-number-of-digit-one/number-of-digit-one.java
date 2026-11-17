class Solution {
    public int countDigitOne(int n) {
     long count = 0;
     for(long i = 1;i <= n; i*=10 ){
        long div = i*10;
        count +=(n / div)*i;
        long rem = n % div;
        count += Math.min(Math.max(rem - i + 1,0),i);
     }   
     return (int)count;
    }
}