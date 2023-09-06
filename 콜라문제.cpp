int p3(int a, int b, int n) {
    int answer = 0;
    while(1){
      n = n - a + b;
      answer += b;
      if(n < b){
        break;
      }
      cout << n << endl;
    }
    return answer;
}