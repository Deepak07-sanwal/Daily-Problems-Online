class Solution {

    bool isPrime(int n)

{

    if (n <= 1)

        return false;

    if (n <= 3)

        return true;

    if (n % 2 == 0 || n % 3 == 0)

        return false;

    for (int i = 5; i * i <= n; i = i + 6)

        if (n % i == 0 || n % (i + 2) == 0)

            return false;

    return true;

}

 public:

 int NthTerm(int N){

     if(isPrime(N)){return 0;}

     int k=N-1;

     int p=N+1;

     while(true){

         if(isPrime(k)){return abs(N-k);}

         if(isPrime(p)){return abs(N-p);}

         k++;

         p--;

     }

     return 0;

 }

};
