#include<iostream>
#include<vector>
#include<string>

using namespace std;
typedef int Rank;
template <typename T>
void vector<T>::mergesort(Rank lo,Rank hi){ //[lo,hi)
	if(hi-lo < 2 ) return; //��Ԫ��������Ȼ���򣬷��򡣡�����
	int mi = (lo + hi) >> 1; //���е�
	mergesort(lo,mi); //��ǰ�벿������
	mergesort(mi , hi); //�Ժ�벿������
	merge(lo , mi , hi); //�鲢
}
template <typename T> void vector<T>::merge(Rank lo, Rank mi, Rank hi) {
	T *A = _elem + lo; //
	int lb = mi - lo; T * B = new T[lb]; 
	for( Rank i =0; i < lb; B[i] = A[i++]);
	int lc = hi - mi; T * C = _elem + mi;
	for (Rank i = 0, j = 0, k = 0; (j < lb) || (k < lc); ) {
		if ( (j < lb) && (lc <= k || (B[j] <= C[k]) ) ) A[i++] = B[j++];
		if ( (k < lc) && (lb <= j || (c[k] < B[j] ) ) ) A[i++] = C[k++];
	}
	delete [] B;
}