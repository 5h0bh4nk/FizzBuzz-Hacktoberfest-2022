// A code that implements FizzBuzz for numbers 1-100 using singly linked list
// Author: @yuktagopalani
#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  struct node{
      string data;
      node* next;
  };

  node* head = new node;
  head->data = to_string(1);
  head->next = NULL;
  node* previous_node = head;
  for(int i=2;i<=100;i++){
      node* temp = new node;
      if(i%3==0 && i%5==0){
          temp->data = "FizzBuzz";
      }
      else if(i%3==0){
          temp->data = "Fizz";
      }
      else if(i%5==0){
          temp->data = "Buzz";
      }
      else{
          temp->data = to_string(i);
      }
      temp->next = NULL;
      previous_node->next = temp;
      previous_node =temp;
  }
  node* list_pointer = head;
  while(list_pointer!=NULL){
      cout<<list_pointer->data<<endl;
      list_pointer=list_pointer->next;
  }

  
  
}