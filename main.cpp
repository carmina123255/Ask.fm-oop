#include <iostream>
#include<fstream>
#include<string>
#include<bits/stdc++.h>
//#include "oop.h"
using namespace std;

    class User {
public:
    int id;
    string name;
    string password;
    vector<User>users;
    vector<string>show_the_user;

    //static int counter=0;

    User()
    {
       id=0;
        name="";
        password="";
    }
    User(string n,int Id, string pass)
    {
        name=n;
        password=pass;
          id=Id;
    }
    void saveUser(User user)
    {
        fstream outFile;
        outFile.open("read_file.txt", ios::app);
        if (outFile.is_open())
        {
            outFile << user.name << endl;
            outFile << user.id << endl;
            outFile << user.password << endl;
            outFile.close();
        }
    }
    void Show_user()
    {
        fstream myfile;
        myfile.open("read_file.txt", ios::in);
        if (myfile.is_open())
        {
            string line;
            long long  counter = 0;

            while (getline(myfile,line))
            {

                    show_the_user.push_back(line);

            }
        }
            myfile.close();
            long long  j = 1;
            for (int i = 0; i < show_the_user.size() - 1; i+=3)
            {
                    cout << j << " - " << '[' << show_the_user[i] << ']' << " with id " << '[' << show_the_user[i + 1] << ']' << endl;
                    j++;

            }
            show_the_user.clear();

    }

};
//int User:: counter=0;
class question{
int user_id;
int to_user;
string questionp;
vector<string>quest;
vector<string>showquest;

public:
    question(){
        user_id=0;
    to_user=0;
    questionp="";

    }
    question(int user_id,int to_user,string questionp){
    this->user_id=user_id;
    this->to_user=to_user;
    this->questionp=questionp;
    }
    void saveques(question Q){
        fstream save("question.txt",ios::app);
        if(save.is_open()){
            save<<Q.user_id<<"\n";
            save<<Q.to_user<<"\n";
            save<<Q.questionp<<"\n";
            save.close();
        }
    }
    void showallquest( ){
        fstream save("question.txt",ios::in);
        if(save.is_open()){
            string line;
            while(getline(save,line)){
                   // cin.ignore();
                showquest.push_back(line);
            }

        }
                save.close();
        int counter=1;
        for(int i=0;i<showquest.size();i+=3){
            cout<<counter<<"-"<<"question id is : "<<'['<<showquest[i]<<']'<<"  "<<"question to "<<'['<<showquest[i+1]<<']'<<endl;
            cout<<"Question is : "<<'['<<showquest[i+2]<<']'<<endl;
            counter++;

                   }

    save.close();
    }
void printquestiontome(string &id){
int count=0;
 fstream save5("question.txt",ios::in);
        //save.seekg(0);
        if(save5.is_open()){

            string line;
            while(getline(save5,line)){

                quest.push_back(line);

            }




        }
         save5.close();
        int counter=1;
        bool flag=0;
        for(int i=0;i<quest.size();i+=3){

                  if(quest[i+1]==id){
                    cout<< counter<<"-"<<quest[i+2]<<endl;
                    counter++;
                    flag=1;
                  }

                   }
                   if(flag==0){
                    cout<<"There is no question to me\n";
                   }
                   quest.clear();


}
void printquestionfromme(string &id){

    int count=0;
 fstream save6("question.txt",ios::in);
        if(save6.is_open()){
            string line;

            while(getline(save6,line)){

                quest.push_back(line);

                   }
                //save_u.close();
            }
            save6.close();

bool f=0;
int counter=1;
        for(int i=0;i<quest.size();i+=3){

                  if(quest[i]==id){
                    cout<< counter<<"-"<<quest[i+2]<<endl;
                    counter++;
                    f=1;
                  }

                   }
                   if(f==0){
                    cout<<"Iam didn't send any question\n";
                   }



        quest.clear();





}
void showquestion(string &id_user){
 int count=0;
 fstream save3("question.txt",ios::in);
        if(save3.is_open()){
            string line;

            while(getline(save3,line)){

                quest.push_back(line);

                   }
                //save_u.close();
            }

bool counter=0;

        for(int i=0;i<quest.size();i+=3){

                  if(quest[i+1]==id_user){
                    cout<<"Id the person send the question :"<<quest[i]<<endl <<"question  :"<<quest[i+2]<<endl;
                   // counter++;
                   counter=1;
                   break;
                  }

                  quest.clear();
                   }
                   if(counter==0){
                    cout<<"There is no questiion from id  \n"<<id_user<<endl;
                   }


        save3.close();



}
bool showquestion2(string&id_user){
 int count=0;
 fstream save10("question.txt",ios::in);
        if(save10.is_open()){
            string line;

            while(getline(save10,line)){

                quest.push_back(line);

                   }
                //save_u.close();
            }

bool counter=0;

        for(int i=0;i<quest.size();i+=3){

                  if(quest[i+1]==id_user){

                   counter=1;
                   break;
                  }

                   }
                   quest.clear();
                     save10.close();
                                   if(counter==0){
                                    return false;
                   }
                   return true;
}
};
class answer{
int to_id;
int id_authour;
string answera;
vector<string>show_ans;
public:
    answer(){
    to_id=0;
    id_authour=0;
    answera="";

    }
    answer(int to_id,int id_authour,string answera){
    this->to_id=to_id;
    this->id_authour=id_authour;
    this->answera=answera;

    }
    void saveanswer(answer an){
      fstream saveans("save_answer1.txt",ios::app);
    if (saveans.is_open()){
        saveans<<an.to_id<<endl;
        saveans<<an.id_authour<<endl;
        saveans<<an.answera<<endl;
         saveans.close();
    }
    }
    void showanswer(string &id ){
    fstream saveans("save_answer1.txt",ios::in);
    if(saveans.is_open()){

        string line;
        while(getline(saveans,line)){
            show_ans.push_back(line);
        }
    }
    saveans.close();

    int count=1;
    for(int i=0;i<show_ans.size();i+=3){
            if(show_ans[i]==id)
        cout<<count<<"-"<<"the answer from :"<<show_ans[i+1]<<","<<"The naswer is :"<<show_ans[i+2]<<endl;
        count++;
    }
    show_ans.clear();

    }


void feed(){           //show all answer int the system;
fstream saveans2("save_answer1.txt",ios::in);
    if(saveans2.is_open()){

        string line;
        while(getline(saveans2,line)){
            show_ans.push_back(line);
        }
    }
    saveans2.close();
int j=1;
for(int i=0;i<show_ans.size();i++){
    cout<<j<<"-"<<"this answer to id"<<show_ans[i]<<","<<"from id: "<<show_ans[i+1]<<","<<"answer is :"<<show_ans[i+2]<<endl;
    j++;

}
show_ans.clear();

}

};
void menu( ){
cout<<"1-Print questions that are send to me\n";
cout<<"2-Print questions that are send by me\n";
cout<<"3-Ask question\n";
cout<<"4-answer Question\n";
cout<<"5-List system user\n";
cout<<"6-feed \n";
cout<<"7-log out\n";
}

int main()
{
  cout<<"choose number form 1,2 \n";
  cout<<"1-sign up\n";
  cout<<"2-login \n";
  int gor;
  cin>>gor;

  if(gor==1){
        User u;question q;answer a;
    while(true){
        string name;
        while(true){

            string name2;
            cin.ignore();
            cout<<"Enter your name,please\n";
            getline(cin,name2);
            fstream myfile2;
        myfile2.open("read_file.txt", ios::in);
       bool flag=0;
        if(myfile2.is_open()){
                string line;
            while(getline(myfile2,line)){
                if(line==name2){
                cout<<"these user name is exist,please enter other name\n";
                flag=1;
                //break;
            }
            }

            myfile2.close();
        }
            if(flag==1){
            continue;
            }
            else{
                    name=name2;
            break;

            }

        }
        int id;
while (true){



            cin.ignore();
            cout<<"Enter your ID,please\n";
            cin>>id;
            fstream myfile3;
        myfile3.open("read_file.txt", ios::in);
       bool f=0;
       string id2=to_string(id);
        if(myfile3.is_open()){
                string line;
            while(getline(myfile3,line)){
                if(line==id2){
                cout<<"these Id  is exist,please enter other name\n";
                f=1;
                //break;
            }
            }

            myfile3.close();
        }
            if(f==1){
            continue;
            }
            else{

            break;

            }




}

        string password;
        cout<< "please,Enter your password\n";
        cin.ignore();
        getline(cin,password);

        u=User(name,id,password);
        u.saveUser(u);
        menu();
        while(true){
        cout<<"Choose number from 1-7\n";
        int gor2;
        cin>>gor2;
        if(gor2==1){
              int k=u.id;
              string s=to_string(k);
                //save_u.close();
      q.printquestiontome(s);
        }else if (gor2==2){

int k=u.id;
              string s=to_string(k);
               q.printquestionfromme(s);
        }else if (gor2==3){
        cout<<"Ask the Question\n";

        int id_to;
        cout<<"Please ,Enter id the person that you send to him the question\n";
        cin.ignore();
        cin>>id_to;
        string quest;
        cout<<"Please ,enter the question\n";
        cin.ignore();
        getline(cin,quest);
        q=question(u.id,id_to,quest);
        q.saveques(q);

        }
        else if (gor2==4){
      int id_to;
    cout<<"Enter id for person you want to answer \n";
    cin>>id_to;
    int k=id_to;
              string s=to_string(u.id);
    q.showquestion(s);
    if(q.showquestion2(s)==false){
        cout<< "There is no answer \n";
    }else{
        cout<<"enter id";

    string ans;
    cout<<"the answer is : "<<endl;
    cin.ignore();
    getline(cin,ans);
    a=answer(u.id,id_to,ans);
    a.saveanswer(a);
    }

        } else if(gor2==5){
        u.Show_user();

        }else if(gor2==6){
        a.feed();

        }



        else if(gor2==7){
        return 0;}else{
        cout<<"If you want to continue enter 1 else enter 0\n";
        int ch;
        cin>>ch;
        if(ch==1){
            continue;
        }else{
        break;}


        }
        cout<<"If you want to continue enter 1 else enter 0\n";
        int ch2;
        cin>>ch2;
        if(ch2==1){
            continue;
        }else{
        break;}
    }
    break;

  }
  }
else if (gor==2){
        User u;question q;answer a;
    while(true){


            string name;

            cout<<"Enter your name,please\n";
            cin.ignore();
            getline(cin,name);

int id ;
cout<<"Enter your id\n";
cin>>id;


        string password;
        cout<< "please,Enter your password\n";
        cin.ignore();
        getline(cin,password);

        u=User(name,id,password);
        u.saveUser(u);
        menu();
        while(true){
        cout<<"Choose number from 1-7\n";
        int gor2;
        cin>>gor2;
        if(gor2==1){

                //save_u.close();
                int k=u.id;
              string s=to_string(k);
            q.printquestiontome(s);
        }else if (gor2==2){

                    int k=u.id;
              string s=to_string(k);
               q.printquestionfromme(s);
        }else if (gor2==3){
        cout<<"Ask the Question\n";

        int id_to;
        cout<<"Please ,Enter id the person that you send to him the question\n";
        cin.ignore();
       cin>>id_to;
        string quest;
        cout<<"Please ,enter the question\n";
        cin.ignore();
        getline(cin,quest);
        q=question(u.id,id_to,quest);
        q.saveques(q);

        }else if (gor2==4){
        int id_to;
    cout<<"Enter id for person you want to answer \n";
    cin>>id_to;
    cin.ignore();
    //int k=id;
              string s=to_string(u.id);
    q.showquestion(s);
    if(q.showquestion2(s)==false){
        cout<< "There is no answer \n";
    }else{
    string ans;
    cout<<"the answer is : "<<endl;
    cin.ignore();
    getline(cin,ans);
    a=answer(u.id,id_to,ans);
    a.saveanswer(a);
    }

        } else if(gor2==5){
        u.Show_user();

        }else if(gor2==6){
        a.feed();

        }



        else if(gor2==7){
        return 0;}else{
        cout<<"If you want to continue enter 1 else enter 0\n";
        int ch;
        cin>>ch;
        if(ch==1){
            continue;
        }else{
        break;}

        }
        cout<<"If you want to continue enter 1 else enter 0\n";
        int ch2;
        cin>>ch2;
        if(ch2==1){
            continue;
        }else{
        break;}
    }
break;
  }

}

return 0;

}
