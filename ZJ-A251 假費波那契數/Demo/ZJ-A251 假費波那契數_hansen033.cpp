#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int operation;//記錄測資數量
	for(cin>>operation; operation>0; operation--){//心血來潮寫成這樣
		int N, data[20];//紀錄數列多長, 題目說N不會超過20
		//輸入資料
		cin>>N;
		for(int t=0; t<4; t++)
			cin>>data[t];
		//產生數列
		for(int t=4; t<N; t++)
			data[t]=data[t-4]+data[t-1];
		//排序
		sort(data, data+N);
		//輸出中位數(所以要排序)
		cout<<data[N/2]<<"\n";
	}
}