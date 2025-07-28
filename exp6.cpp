#include <iostream>
using namespace std;

int main() {
    int question;
    cout << "Enter the question number (1-10): ";
    cin >> question;

    switch(question) {
        case 1: {
            // Prints even values between 0 and 9
            for(int i = 0; i < 10; i++)
                if(i % 2 == 0) cout << i << endl;
            break;
        }
        case 2: {
            // Prints "SIT" 5 times
            for(int i = 0; i < 5; i++)
                cout << "SIT" << endl;
            break;
        }
        case 3: {
            // Prints numbers from 1 to 10, but skips 3 and 5
            for(int i = 1; i <= 10; i++) {
                if(i == 3 || i == 5) continue;
                cout << i << endl;
            }
            break;
        }
        case 4: {  // Right-angled triangle star pattern
            int n =5;
            
            for(int i = 1; i <= n; i++) {
                for(int j = 1; j <= i; j++)
                    cout << "*";
                cout << "\n";
            }
            break;
        }
        case 5: { // Inverted right-angled triangle star pattern
            int n=5;
            
            for(int i = n; i >= 1; i--) {
                for(int j = 1; j <= i; j++)
                    cout << "*";
                cout << "\n";
            }
            break;
        }
        case 6: { // Hollow square star pattern
            int n;
            int rows = 5;

            for (int i = 1; i <= rows; ++i) {
                // Print spaces
                for (int j = rows - i; j > 0; --j) {
                    cout << " ";
                }
                // Print stars
                for (int k = 1; k <= i; ++k) {
                    cout << "*";
                }
                cout << endl;
            }
            break;
        }
        case 7: { // Centered star pyramid
            int rows =5;
            
            for(int i = 0; i < rows; i++) //lines
            {
                for(int j = 0; j < rows - i - 1; j++)
                    cout << " ";
                for(int j = 0; j < 2 * i + 1; j++)
                    cout << "*";
                cout << "\n";
            }
            break;
        }
        case 8: { // Prints ummbers in right angled patten
            int rows = 4;   // Number of rows
            int num = 1;    // Start printing from 1
        
            for (int i = 1; i <= rows; i++) {
                for (int j = 1; j <= i; j++) {
                    cout << num << " ";
                    num++;
                }
                cout << endl;
            }
            break;
        }
        case 9: {
            // Prints numbers from 1 to 20
            for(int i = 1; i <= 20; i++)
                cout << i << endl;
            break;
        }
        case 10: {
            // Password Authenticator
            string CORRECT;
            cout << "SET Password: ";
            cin >> CORRECT;

            string guess;
            int attempts = 0;
            const int MAX = 3;

            while(attempts < MAX) {
                cout << "Enter password: ";
                cin >> guess;
                if(guess == CORRECT) {
                    cout << "Access granted.\n";
                    return 0;
                } else {
                    attempts++;
                    cout << "Incorrect (" << attempts << "/" << MAX << ").\n";
                }
            }
            cout << "Too many failed attempts. Access denied.\n";
            break;
        }
        default:
            cout << "Invalid question number!" << endl;
    }

    return 0;
}


//output
/*Enter the question number (1-10): 1
0
2
4
6
8

Enter the question number (1-10): 2
SIT
SIT
SIT
SIT
SIT

Enter the question number (1-10): 3
1
2
4
6
7
8
9
10

Enter the question number (1-10): 4
*
**
***
****
*****

Enter the question number (1-10): 5
*****
****
***
**
*

Enter the question number (1-10): 6
    *
   **
  ***
 ****
*****


Enter the question number (1-10): 7
    *
   ***
  *****
 *******
*********

Enter the question number (1-10): 8
1 
2 3 
4 5 6 
7 8 9 10 

Enter the question number (1-10): 9
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20

Enter the question number (1-10): 10
SET Password: hello
Enter password: hi
Incorrect (1/3).
Enter password: bad
Incorrect (2/3).
Enter password: hello
Access granted.
*/
