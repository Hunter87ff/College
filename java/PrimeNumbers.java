import java.util.Scanner;

class Prime{
	int i;
	int primeCount=0;
	int primeSum = 0;
	Prime(int n){countPrimes(n);}
	void print(String x){System.out.print(x);}
	int isPrime(int k){
		for(i=2; i<=(k/2);i++){
			if(k%i==0){return 0;}}
		return 1;
	}
	
	void countPrimes(int x) {
		int count = 0, i = 2; 
		while (i < x) {
			if (isPrime(i) == 1) {
				this.primeCount += 1;
				this.primeSum += i;
				print("\nPrime : " + i);
			}
			i++;
		}
	}
}

public class PrimeNumber{
	public static void main(String[] x){
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter a number : ");
		int n = sc.nextInt();
		Prime pc = new Prime(n);
		System.out.print("\nPrime numebr count : " + pc.primeCount + "\nPrime number sum : "+pc.primeSum);
	}
}
