#include <iostream>
using namespace std;

int main()
{
    char letter;
    cout << "Enter a letter to check Vowel and Consonant : ";
    cin >> letter;

    if (letter == 'a')
    {
        cout << "It is Vowel.";
    }
    else if (letter == 'e')
    {
        cout << "It is Vowel.";
    }
    else if (letter == 'i')
    {
        cout << "It is Vowel.'";
    }
    else if (letter == 'o')
    {
        cout << "It is Vowel.";
    }
    else if (letter == 'u')
    {
        cout << "It is Vowel.";
    }else {
        cout<< "It is a consonant.";
    }
    return 0;
}