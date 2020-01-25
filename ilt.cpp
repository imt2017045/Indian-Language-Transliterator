#include<bits/stdc++.h>
using namespace std;
map<string,vector<string> > m,m1;
map<string,vector<string> > m2;
int main()
{
  freopen("output.txt", "w", stdout);
  m["a"]={"\u0C85"};
  m["aa"]={"\u0C86","\u0cbe"};
  m["i"]={"\u0C87","\u0cbf"};
  m["ii"]={"\u0C88","\u0cd5"};
  m["u"]={"\u0C89","\u0cc1"};
  m["uu"]={"\u0C8A","\u0cc2"};
  m["ru"]={"\u0C8B","\u0cc3"};
  m["e"]={"\u0C8E","\u0cc6"};
  m["ee"]={"\u0C8F","\u0cc7"};
  m["ai"]={"\u0C90","\u0cc8"};
  m["o"]={"\u0C92","\u0cca"};
  m["oo"]={"\u0C93","\u0ccb"};
  m["au"]={"\u0C94","\u0ccc"};
  m["Am"]={"\u0C82"}; m["An"]={"\u0c82"};
  m["aha"]={"\u0C83"};
  m["ka"]={"\u0C95"};   m["k"]={"\u0C95\u0CCD"};
  m["kha"]={"\u0C96"};  m["kh"]={"\u0C96\u0CCD"};
  m["ga"]={"\u0c97"};  m["g"]={"\u0c97\u0CCD"};
  m["gha"]={"\u0c98"};  m["gh"]={"\u0c98\u0CCD"};
  m["gnya"]={"\u0c99"};  m["gny"]={"\u0c99\u0CCD"};
  m["cha"]={"\u0c9A"};  m["ch"]={"\u0c9A\u0CCD"};
  m["chha"]={"\u0c9B"};  m["chh"]={"\u0c9B\u0CCD"};
  m["ja"]={"\u0c9C"};  m["j"]={"\u0c9C\u0CCD"};
  m["jha"]={"\u0c9D"};  m["jh"]={"\u0c9D\u0CCD"};
  m["enya"]={"\u0c9E"};  m["eny"]={"\u0c9E\u0CCD"};
  m["ta"]={"\u0c9F"};  m["t"]={"\u0c9F\u0CCD"};
  m["Ta"]={"\u0ca0"};  m["T"]={"\u0ca0\u0CCD"};
  m["da"]={"\u0ca1"};  m["d"]={"\u0ca1\u0CCD"};
  m["Da"]={"\u0ca2"};  m["D"]={"\u0ca2\u0CCD"};
  m["nnah"]={"\u0ca3"};
  m["tha"]={"\u0ca4"};  m["th"]={"\u0ca4\u0CCD"};
  m["thha"]={"\u0ca5"};  m["thh"]={"\u0ca5\u0CCD"};
  m["dha"]={"\u0ca6"};  m["dh"]={"\u0ca6\u0CCD"};
  m["Dha"]={"\u0ca7"};  m["Dh"]={"\u0ca7\u0CCD"};
  m["na"]={"\u0ca8"};  m["n"]={"\u0ca8\u0CCD"};
  m["pa"]={"\u0caa"};  m["p"]={"\u0caa\u0CCD"};
  m["pha"]={"\u0cab"};  m["ph"]={"\u0cab\u0CCD"};
  m["ba"]={"\u0cac"};  m["b"]={"\u0cac\u0CCD"};
  m["bha"]={"\u0cad"};  m["bh"]={"\u0cad\u0CCD"};
  m["ma"]={"\u0cae"};  m["m"]={"\u0cae\u0CCD"};
  m["ya"]={"\u0caf"};  m["y"]={"\u0caf\u0CCD"};
  m["ra"]={"\u0cb0"};  m["r"]={"\u0cb0\u0CCD"};
  m["la"]={"\u0cb2"};  m["l"]={"\u0cb2\u0CCD"};
  m["va"]={"\u0cb5"};  m["v"]={"\u0cb5\u0CCD"};
  m["sha"]={"\u0cb6"};  m["sh"]={"\u0cb6\u0CCD"};
  m["Sha"]={"\u0cb7"};  m["Sh"]={"\u0cb7\u0CCD"};
  m["sa"]={"\u0cb8"};  m["s"]={"\u0cb8\u0CCD"};
  m["ha"]={"\u0cb9"};  m["h"]={"\u0cb9\u0CCD"};
  m["La"]={"\u0cb3"};  m["L"]={"\u0cb3\u0CCD"};

  m1["a"]={"\\u0C85"};
  m1["aa"]={"\\u0C86","\\u0cbe"};
  m1["i"]={"\\u0C87","\\u0cbf"};
  m1["ii"]={"\\u0C88","\\u0cd5"};
  m1["u"]={"\\u0C89","\\u0cc1"};
  m1["uu"]={"\\u0C8A","\\u0cc2"};
  m1["ru"]={"\\u0C8B","\\u0cc3"};
  m1["e"]={"\\u0C8E","\\u0cc6"};
  m1["ee"]={"\\u0C8F","\\u0cc7"};
  m1["ai"]={"\\u0C90","\\u0cc8"};
  m1["o"]={"\\u0C92","\\u0cca"};
  m1["oo"]={"\\u0C93","\\u0ccb"};
  m1["au"]={"\\u0C94","\\u0ccc"};
  m1["A1"]={"\\u0C82"}; m1["An"]={"\\u0c82"};
  m1["aha"]={"\\u0C83"};
  m1["ka"]={"\\u0C95"};   m1["k"]={"\\u0C95\\u0CCD"};
  m1["kha"]={"\\u0C96"};  m1["kh"]={"\\u0C96\\u0CCD"};
  m1["ga"]={"\\u0c97"};  m1["g"]={"\\u0c97\\u0CCD"};
  m1["gha"]={"\\u0c98"};  m1["gh"]={"\\u0c98\\u0CCD"};
  m1["gnya"]={"\\u0c99"};  m1["gny"]={"\\u0c99\\u0CCD"};
  m1["cha"]={"\\u0c9A"};  m1["ch"]={"\\u0c9A\\u0CCD"};
  m1["chha"]={"\\u0c9B"};  m1["chh"]={"\\u0c9B\\u0CCD"};
  m1["ja"]={"\\u0c9C"};  m1["j"]={"\\u0c9C\\u0CCD"};
  m1["jha"]={"\\u0c9D"};  m1["jh"]={"\\u0c9D\\u0CCD"};
  m1["enya"]={"\\u0c9E"};  m1["eny"]={"\\u0c9E\\u0CCD"};
  m1["ta"]={"\\u0c9F"};  m1["t"]={"\\u0c9F\\u0CCD"};
  m1["Ta"]={"\\u0ca0"};  m1["T"]={"\\u0ca0\\u0CCD"};
  m1["da"]={"\\u0ca1"};  m1["d"]={"\\u0ca1\\u0CCD"};
  m1["Da"]={"\\u0ca2"};  m1["D"]={"\\u0ca2\\u0CCD"};
  m1["nnah"]={"\\u0ca3"};
  m1["tha"]={"\\u0ca4"};  m1["th"]={"\\u0ca4\\u0CCD"};
  m1["thha"]={"\\u0ca5"};  m1["thh"]={"\\u0ca5\\u0CCD"};
  m1["dha"]={"\\u0ca6"};  m1["dh"]={"\\u0ca6\\u0CCD"};
  m1["Dha"]={"\\u0ca7"};  m1["Dh"]={"\\u0ca7\\u0CCD"};
  m1["na"]={"\\u0ca8"};  m1["n"]={"\\u0ca8\\u0CCD"};
  m1["pa"]={"\\u0caa"};  m1["p"]={"\\u0caa\\u0CCD"};
  m1["pha"]={"\\u0cab"};  m1["ph"]={"\\u0cab\\u0CCD"};
  m1["ba"]={"\\u0cac"};  m1["b"]={"\\u0cac\\u0CCD"};
  m1["bha"]={"\\u0cad"};  m1["bh"]={"\\u0cad\\u0CCD"};
  m1["ma"]={"\\u0cae"};  m1["m"]={"\\u0cae\\u0CCD"};
  m1["ya"]={"\\u0caf"};  m1["y"]={"\\u0caf\\u0CCD"};
  m1["ra"]={"\\u0cb0"};  m1["r"]={"\\u0cb0\\u0CCD"};
  m1["la"]={"\\u0cb2"};  m1["l"]={"\\u0cb2\\u0CCD"};
  m1["va"]={"\\u0cb5"};  m1["v"]={"\\u0cb5\\u0CCD"};
  m1["sha"]={"\\u0cb6"};  m1["sh"]={"\\u0cb6\\u0CCD"};
  m1["Sha"]={"\\u0cb7"};  m1["Sh"]={"\\u0cb7\\u0CCD"};
  m1["sa"]={"\\u0cb8"};  m1["s"]={"\\u0cb8\\u0CCD"};
  m1["ha"]={"\\u0cb9"};  m1["h"]={"\\u0cb9\\u0CCD"};
  m1["La"]={"\\u0cb3"};  m1["L"]={"\\u0cb3\\u0CCD"};

  m2 ["\\u0c85"]= {"a"}  ;
  m2 ["\\u0c86"]= {"ā" };            m2["\\u0cbe"]={"ā"};
  m2 ["\\u0c87"]= {"i"};            m2["\\u0cbf"]={"i"};
  m2 ["\\u0c88"]= {"ī"};            m2["\\u0cd5"]={"ī"};
  m2 ["\\u0c89"]= {"u"};            m2["\\u0cc1"]={"u"};
  m2 ["\\u0c8a"]= {"ū"};            m2["\\u0cc2"]={"ū"};
  m2 ["\\u0c8b"]= {"ŗ"};            m2["\\u0cc3"]={"ŗ"};
  m2 ["\\u0c8e"]= {"e"};            m2["\\u0cc6"]={"e"};
  m2 ["\\u0c8f"]= {"ee"};            m2["\\u0cc7"]={"ee"};
  m2 ["\\u0c90"]= {"ai"};            m2["\\u0cc8"]={"ai"};
  m2 ["\\u0c92"]= {"o"};            m2["\\u0cca"]={"o"};
  m2 ["\\u0c93"]= {"oo"};            m2["\\u0ccb"]={"oo"};
  m2 ["\\u0c94"]= {"au"};            m2["\\u0ccc"]={"au"};
  m2 ["\\u0c82"]= {"aṇ"};
  m2 ["\\u0c83"]= {"aḥ"};
  m2 ["\\u0c95"]= {"ka"};  m2["\\u0c95\\u0ccd"] ={"k"};  ;
  m2 ["\\u0c96"]= {"kha"};  m2["\\u0c96\\u0ccd"]={"kh"}; ;
  m2 ["\\u0c97"]= {"ga"};   m2 ["\\u0c97\\u0ccd"]= {"g"};
  m2 ["\\u0c98"]= {"gha"};  m2 ["\\u0c98\\u0ccd"]= {"gh"};
  m2 ["\\u0c99"]= {"ṅa"};  m2["\\u0c99\\u0ccd"]={"ṅ"};
  m2 ["\\u0c9a"]= {"ca"};  m2["\\u0c9a\\u0ccd"]={"c"};
  m2 ["\\u0c9b"]= {"cha"}; m2["\\u0c9b\\u0ccd"]={"ch"};
  m2 ["\\u0c9c"]= {"ja"};  m2["\\u0c9c\\u0ccd"]={"j"};
  m2 ["\\u0c9d"]= {"jha"}; m2["\\u0c9d\\u0ccd"]={"jh"};
  m2 ["\\u0c9e"]= {"ña"};  m2["\\u0c9e\\u0ccd"]={"ñ"};
  m2 ["\\u0c9f"]= {"ṭa"};  m2["\\u0c9f\\u0ccd"]={"ṭ"};
  m2 ["\\u0ca0"]= {"ṭha"}; m2["\\u0ca0\\u0ccd"]={"ṭh"};
  m2 ["\\u0ca1"]= {"ḍa"};  m2["\\u0ca1\\u0ccd"]={"ḍ"};
  m2 ["\\u0ca2"]= {"ḍha"}; m2["\\u0ca2\\u0ccd"]={"ḍh"};
  m2 ["\\u0ca3"]= {"ṇa"};
  m2 ["\\u0ca4"]= {"ta"};   m2["\\u0ca4\\u0ccd"]={"t"};
  m2 ["\\u0ca5"]= {"tha"};  m2["\\u0ca5\\u0ccd"]={"th"};
  m2 ["\\u0ca6"]= {"da"};   m2["\\u0ca6\\u0ccd"]={"d"};
  m2 ["\\u0ca7"]= {"dha"};  m2["\\u0ca7\\u0ccd"]={"dh"};
  m2 ["\\u0ca8"]= {"na"};   m2["\\u0ca8\\u0ccd"]={"n"};
  m2 ["\\u0caa"]= {"pa"};   m2["\\u0caa\\u0ccd"]={"p"};
  m2 ["\\u0cab"]= {"pha"};  m2["\\u0cab\\u0ccd"]={"ph"};
  m2 ["\\u0cac"]= {"ba"};   m2["\\u0cac\\u0ccd"]={"b"};
  m2 ["\\u0cad"]= {"bha"};  m2["\\u0cad\\u0ccd"]={"bh"};
  m2 ["\\u0cae"]= {"ma"};   m2["\\u0cae\\u0ccd"]={"m"};
  m2 ["\\u0caf"]= {"ya"};   m2["\\u0caf\\u0ccd"]={"y"};
  m2 ["\\u0cb0"]= {"ra"};   m2["\\u0cb0\\u0ccd"]={"r"};
  m2 ["\\u0cb2"]= {"la"};   m2["\\u0cb2\\u0ccd"]={"l"};
  m2 ["\\u0cb5"]= {"va"};   m2["\\u0cb5\\u0ccd"]={"v"};
  m2 ["\\u0cb6"]= {"śa"};   m2["\\u0cb6\\u0ccd"]={"ś"};
  m2 ["\\u0cb7"]= {"ṣa"};   m2["\\u0cb7\\u0ccd"]={"ṣ"};
  m2 ["\\u0cb8"]= {"sa"};   m2["\\u0cb8\\u0ccd"]={"s"};
  m2 ["\\u0cb9"]= {"ha"};   m2["\\u0cb9\\u0ccd"]={"h"};
  m2 ["\\u0cb3"]= {"ḻa"};   m2["\\u0cb3\\u0ccd"]={"ḻ"};

  string s1;
  getline(cin,s1);
  set<char> ch={'a','e','i','o','u'};
  string s="";
  for(int i=0;i<s1.size();i++)
  { if(s1[i]=='a' && i+1>=0 && s1[i+1]=='n')
    {s+='a';
     s+='A';
     continue;
    }
    if(s1[i]==' ')
    {
      s+=s1[i];
      continue;
    }
    if(i+1<s1.size() && ch.find(s1[i])==ch.end() && s1[i+1]!='a' && ch.find(s1[i+1])!=ch.end())
    { s+=s1[i];
      s+='a';
      continue;
    }
    else if((i+1)<s1.size() && s1[i]=='a' && ch.find(s1[i+1])!=ch.end())
    { s+='a';
      s+=s1[i];
      continue;
    }
    s+=s1[i];
  }

  int flag=0;
  string ans="",ans1="";

  for(int i=0;i<s.size();)
  {
    if(s[i]==' ')
    {
      flag=0;
      cout<<ans<<" ";
      ans1+=' ';
      ans="";
      i++;
      continue;
    }
    int len;
    for(len=3;len>=0;len--)
    {
      if((i+len)>=s.size()) continue;
      string let=s.substr(i,len+1);
      if(m.find(let)!=m.end() && m[let].size()==2)
      {
        ans+=m[let][flag];
        ans1+=m1[let][flag];
        flag=1;
        break;
      }
      else if(m.find(let)!=m.end() && m[let].size()==1)
      {

          ans+=m[let][0];
          ans1+=m1[let][0];
          flag=1;
          break;
      }
      else if(len==0 && m.find(let)==m.end())
      {
        cout<<"Wrong"<<endl;
        return 0;
      }
    }
    i+=(len+1);
  }
  cout<<ans<<endl;
  transform(ans1.begin(), ans1.end(), ans1.begin(), ::tolower);
  string ans2="";

  for(int i=0;i<ans1.size();)
  {
    if(ans1[i]==' ')
    {
      cout<<ans2<<" ";
      ans2="";
      i++;
      continue;
    }
    int len;
    for(len=2;len>=1;len--)
    {
      if((i+(6*(len))>ans1.size())) continue;
      string let=ans1.substr(i,6*(len));
      if(m2.find(let)!=m2.end() && m2[let].size()==2)
      {
        ans2+=m2[let][0];
        break;
      }
      else if(m2.find(let)!=m2.end() && m2[let].size()==1)
      {
          ans2+=m2[let][0];
          break;
      }
      else if(len==1 && m2.find(let)==m2.end())
      {
        cout<<"Wrong"<<endl;
        return 0;
      }
    }
    i+=(6*(len));
  }
  cout<<ans2<<endl;
}
