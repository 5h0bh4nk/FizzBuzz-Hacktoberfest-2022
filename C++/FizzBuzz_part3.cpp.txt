class Solution {
    public List<String> fizzBuzz(int n) {
        List<String> answer = new ArrayList<String>(n);
        if(n == 0) return answer;
        int k = 1;
        while(k!=n+1){
            if(k%15 == 0) answer.add("FizzBuzz");
            else if(k%3 == 0) answer.add("Fizz");
            else if(k%5 == 0) answer.add("Buzz");
            else answer.add(String.valueOf(k));
            k++;
        }
        return answer;
    }
}