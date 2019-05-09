// Author	  : sahinayk
// Time complexity: O(n)
// Description    : Program gets an input x; then gets x many sequence of numbers. Finds the most
//		    repeated sequence(s).

#include <string>
#include <iostream>
#include <unordered_map>

using namespace std;

int main (void) {

	string seq; // to store each line of sequence temporarily
	unordered_map<string, unsigned> seqs; // unordered map to store the whole bunch of sequences
	unordered_map<string, unsigned>::iterator it; // iterator to iterate through each element of map
	unsigned x, y = 0; // x is to get the number of sequences to be entered
			   // y is to set the max repeated sequence's repetition time
	cin >> x;
	cin.ignore();
	for (int i = 0; i < x; i++) {
		getline(cin, seq); // read the sequence into seq string
		seqs[seq]++; // use the string as key and increase its repetition by 1
		if (seqs[seq] > y) y = seqs[seq]; // to sort out the max repeated key
	}
	// find the most repeated sequence(s) and print them out
	cout << "Most repeated sequence(s): " << endl;
	for (it = seqs.begin(); it != seqs.end(); it++) {
		if (it->second == y) cout << it->first << endl;
	}
	return 0;			
}
