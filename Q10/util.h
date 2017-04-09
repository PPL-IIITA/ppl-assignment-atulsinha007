#include <bits/stdc++.h>
#include "boys.h"
#include "girls.h"
#include "gift.h"
#include "couple.h"
using namespace std;

template <class T> class kbe {
	public:
		void k_best(vector<T> &a,int array[],int n) {
    

    int i, j, t;
    T tmp;
    for( i = 0; i < n-1; i++ ) {
        for( j = i+1; j < n; j++ ) {
            if( array[i] < array[j] ) {
                t = array[i];
                array[i] = array[j];
                array[j] = t;
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

}
};