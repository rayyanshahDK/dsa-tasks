//#include<iostream>
//#include<conio.h>
//
//using namespace std;
//
//int fact(int n)
//{
//	if (n == 0) 
//	{ return 1; }
//	else
//	{
//		return n * fact(n - 1);
//	}
//}
//int main()
//{
//	cout << fact(5) << endl;
//	_getch();
//	return 0;
//}

//#include<iostream>
//#include<conio.h>
//
//using namespace std;
// 
//void rev() {
//	char ch;
//	cin.get(ch);
//	if (ch != '\n')
//	{
//		rev();
//		cout.put(ch);
//	}
//}
//int main()
//{
//	cout<<rev();
//	_getch();
//	return 0;
//}

//#include<iostream>
//#include<conio.h>
//
//using namespace std;
//
//int power(int x, int n) {
//	if (n == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return power(x, n - 1) * x;
//	}
//}
//
//int main()
//{
//	cout<<power(4,5);
//	_getch();
//	return 0;
//}

//#include<iostream>
//#include<conio.h>
//
//using namespace std;
//
//int power(int x, int n) {
//	if (n == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return power(x, n - 1) * x;
//	
//	}
//}
//
//int main()
//{   
//	for (int i = 0; i <= 20; i++)
//	{
//		cout << power(2, i) << endl;
//		
//	}
//	return 0;
//}

//#include<iostream>
//#include<conio.h>
//
//using namespace std;
//
//int ackermann(int m, int n) {
//	if (m == 0)
//	{
//		return n+1;
//	}
//	else if(m>0 && n==0)
//	{
//		return ackermann(m - 1,1);
//	}
//	else if (m > 0 && n > 0)
//	{
//		return ackermann(m - 1, ackermann(m, n-1));
//	}
//}
//
//int main()
//{
//	cout << ackermann(3,4);
//	_getch();
//	return 0;
//}


//#include<iostream>
//#include<conio.h>
//
//using namespace std;
//
//
//void printnum(int n) {
//    if (n < 0) {
//        return; 
//    }
//    cout << n << " ";
//    printnum(n - 1);
//}
//
//
//int BC(int n, int k) {
//    if (k == 0 || k == n) {
//        return 1; 
//    }
//    return BC(n - 1, k - 1) + BC(n - 1, k); 
//
//}
//
//
//bool isPrime(int n, int divisor = 2) {
//    if (n <= 2) {
//        return (n == 2); 
//    }
//    if (n % divisor == 0) {
//        return false; 
//    }
//    if (divisor * divisor > n) {
//        return true; 
//    }
//    return isPrime(n, divisor + 1); 
//}
//
//int main() {
//    int choice, n, k;
//
//    cout << "Choose an option:";
//    cout << "1. Print numbers from n to 0";
//    cout << "2. Compute binomial coefficient C(n, k)";
//    cout << "3. Check if a number is prime";
//    cout << "Enter your choice (1, 2, or 3): ";
//    cin >> choice;
//
//    if (choice == 1) {
//        cout << "Enter a number: ";
//        cin >> n;
//        cout << "Numbers from " << n << " to 0: ";
//        printnum(n);
//        cout << endl;
//    }
//    else if (choice == 2) {
//        cout << "Enter values for n and k: ";
//        cin >> n >> k;
//        if (k > n || n < 0 || k < 0) {
//            cout << "Invalid input! n must be >= k, and both must be non-negative.";
//        }
//        else {
//            cout << "C(" << n << ", " << k << ") = " << BC(n, k) << endl;
//        }
//    }
//    else if (choice == 3) {
//        cout << "Enter a number: ";
//        cin >> n;
//        if (isPrime(n)) {
//            cout << n << " is a prime number.";
//        }
//        else {
//            cout << n << " is not a prime number.";
//        }
//    }
//    else {
//        cout << "Invalid choice! Please choose 1, 2, or 3.";
//    }
//
//    return 0;
//}

