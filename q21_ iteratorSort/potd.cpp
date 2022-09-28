#include "potd.h"

// Your code here!
double sum(vector<double>::iterator start, vector<double>::iterator end) {
    vector<double>::iterator it = start;
	double sum = 0;
	while (it!=end) {
		sum+= *it;
		it++;
	}
    return sum;
}


vector<double>::iterator max_iter(vector<double>::iterator start, vector<double>::iterator end) {
    vector<double>::iterator max = start;
	vector<double>::iterator it = start;
	while (it!=end) {
		if (*it>*max) {
			max=it;
		}
		it++;
	}
	return max;
}

void sort_vector(vector<double>::iterator start, vector<double>::iterator end){
    vector<double>::iterator it = start;
    while (it!=end) {
        vector<double>::iterator max = max_iter(it,end);
        iter_swap(it,max);
        it++;
    }
}