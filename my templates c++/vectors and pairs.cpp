#include <bits/stdc++.h>

using namespace std;


int main()
{
    // 25 vidhysagar
    // 39 Anmol
    // 35 shreyansh
//     vector< pair<int,int> >v;
//      pair<int,int>p;
//      p.first=1;
//      p.second=2;
//     v.push_back(p);
//      pair<int,int>p1;
//       p1.first=23;
//      p1.second=24;
//     v.push_back(p1);
//     v.push_back({4,5});
//     v.push_back(make_pair(6,7));

//   sort(v.begin(),v.end());
//   for(int i=0;i<v.size();i++)
//   {
//       cout<<v[i].first<<" "<<v[i].second<<endl;
//   }

 vector<string>v;
 for(int i=0;i<1;i++)
 {
     string s;
     cin>>s;
     v.push_back(s);
 }
     //Anmol
 string s1=v[0];
 for(int i=0;i<s1.size();i++)
 {
     cout<<s1[i]<<" ";
 }



}


#include<bits/stdc++.h>
using namespace std;
int main(){


	vector<int>vec;		// vector<data_type> variable_name(size,value);

	for(int i=0;i<20;i++){
		vec.push_back(i+10);
	}

	cout<<vec.size()<<endl;

	// vector<int>:: iterator it = vec.rbegin();      // printing a vector through iterator
	// for( ;it!= vec.rend();it++){
	// 	cout<<(*it)<<" ";
	// }

	// for(auto it = vec.rbegin() ;it!= vec.rend();it++){	        	//  reverse printing
	// 	cout<<(*it)<<" ";
	// }
	// cout<<endl<<endl;

	// auto it = vec.begin();			// printing any value through iterator
	// cout<<(*it)<<"  "<<*(it+3);

	// for(auto it : vec)
	// 	cout<<it<<", ";

	// auto f = find(vec.begin(),vec.end(),11);			// finding a value

	// if(f != vec.end())
	// vec.erase(f);
	// else
	// cout<<"No Not Found\n";

	//vec.erase(vec.begin(),vec.end());		//  (from ,to-1)

	//vec.insert(vec.begin()+5,20);  		//(pos,value)
    //vec.insert(vec.begin()+5,10,20);		//(pos,freq,value)

	//vec.clear();						// remove all elements from vector


	// for(int i=0;i<10;i++)
	// vec.pop_back();					// Remove last element

	// for(int i=0;i<vec.size();i++)		       // print the vector
	// cout<<vec[i]<<" ";
}
