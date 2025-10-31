//Assignment: The Department of AI&ML has a student's club named 'ARTIMAS'. Students of second and third year of
//department can be granted membership on request. Similarly one may cancel the membership of a club. First node
//is reserved for the president of the club and the last node is reserved for the secretary of the club. Write C++
//program to maintain club member‘s information using singly linked lists. Store student PRN and Name. Write
//functions to: a) Add and delete the members as well as president or even secretary. b) Compute total number of
//members of club c) Display members d) Two linked lists exist for two divisions. Concatenate two lists

#include <iostream>
using namespace std;

class Aimsa{
    public:
    int PRN;
    Aimsa* next;
    Aimsa(int x){
        PRN = x;
    }
};

class Team{
    public:
    Aimsa* President;
    Aimsa* Secretary;
    Team(){
        President = NULL;
        Secretary = NULL;
    }
    Aimsa* addPresident(){
        if(President == NULL){
            cout<<"ENter President PRN: "<<endl;
            int x;
            cin>>x;
            President = new Aimsa(x);
        }
        return President;
    }
    Aimsa* addSecretary(){
        if(Secretary == NULL){
            cout<<"ENter Secretary PRN: "<<endl;
            int x;
            cin>>x;
            Secretary = new Aimsa(x);
        }
        if(President != NULL){
            Aimsa* temp = President;
            while(temp -> next != NULL){
                temp = temp -> next;
            }
            temp -> next = Secretary;
        }
        return Secretary;
    }   
    Aimsa* addMembers(Aimsa* President, Aimsa* Secretary,int prn1){
        Aimsa* member = new Aimsa(prn1);
        Aimsa* temp = President;
        while(temp -> next != Secretary){
            temp = temp -> next;
        }
        member -> next = temp -> next;
        temp -> next = member;
        return President;
    }
    Aimsa* changePresident(Aimsa* &President){
        int prn2;
        cout<<"Enter new President PRN: "<<endl;
        cin>>prn2;
        Aimsa* newPresident = new Aimsa(prn2);
        newPresident -> next = President -> next;
        delete President;
        President = newPresident;
        return President;
    }
    Aimsa* changeSecretary(Aimsa* &Secretary){
        int prn2;
        cout<<"Enter new Secretary PRN: "<<endl;
        cin>>prn2;
        Aimsa* newSecretary = new Aimsa(prn2);
        Aimsa* temp = President;
        while(temp -> next != Secretary){
            temp = temp -> next;
        }
        newSecretary -> next = temp -> next;
        delete Secretary;
        Secretary = newSecretary;
        return Secretary;
    }
    Aimsa* deleteMembers(Aimsa* President, Aimsa* Secretary, int prn){
        if(President -> PRN == prn){
            changePresident(President);
        }
        else if(Secretary -> PRN == prn){
            changeSecretary(Secretary);
        }
        else{
            Aimsa* temp = President;
            Aimsa* prev = NULL;
            while(temp != NULL && temp -> PRN != prn){
                prev = temp;
                temp = temp -> next;
            }
            prev -> next = temp -> next;
            delete temp;
        }
        return President;
    }
    Aimsa* concatenate(Team &t1, Team &t2){
        if(t1.President == NULL){
            t1.President = t2.President;
            t1.Secretary = t2.Secretary;
            return t1.President;
        }
        if(t2.President == NULL){
            return t1.President;
        }
        Aimsa* temp = t1.President;
        while(temp -> next != t1.Secretary){
            temp = temp -> next;
        }
        temp -> next = t2.President;
        t1.Secretary = t2.Secretary;
    }
    void display(){
        Aimsa* temp = President;
        if(President == NULL){
            cout<<"Empty list"<<endl;
            return;
        }
        while(temp != NULL){
            cout<<temp->PRN<<" -> ";
            temp = temp -> next;
        }
        cout<<"NULL"<<endl;
    }
};

int main(){
     Team team;

    // Add President
    team.addPresident();

    // Add Secretary
    team.addSecretary();

    // Add Members
    int numMembers, PRN;
    cout << "Enter number of members: ";
    cin >> numMembers;
    for (int i = 0; i < numMembers; i++) {
        cout << "Enter PRN for member " << i + 1 << ": ";
        cin >> PRN;
        team.addMembers(team.President, team.Secretary, PRN);
    }

    // Display the team
    cout << "Team list:" << endl;
    team.display();

    // Change President
    team.changePresident(team.President);
    cout << "After changing President:" << endl;
    team.display();

    // Change Secretary
    team.changeSecretary(team.Secretary);
    cout << "After changing Secretary:" << endl;
    team.display();

    // Remove a Member
    cout << "Enter PRN to remove: ";
    cin >> PRN;
    team.deleteMembers(team.President, team.Secretary, PRN);
    cout << "After removing a member:" << endl;
    team.display();

    return 0;

}