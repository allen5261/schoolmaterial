#include<iostream>
#include <sys/types.h>  
#include <sys/stat.h>
using namespace std;
long getFileSize(char* strFileName)
{
    struct _stat info;
    _stat(strFileName, &info);
    long size = info.st_size;
    return size;
} 
int main(){
	string sub,ppt,ssub="Lorem";
	char* path;
	long s;
	cin>>sub;
	do{
//		if(sub=="chi") {freopen("Chinese.html","a+",stdout);ssub="����"; }
//			else if(sub=="mat") {freopen("Maths.html","a+",stdout);ssub="��ѧ"; }
//			else if(sub=="eng") {freopen("English.html","a+",stdout);ssub="Ӣ��"; }
//			else if(sub=="che") {freopen("Chemistry.html","a+",stdout);ssub="��ѧ"; }
//			else if(sub=="his") {freopen("History.html","a+",stdout);ssub="��ʷ"; }
	
		cin>>ppt;
		
		
		
		cout<<s<<endl;
		
		cout<<"\t\t<tr>\n";
		cout<<"\t\t<td><font color=\"#FFFFFF\" face=\"source-han-serif-sc\"><span lang=\"zh-cn\">"<<ppt<<"</span></font></td>\n";
		cout<<"\t\t<td align=\"right\"><font color=\"#FFFFFF\" face=\"Courier New\">"<<s<<"</font></td>";
		cout<<"\t\t<td align=\"center\" width=\"10\"><font face=\"source-han-serif-sc\" color=\"#FFFFFF\">\n";
		cout<<"\t\t<a href=\""<<path<<"\" target=\"_blank\">\n";
		cout<<"\t\t<input type=\"button\" value=\"����\" style=\"float: right\"></a></font></td>\n";
		cout<<"\t\t</tr>\n\t\t\n";
		
		cin>>sub;
	}while(sub!="exit");
	return 0; 
} 
