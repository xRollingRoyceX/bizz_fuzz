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
    //I decided not to write this with unreasonable complexity:  
    //change values as desired: 
    unsigned var1 = 3;
    unsigned var2 = 5;

    for (int i = 1; i != 101; ++i) 
    {
     //If the number matches only its self
        if (i % var1 == 0 && i % var2 != 0) 
        {
            cout << i << " \t" << "fizz" << endl;
        }           
     //If the number matches only its self
        else if (i % var1 != 0 && i % var2 == 0) 
        {
            cout << i << " \t" << "buzz" << endl;
        }           
     //If both numbers are of equal value: 
        else if (i % var1 == 0 && i % var2 == 0) 
        {
            cout << i << " \t" << "fizzbuzz" << endl;
        }              
     //execute code as normally would:
        else
        {
            cout << i << " \t" << i << endl;
        }
    }
    return 0;
}
