#include<bits/stdc++.h>
using namespace std;

class toDo{
	public:
		string s;
		bool complete;
		int id;
		
		toDo(string _s,bool c,int i){
			this->s=_s;
			this->complete=c;
			this->id=i;
		}
};

int main(){
	vector<toDo*> arr;
	int i=1;
	int e=1;
	while(e){
		cout<<"1) ADD TASK"<<endl<<"2) MARK AS COMPLETE"<<endl<<"3) VIEW CURRENT TASK"<<endl<<"4) VIEW ALL TASK"<<endl<<"5) EXIT"<<endl;
		cout<<endl;
		int n;
		cout<<"ENTER TASK NUMBER: ";
		cin>>n;
		switch(n){
			case 1:
				{
					string s="";
					bool flag;
					cout<<"ENTER YOUR TASK: ";
					cin.ignore();
					getline(cin,s,'\n');
					toDo* t=new toDo(s,0,i);
					arr.push_back(t);
					i++;
					cout<<endl;
					break;
				}
			case 2:
				{
					cout<<"WHICH NUMBER TASK YOU WANT TO MARK COMPLETE:";
					int num;
					cin>>num;
					for(int i=0;i<num;i++){
						if(i==num-1){
							arr[i]->complete=true;
						}
					}
					cout<<endl;
					break;
				}
			case 3:
				{
					cout<<"CURRENT TASK: "<<endl;
					toDo* T=arr[arr.size()-1];
					cout<<T->s<<" "<<"STATUS: "<<T->complete<<endl;
					cout<<endl;
					break;
				}
			case 4:
				{
					if(arr.size()==0){
						cout<<"EMPTY TODO LIST";
					}
					for(int i=0;i<arr.size();i++){
						toDo* to=arr[i];
						cout<<to->id<<" "<<to->s<<" "<<"STATUS: "<<to->complete<<endl;
					}
					cout<<endl;
					break;
				}
			case 5:
				e=0;
				break;
			default:
				cout<<"WRONG CHOICE"<<endl<<endl; 
		}
	}
}