/* 
 * File:   main.cpp
 * Author: Ivan
 *
 * Created on November 5, 2013, 6:58 PM
 */

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

/**
 * Return odd and even array
 * 
 * @param input The input numbers
 * @param outOdd The output odd numbers
 * @param outEven The output even numbers
 * @return Odd and even array
 */
string statistics(vector<int> &input, vector<int> &outOdd, vector<int> &outEven) {
    string answer;
    
    for (int i = 0; i < input.size(); ++i) {
        if (input[i] % 2 == 0) {
            outEven.push_back(input[i]);
        } else {
            outOdd.push_back(input[i]);
        }
    }

    // Answer
    if (outEven.size() >= outOdd.size()) {
        answer = "YES";
    } else {
        answer = "NO";
    }
    
    return answer;
}

int main(int argc, char** argv) {
    ifstream in;
    string inFileName = "input.txt";
    in.open(inFileName.c_str());
    if (!in.is_open()) {
        cerr << "Error: could not open file: " << inFileName.c_str() << endl;
        return 1;
    }

    ofstream out;
    string outFileName = "output.txt";
    out.open(outFileName.c_str());
    if (!out.is_open()) {
        cerr << "Error: could not open file: " << outFileName.c_str() << endl;
        return 1;
    }

    int number;
    vector<int> input;
    int inputValue;
    if (in >> number) {
        for (int i = 0; i < number; ++i) {
            if (in >> inputValue) {
                input.push_back(inputValue);
            } else {
                cerr << "Error: incorrect data in the file" << inFileName.c_str() << endl;
                return 1;
            }
        }
    } else {
        cerr << "Error: incorrect data in the file" << inFileName.c_str() << endl;
        return 1;
    }

    vector<int> outOdd;
    vector<int> outEven;
    string answer = statistics(input, outOdd, outEven);

    // Output Odd
    for (int i = 0; i < outOdd.size(); ++i) {
        out << outOdd[i];
        if (i != (outOdd.size() - 1)) {
            out << " ";
        } else {
            out << endl;
        }
    }

    // Output Even
    for (int i = 0; i < outEven.size(); ++i) {
        out << outEven[i];
        if (i != (outEven.size() - 1)) {
            out << " ";
        } else {
            out << endl;
        }
    }
    
    out << answer << endl;

    return 0;
}

