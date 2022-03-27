#include<iostream>
#include<stack>
using namespace std;


class Stack{
	//properties
	public :
	 int *arr;
	 int top;
	 int size;

	 Stack(int size){
	 	this->size = size;
	 	 arr= new int[size];
	 	 top=-1;

	 }


	 void push(int element){
        
        if(size-top>1){
        	top++;
        	arr[top]=element;
        }

        else{

        	cout<<"stack overflow"<<endl;

        }


	 }


	 void pop(){
       if(top>=0){
       	top--;
       }


       else {

       	cout<<"stack underflow"<<endl;

       }





	 }


	 int peek(){
        
        if(top>=0 )
        	return arr[top];
        else {


        	cout<<"stack is empty";
        }


        

	 }
	 bool isempty(){

        if(top==-1){

        	return true;

        }

        else {

            return false;


        }


	 }

};








int main(){
// stack<int>s;
// s.push(11);
// s.push(22);
// cout<<s.top();
// s.pop(11);
// s.pop(22);
Stack st(5);
st.push(21);
st.push(34);
st.push(35);
cout<<st.peek()<<endl;
st.pop();
cout<<st.peek()<<endl;
if(st.isempty()){
	cout<<"stack is empty"<<endl;
}


else {

   cout << "stack is not empty"<<endl;

}

}