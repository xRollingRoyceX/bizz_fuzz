/* Author: sean
 * Read 'till you can't. Then write it 'till
 * you can. this is a language, and i will make many mistakes :)
 * It's a language and I will make many mistakes, -
 * it's natural to get flustered and want to quit C++ forever - 
 * Created on November 6, 2017, 5:38 PM
 
could have had this done in 10 min, including writing the mathematical equation on paper 
that goes solves it in under 1 min. But I tried a different avenue in my code and, well,
I was unsure of using 'cases' in a problem like this so my code suffered during that first round.
ALL IN ALL, pretty damn good I think for only coding for 4 months in C++
*/

#include "inclds"
int main() 
{
    //change values as desired: 
    int var1 = 3;
    int var2 = 5;

    for (int i = 1; i != 101; ++i) 
    {
        //if number chosen matches only its self
        if (i % var1 == 0 && i % var2 != 0) {
            cout << i << "\t" << "fizz" << endl;
        }            //if number chosen matches only its self
        else if (i % var2 == 0 && i % var1 != 0) {
            cout << i << "\t" << "buzz" << endl;
        }            //if both are equal values: 
        else if (i % var1 == 0 && i % var2 == 0) {
            cout << i << " \t" << "fizzbuzz" << endl;
        }            //print as normally:
        else {
            cout << i << "\t" << i << endl;
        }
    }
    return 0;
}
