string t,q;
	int num=N/2,ans=-1,x;
	while(num>0){
		t=S.substr(0,num);
		q=S.substr(N-num,num);
		if(t!=q){
			num--;//not valid
		}
		else{
			string temp=S.substr(0,N-num);
			n=temp.size()-num;
			temp=temp.substr(num,n);
			//cout<<temp<<endl;
            n=temp.size();
            x=temp.find(t);
            if(x!=n)
			{ans=num;//valid ans
            break;}
            else
            num--;
		}
	}
	if(ans==-1)
	cout<< "not found";
	else
	cout<< S.substr(0,ans);
    cout<<endl;