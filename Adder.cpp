#include<iostream>
using namespace std;
int main(){
	string sub;
	cin>>sub;
	while(sub=="exit"){
		if(sub=="chi") freopen("Chinese.html","a+",stdout);
			else if(sub=="mat") freopen("Maths.html","a+",stdout);
			else if(sub=="eng") freopen("English.html","a+",stdout);
			else if(sub=="che") freopen("Chemistry.html","a+",stdout);
			else if(sub=="his") freopen("History.html","a+",stdout);
		cin>>sub;
	}
} 
