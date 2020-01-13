/*
Given a positive integer denoting , do the following:

If , then print the lowercase English word corresponding to the number (e.g., one for , two for , etc.).
If , print Greater than 9.
Input Format

A single integer denoting .

Constraints

Output Format

If , then print the lowercase English word corresponding to the number (e.g., one for , two for , etc.); otherwise, print Greater than 9 instead.

Sample Input 0

5
Sample Output 0

five
Explanation 0

five is the English word for the number .

Sample Input 1

8
Sample Output 1

eight
Explanation 1

eight is the English word for the number .

Sample Input 2

44
Sample Output 2

Greater than 9
Explanation 2

 is greater than , so we print Greater than 9.
*/



#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Write Your Code Here
    if (n==1)
    {
        cout<<"one"<<endl;
    }
    else if (n==2)
    {
         cout<<"two"<<endl;
    }
    else if (n==3)
    {
         cout<<"three"<<endl;
    }
    else if (n==4)
    {
         cout<<"four"<<endl;
    }
    else if (n==5)
    {
         cout<<"five"<<endl;
    }
    else if (n==6)
    {
         cout<<"six"<<endl;
    }
    else if (n==7)
    {
         cout<<"seven"<<endl;
    }
    else if (n==8)
    {
         cout<<"eight"<<endl;
    }
    else if (n==9)
    {
         cout<<"nine"<<endl;
    }
    else
    {
         cout<<"Greater than 9"<<endl;
    }

    return 0;
}
