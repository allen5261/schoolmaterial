#include<iostream>
using namespace std;
int main(){
	string sub,ppt,ssub="Lorem";
	cin>>sub;
	do{
//		if(sub=="chi") {freopen("Chinese.html","a+",stdout);ssub="语文"; }
//			else if(sub=="mat") {freopen("Maths.html","a+",stdout);ssub="数学"; }
//			else if(sub=="eng") {freopen("English.html","a+",stdout);ssub="英语"; }
//			else if(sub=="che") {freopen("Chemistry.html","a+",stdout);ssub="化学"; }
//			else if(sub=="his") {freopen("History.html","a+",stdout);ssub="历史"; }
	
		cin>>ppt;
		
		cout<<"\t\t<tr>\n";
		cout<<"\t\t<td><font color=\"#FFFFFF\" face=\"source-han-serif-sc\"><span lang=\"zh-cn\">"<<ppt<<"</span></font></td>\n";
		cout<<"\t\t<td align=\"right\"><font color=\"#FFFFFF\" face=\"Courier New\">7.98MB</font></td>"
		
		cin>>sub;
	}while(sub!="exit");
	return 0; 
} 
