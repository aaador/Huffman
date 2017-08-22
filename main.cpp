#include <iostream>
#include <stdio.h>
#include <string.h>
#include "Huffman.h"

using namespace std;


int main(){
    const char *str = "dadade fade bead ace dead cab bad fad cafe face";
	char buf[1024];
    Huffman a;


	a.init(str);
	cout << endl << endl;

	cout << "Element : Huffman Code" << endl;
	for (int i = 0; i < 128; i++){
		if (code[i])
            printf("'%c'\t: %s\n", i, code[i]);
	}
    cout << endl << endl;


	a.encode(str, buf);
	cout << "Encoded by Huffman's Algorithm: "<< buf;
    cout << endl << endl;

	cout << "Decoded: ";
	a.decode(buf, q[1]);
    cout << endl << endl;
	return 0;
}
