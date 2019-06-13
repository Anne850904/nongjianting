#include<vector>
#include<algorithm> 
#include <iostream> //标准的输入输出流文件 
using namespace std;//使用命名空间 

struct point{
	int t;
	bool f;
};
bool cmp(point x,point y){
	return x.t<y.t; 
}
int greedy(vector<point>x){
	int max=0,cur=0,n=x.size();
	sort(x.begin(),x.end(),cmp);
	for(int i=0;i<n;i++){
	if(x[i].f)
	cur++;
	else
	cur--;
	if(cur>max)
	max-cur;
	}
	return max;
	}
int main(){
	vector<point> x;
	int n,i;
	point temp;
	while(cin>>n,n){
		for(i=0;i<n;i++){
			temp.f=true;
			cin>>temp.t;
			x.push_back(temp); 
			temp.f=false;
			cin>>temp.t;
			x.push_back(temp);
			}
			cout<<greedy(x)<<endl;
			x.clear();
			return 0;
}
}
	
	

