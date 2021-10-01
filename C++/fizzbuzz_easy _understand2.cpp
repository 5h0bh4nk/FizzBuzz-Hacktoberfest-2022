
        vector<string> fizzBuzz(int n) {
        vector<string> answer; 
        if(n == 0) return answer;
        int k = 1;
        while(k!=n+1){
            if(k%15 == 0) answer.push_back("FizzBuzz");
            else if(k%3 == 0) answer.push_back("Fizz");
            else if(k%5 == 0) answer.push_back("Buzz");
            else answer.push_back(to_string(k));
            k++;
        }
        return answer;
    }
