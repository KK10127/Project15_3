/*
 * CHAPTER 15, PROJECT 3
 * CS 151
 * Tu 5:30-9:20 with Porto
 * Programmer: Jay Montoya
 *
 *
 * PROBLEM STATEMENT:
 *      A sequence of integers such as 1, 3, 5, 7, ..  can be represented by a function
 *      that takes a non-negative integer as a parameter and returns the corresponding
 *      term of the sequence. For example, the sequence of odd numbers just cited can be
 *      represented by the function
 *
 *      int odd(int k) { return 2 * k + 1; }
 *
 *      Write an abstract class AbstractSeq that has a pure virtual member function
 *
 *      virtual int fun(int k)  = 0;
 *
 *      as a stand-in for an actual sequence, and two member functions
 *
 *      void printSeq(int k, int m);
 *      int sumSeq(int k, int m);
 *
 *      that are passed two integer parameters k and m, where k < m. The function printSeq()
 *      will print all terms fun(k) through fun(m) of the sequence, and likewise, the function
 *      sumSeq will return the sum of those terms. Demonstrate your AbstractSeq class by
 *      creating subclasses that you use to sum the terms of at least two different sequcnes.
 *      Determine what kind of output best shows off the operation of these classes and write
 *      a program that produces that kind of output.
 *
 *
 */
#include <iostream>
using namespace std;

// abstract class
class AbstractSeq
{
public:
    // Pure Virtual Function
    virtual int fun(int k) = 0;

    /*
     * function prints sequence from position k all the way through m.
     * PRE-CONDITION: k < m
     * POST-CONDITION: output is displayed to user
     */
    void printSeq(int k, int m) {
        // check for good data
        if (k >= m) {
            cout << "ERROR: K >= M!" << endl;
            return;
        }

        // print the sequence at the segment
        cout << "\tprintSeq() CALLED!: ";
        for (int i = k; i <= m; i++) {
            cout << fun(i) << " ";
        }
        cout << "\n\n";
        return;
    }

    /*
     * function sums the sequence from position k all the way through m.
     * PRE-CONDITION: k < m
     * POST-CONDITION: output is displayed to the user
     */
    void sumSeq(int k, int m) {
        // check for good data
        if (k >= m) {
            cout << "ERROR: K >= M!" << endl;
            return;
        }

        // add up the sequence at the segment
        int result = 0;
        for (int i = k; i <= m; i++) {
            result += fun(i);
        }
        cout << "\tsumSeq() CALLED!: " << result << endl << endl;
        return;
    }

};

// This class inherits from AbstractSeq and implements fun()
class OddSequence : public AbstractSeq
{
public:
    int fun(int k) {
        return 2 * k + 1;
    }
};

// This class inherits from AbstractSeq and implements fun()
class EvenSequence : public AbstractSeq
{
public:
    int fun(int k) {
        return 2 * k + 2; // since 0 is neither even or odd
    }
};

int main() {

    cout << "Welcome to the demo of project 3!" << endl << endl;

    OddSequence os;
    EvenSequence es;

    cout << "ODD SEQUENCE: 1, 3, 5, 7, ...." << endl;
    os.printSeq(0,5);
    os.sumSeq(0,5);

    cout << "\nEVEN SEQUENCE: 2, 4, 6, 8, ...." << endl;
    es.printSeq(0,5);
    es.sumSeq(0,5);

    cout << "\nThis concludes the demo for this project." << endl;
    return 0;
}