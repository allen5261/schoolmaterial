#include<iostream>
#include <sys/types.h>  
#include <sys/stat.h>
#include<cmath>
#include<iomanip>
using namespace std;
long getFileSize(const char* strFileName)
{
    struct _stat info;
    	_stat(strFileName, &info);
    long size = info.st_size;
    return size;
} 

double convert(double size)
{
    double result = size;
    result=size / 1048576;
    return result;
}

int main(){
	string sub,ppt,ssub="Lorem",path;
	double s=0;
	cin>>sub;
				 if(sub=="chi") {freopen("Chinese.html","a",stdout);ssub="语文"; }
			else if(sub=="mat") {freopen("Maths.html","a",stdout);ssub="数学"; }
			else if(sub=="eng") {freopen("English.html","a",stdout);ssub="英语"; }
			else if(sub=="che") {freopen("Chemistry.html","a",stdout);ssub="化学"; }
			else if(sub=="his") {freopen("History.html","a",stdout);ssub="历史"; }
	
		getline(cin,ppt);
		
		path=".\\files\\"+ssub+"\\"+ppt;
		
		const char *path_c=path.c_str();
		
		s=convert(getFileSize(path_c));
		
		cout.setf(ios::fixed);
		
		cout<<"\n\t\t<tr>\n";
		cout<<"\t\t<td><font color=\"#FFFFFF\" face=\"source-han-serif-sc\"><span lang=\"zh-cn\">"<<ppt<<"</span></font></td>\n";
		cout<<"\t\t<td align=\"right\"><font color=\"#FFFFFF\" face=\"Courier New\">"<<fixed<<setprecision(2)<<s<<"MB</font></td>";
		cout<<"\t\t<td align=\"center\" width=\"10\"><font face=\"source-han-serif-sc\" color=\"#FFFFFF\">\n";
		cout<<"\t\t<a href=\""<<path<<"\" target=\"_blank\">\n";
		cout<<"\t\t<input type=\"button\" value=\"下载\" style=\"float: right\"></a></font></td>\n";
		cout<<"\t\t</tr>\n\t\t\n";
	return 0; 
} 
