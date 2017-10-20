#include<iostream>
#include <sys/types.h>  
#include <sys/stat.h>
#include<cmath>
#include<iomanip>
#include<string> 
#include <sstream>
#include <locale>
#include <windows.h>  
#include <assert.h>  
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

char* Ansi2Unicode(const char* str)  
{  
    int dwUnicodeLen = MultiByteToWideChar(CP_ACP,0,str,-1,NULL,0);  
    if(!dwUnicodeLen)  
    {  
        return strdup(str);  
    }  
    size_t num = dwUnicodeLen*sizeof(wchar_t);  
    wchar_t *pwText = (wchar_t*)malloc(num);  
    memset(pwText,0,num);  
    MultiByteToWideChar(CP_ACP,0,str,-1,pwText,dwUnicodeLen);  
    return (char*)pwText;  
}  

char* Unicode2Utf8(const char* unicode)  
{  
    int len;  
    len = WideCharToMultiByte(CP_UTF8, 0, (const wchar_t*)unicode, -1, NULL, 0, NULL, NULL);  
    char *szUtf8 = (char*)malloc(len + 1);  
    memset(szUtf8, 0, len + 1);  
    WideCharToMultiByte(CP_UTF8, 0, (const wchar_t*)unicode, -1, szUtf8, len, NULL,NULL);  
    return szUtf8;  
} 

char* atu8(const char* str)  
{  
    char* unicode = Ansi2Unicode(str);   
    char* utf8 = Unicode2Utf8(unicode);  
    free(unicode);  
    return utf8;  
} 
int main(){
	string sub,ssub,path,path_ANSI,ppt,ssub_ANSI;
	double s=0;
		getline(cin,sub);
		getline(cin,ppt);
		
				 if(sub=="chi") {freopen("Chinese.html","a",stdout);ssub_ANSI="璇枃";ssub="语文"; }
			else if(sub=="mat") {freopen("Maths.html","a",stdout);ssub_ANSI="鏁板";ssub="数学"; }
			else if(sub=="eng") {freopen("English.html","a",stdout);ssub_ANSI="鑻辫";ssub="英语"; }
			else if(sub=="che") {freopen("Chemistry.html","a",stdout);ssub_ANSI="鍖栧";ssub="化学"; }
			else if(sub=="his") {freopen("History.html","a",stdout);ssub_ANSI="鍘嗗彶";ssub="历史"; }
		
		
		path=".\\files\\"+ssub+"\\"+ppt;
		
		const char *path_c=path.c_str();
		const char *ppt_c=ppt.c_str();
		
		s=convert(getFileSize(path_c));
		const char *path_utf8=atu8(path_c);
		const char *ppt_utf8=atu8(ppt_c);
		
		cout<<"\n\t\t<tr>\n";
		cout<<"\t\t<td><font color=\"#FFFFFF\" face=\"source-han-serif-sc\"><span lang=\"zh-cn\">"<<ppt_utf8<<"</span></font></td>\n";
		cout<<"\t\t<td align=\"right\"><font color=\"#FFFFFF\" face=\"Courier New\">"<<fixed<<setprecision(2)<<s<<"MB</font></td>\n";
		cout<<"\t\t<td align=\"center\" width=\"10\"><font face=\"source-han-serif-sc\" color=\"#FFFFFF\">\n";
		cout<<"\t\t<a href=\""<<path_utf8<<"\" target=\"_blank\">\n";
		cout<<"\t\t<input type=\"button\" value=\"涓嬭浇\" style=\"float: right\"></a></font></td>\n";
		cout<<"\t\t</tr>\n\t\t";
	return 0; 
} 
