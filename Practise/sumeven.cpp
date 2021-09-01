// C/C++ program to check whether it is possible to make
// string palindrome by removing one character
#include <bits/stdc++.h>
using namespace std;

// Utility method to check if substring from low to high is
// palindrome or not.
bool isPalindrome(string::iterator low, string::iterator high)
{
    while (low < high)
    {
       if (*low != *high)
          return false;
       low++;
       high--;
    }
    return true;
}

// This method returns -1 if it is not possible to make string
// a palindrome. It returns -2 if string is already a palindrome.
// Otherwise it returns index of character whose removal can
// make the whole string palindrome.
int possiblePalinByRemovingOneChar(string str)
{
    //  Initialize low and right by both the ends of the string
    int low = 0, high = str.length() - 1;

    //  loop untill low and high cross each other
    while (low < high)
    {
        // If both characters are equal then move both pointer
        // towards end
        if (str[low] == str[high])
        {
            low++;
            high--;
        }
        else
        {
            /*  If removing str[low] makes the whole string palindrome.
                We basically check if substring str[low+1..high] is
                palindrome or not. */
            if (isPalindrome(str.begin() + low + 1, str.begin() + high))
                return low;

            /*  If removing str[high] makes the whole string palindrome
                We basically check if substring str[low+1..high] is
                palindrome or not. */
            if (isPalindrome(str.begin() + low, str.begin() + high - 1))
                return high;

            return -1;
        }
    }

    //  We reach here when complete string will be palindrome
    //  if complete string is palindrome then return mid character
    return -2;
}

// Driver code to test above methods
int main()
{
    string str;
    cin>>str; 
    int idx = possiblePalinByRemovingOneChar(str);
    if (idx == -1)
        cout << "Not Possible \n";
    else if (idx == -2)
        cout << "Possible without removing any character";
    else
        cout << "Possible by removing character"
             << " at index " << idx << "\n";
    return 0;
}