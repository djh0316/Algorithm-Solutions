class Solution {
    public long solution(int k, int d) {
        long result = 0;
	     for (long i = 0; i <= d; i+=k) {
	    	 result += (long)Math.sqrt((long)d * d - i * i) / k + 1;
	     }
	     return result;
    }
}