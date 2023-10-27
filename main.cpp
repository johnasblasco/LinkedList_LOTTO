#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;


struct node{
    string name;
    int numOne,numTwo;
    node* next;
};
node* head = NULL;
int OneDraw,TwoDraw,ctr=0;

string about(){
    cout << endl;
    cout << "                                  _______________________________________________" << endl;
    cout << "                                 /                                              /|" << endl;
    cout << "                                /______________________________________________/ |" << endl;
    cout << "                               |                                              |  |" << endl;
    cout << "                               |    ______________________________________    |  |" << endl;
    cout << "                               |   |                                      |   |  |" << endl;
    cout << "                               |   |                                      |   |  |" << endl;
    cout << "                               |   |     [2/12] LOTTO SYSTEM GAME         |   |  |" << endl;
    cout << "                               |   |                                      |   |  |" << endl;
    cout << "                               |   |         the rules are simple         |   |  |" << endl;
    cout << "                               |   | you need to draw two numbers between |   |  |" << endl;
    cout << "                               |   |            1 to 12 numbers.          |   |  |" << endl;
    cout << "                               |   | You can buy many tickets as you want |   |  |" << endl;
    cout << "                               |   |and you may see your tickets from the |   |  |" << endl;
    cout << "                               |   |view tickets. if you have no question |   |  |" << endl;
    cout << "                               |   |  then proceed and click [y].         |   |  |" << endl;
    cout << "                               |   |                                      |   |  |" << endl;
    cout << "                               |   |______________________________________|   |  /" << endl;
    cout << "                               |                                              | /" << endl;
    cout << "                               |______________________________________________|/" << endl;
    cout << "                                                |____________|               " << endl;
    cout << "                                                |            |               " << endl;
    cout << "                                                  Option : ";
    string option;
    cin >>option;
    system("cls");
    return option;
}
void main_menu(){
    cout << endl;
    cout << "                                  _______________________________________________ " << endl;
    cout << "                                 /                                              /|" << endl;
    cout << "                                /______________________________________________/ |" << endl;
    cout << "                               |                                              |  |" << endl;
    cout << "                               |    ______________________________________    |  |" << endl;
    cout << "                               |   |                                      |   |  |" << endl;
    cout << "                               |   |   [2/12] LOTTO SYSTEM GAME           |   |  |" << endl;
    cout << "                               |   |                                      |   |  |" << endl;
    cout << "                               |   |           [1]BUY TICKET              |   |  |" << endl;
    cout << "                               |   |           [2]VIEW TICKET             |   |  |" << endl;
    cout << "                               |   |           [3]UPDATE TICKET           |   |  |" << endl;
    cout << "                               |   |           [4]DELETE TICKET           |   |  |" << endl;
    cout << "                               |   |                                      |   |  |" << endl;
    cout << "                               |   | [PROCEED TO THE LOTTO DRAW SECTION]  |   |  |" << endl;
    cout << "                               |   |           [Y] DRAW LOTTO             |   |  |" << endl;
    cout << "                               |   |           [N] EXIT                   |   |  |" << endl;
    cout << "                               |   |                                      |   |  |" << endl;
    cout << "                               |   |______________________________________|   |  /" << endl;
    cout << "                               |                                              | /" << endl;
    cout << "                               |______________________________________________|/" << endl;
    cout << "                                                |____________|               " << endl;
    cout << "                                                |            |               " << endl;

}
void buy_ticket(){
    node* newNode = new node;
    newNode->next = NULL;
    string Name;
    int numone,numtwo;
    cout << endl;
    cout << "                                                    BUY TICKET HERE                " << endl;
    cout << "                               --------------------------------------------------- " << endl;
    cout << "                                                                                   " << endl;
    cout << "                                                   ENTER YOUR NAME     : ";
    cin >> Name;
    newNode->name = Name;
    cout << "                                                                                   " << endl;
    cout << "                                                   ENTER FIRST NUMBER  : ";
    cin >> numone;
    newNode->numOne = numone;
    cout << "                                                   ENTER SECOND NUMBER : ";
    cin >> numtwo;
    newNode->numTwo = numtwo;

    if(numone <= 12 && numtwo <= 12 && numone != 0 && numtwo != 0){
        if(head == NULL) {
           head = newNode;
        }
        else{
            node* headClone = head;
            while(headClone->next != NULL){
                headClone = headClone->next;
            }
            headClone->next = newNode;
        }
    ctr++;
    }
    else {
        system("cls");
        cout << "                               --------------------------------------------------- " << endl;
        cout << "                            YOUR TICKET WILL BURN BECAUSE YOU DID NOT FOLLOW THE RULES" << endl;
        cout << "                               --------------------------------------------------- " << endl;
        cout << "                                                                                   " << endl;
        system("pause > 0");
        system("pause");
    }
}
void view_ticket(){

    int cnt = 1;
    node* temp = head;
    while(temp != NULL){
        cout << endl;
        cout << "-----------------" << endl;
        cout << "#ticket no. " << cnt << endl;
        cout << "name   : "  << temp->name << endl;
        cout << "number : " << "[" << temp->numOne <<", " << temp->numTwo << "]" << endl;
        cout <<"-----------------" << endl;
        temp = temp->next;
        ++cnt;
    }
    system("pause > 0");
    system("pause");
}
void update_ticket(){
    cout << "                                                    UPDATE TICKET                  " << endl;
    cout << "                               --------------------------------------------------- " << endl;
    cout << "                                                                                   " << endl;
    cout << "                                               SELECT TICKET NO : ";
    int n;
    cin >> n;

    //select ticket
    if(n <= ctr && n > 0){
        node* temp = head;
        for(int i = 1; i < n; i++){
            temp = temp->next;
        }

        cout << endl;
        cout << "                                               #TICKET NO. " << n << endl;
        cout << "                                                NAME   : "  << temp->name << endl;
        cout << "                                                NUMBER : " << "[" << temp->numOne <<", " << temp->numTwo << "]" << endl;
        system("pause > 0");
        system("cls");
    //update yung ticket

        string Name;
        int numone,numtwo;
        cout << "                                                    UPDATE TICKET                  " << endl;
        cout << "                               --------------------------------------------------- " << endl;
        cout << "                                                                                   " << endl;
        cout << "                                                   ENTER YOUR NAME     : ";
        cin >> Name;

        cout << "                                                                                   " << endl;
        cout << "                                                   ENTER FIRST NUMBER  : ";
        cin >> numone;

        cout << "                                                   ENTER SECOND NUMBER : ";
        cin >> numtwo;

        if(numone <= 12 && numtwo <= 12 && numone >= 1 && numtwo >= 1){
            cout << "                                          DO YOU WANT TO UPDATE YOUR TICKET [Y/N] : ";

            string choice;
            cin >> choice;

            if(choice == "y" || choice == "Y"){
                temp->name = Name;
                temp->numOne = numone;
                temp->numTwo = numtwo;
                system("pause > 0");
                system("cls");
                cout << "\n\n\n" << "                                                   SUCCESSFULLY UPDATE" << endl;
            }
            else system("pause > 0");
        }
        else {
        system("cls");
            cout << "                               --------------------------------------------------- " << endl;
            cout << "                            YOUR TICKET WILL BURN BECAUSE YOU DID NOT FOLLOW THE RULES" << endl;
            cout << "                               --------------------------------------------------- " << endl;
            cout << "                                                                                   " << endl;
            system("pause > 0");
        }

    }
    else {
            system("cls");
            cout << endl;
            cout << "                                                    NO TICKET FOUND                " << endl;
            cout << "                               --------------------------------------------------- " << endl;
            system("pause > 0");
    }
        system("pause");
}
void draw_ticket(){
    srand( time(NULL) );
    OneDraw = rand() % 12 + 1;
    TwoDraw = rand() % 12 + 1;
    while(head == NULL){
        cout << "                                                   NO TICKET DETECT                 " << endl;
        cout << "                               ---------------------------------------------------  " << endl;
        cout << "                                                                                    " << endl;
        system("pause > 0");
        break;
    }

    if(OneDraw < 10 && TwoDraw < 10){
        cout << endl;
        cout << "                                  _______________________________________________ " << endl;
        cout << "                                 /                                              /|" << endl;
        cout << "                                /______________________________________________/ |" << endl;
        cout << "                               |                                              |  |" << endl;
        cout << "                               |    ______________________________________    |  |" << endl;
        cout << "                               |   |                                      |   |  |" << endl;
        cout << "                               |   |      LOTTO SYSTEM GAME RESULT        |   |  |" << endl;
        cout << "                               |   |                                      |   |  |" << endl;
        cout << "                               |   |              [" << OneDraw << ", " << TwoDraw << "]   " <<"               |   |  |" << endl;
        cout << "                               |   |                OR                    |   |  |" << endl;
        cout << "                               |   |              [" << TwoDraw << ", " << OneDraw << "]   " <<"               |   |  |" << endl;
        cout << "                               |   |                                      |   |  |" << endl;
        cout << "                               |   |                                      |   |  |" << endl;
        cout << "                               |   |        [Y] SEE LUCKY WINNERS         |   |  |" << endl;
        cout << "                               |   |                                      |   |  |" << endl;
        cout << "                               |   |                                      |   |  |" << endl;
        cout << "                               |   |             [ANY] EXIT               |   |  |" << endl;
        cout << "                               |   |______________________________________|   |  /" << endl;
        cout << "                               |                                              | /" << endl;
        cout << "                               |______________________________________________|/" << endl;
        cout << "                                                |____________|               " << endl;
        cout << "                                                |            |               " << endl;
    }

    else if(OneDraw < 10 && TwoDraw > 9 || OneDraw > 9 && TwoDraw < 10){
        cout << endl;
        cout << "                                  _______________________________________________ " << endl;
        cout << "                                 /                                              /|" << endl;
        cout << "                                /______________________________________________/ |" << endl;
        cout << "                               |                                              |  |" << endl;
        cout << "                               |    ______________________________________    |  |" << endl;
        cout << "                               |   |                                      |   |  |" << endl;
        cout << "                               |   |      LOTTO SYSTEM GAME RESULT        |   |  |" << endl;
        cout << "                               |   |                                      |   |  |" << endl;
        cout << "                               |   |              [" << OneDraw << ", " << TwoDraw << "]    " <<"             |   |  |" << endl;
        cout << "                               |   |                OR                    |   |  |" << endl;
        cout << "                               |   |              [" << TwoDraw << ", " << OneDraw << "]    " <<"             |   |  |" << endl;
        cout << "                               |   |                                      |   |  |" << endl;
        cout << "                               |   |                                      |   |  |" << endl;
        cout << "                               |   |        [Y] SEE LUCKY WINNERS         |   |  |" << endl;
        cout << "                               |   |                                      |   |  |" << endl;
        cout << "                               |   |                                      |   |  |" << endl;
        cout << "                               |   |             [ANY] EXIT               |   |  |" << endl;
        cout << "                               |   |______________________________________|   |  /" << endl;
        cout << "                               |                                              | /" << endl;
        cout << "                               |______________________________________________|/" << endl;
        cout << "                                                |____________|               " << endl;
        cout << "                                                |            |               " << endl;
    }


    else{
        cout << endl;
        cout << "                                  _______________________________________________ " << endl;
        cout << "                                 /                                              /|" << endl;
        cout << "                                /______________________________________________/ |" << endl;
        cout << "                               |                                              |  |" << endl;
        cout << "                               |    ______________________________________    |  |" << endl;
        cout << "                               |   |                                      |   |  |" << endl;
        cout << "                               |   |      LOTTO SYSTEM GAME RESULT        |   |  |" << endl;
        cout << "                               |   |                                      |   |  |" << endl;
        cout << "                               |   |              [" << OneDraw << ", " << TwoDraw << "]  " <<"              |   |  |" << endl;
        cout << "                               |   |                OR                    |   |  |" << endl;
        cout << "                               |   |              [" << TwoDraw << ", " << OneDraw << "]  " <<"              |   |  |" << endl;
        cout << "                               |   |                                      |   |  |" << endl;
        cout << "                               |   |                                      |   |  |" << endl;
        cout << "                               |   |        [Y] SEE LUCKY WINNERS         |   |  |" << endl;
        cout << "                               |   |                                      |   |  |" << endl;
        cout << "                               |   |                                      |   |  |" << endl;
        cout << "                               |   |             [ANY] EXIT               |   |  |" << endl;
        cout << "                               |   |______________________________________|   |  /" << endl;
        cout << "                               |                                              | /" << endl;
        cout << "                               |______________________________________________|/" << endl;
        cout << "                                                |____________|               " << endl;
        cout << "                                                |            |               " << endl;
    }
}
void lucky_winners(){
    bool winner = false;
    node*temp = head;

    while(true){
        if((temp->numOne == OneDraw || temp->numOne == TwoDraw)&& (temp->numTwo == OneDraw || temp->numTwo == TwoDraw)){
            cout << "                                               THE WINNER OF THE LOTTO             " << endl;
            cout << "                               --------------------------------------------------- " << endl;
            cout << "                                                                                   " << endl;
            cout << "                                                Name   : " << temp->name << endl;
            cout << "                                                Number : " <<"[" << temp->numOne <<", " << temp->numTwo << "] "<<endl;
            winner = true;
            break;
        }
        if(temp->next == NULL) break;
        else temp = temp->next;
    }

    if(winner)system("pause > 0");
    else{
        cout << endl;
        cout << "                                                  NO WINNER FOUND                  " << endl;
        cout << "                               --------------------------------------------------- " << endl;
        system("pause > 0");
    }

}
void delete_ticket(){
    cout << "                                                    DELETE TICKET                  " << endl;
    cout << "                               --------------------------------------------------- " << endl;
    cout << "                                                                                   " << endl;
    cout << "                                               SELECT TICKET NO : ";
    int n;
    cin >> n;


    if(n <= ctr && n > 0){
        node* temp = head;
        for(int i = 1; i < n; i++){
            temp = temp->next;
        }
        cout << endl;
        cout << "                                               #TICKET NO. " << n << endl;
        cout << "                                                NAME   : "  << temp->name << endl;
        cout << "                                                NUMBER : " << "[" << temp->numOne <<", " << temp->numTwo << "]" << endl;
        system("pause > 0");

        cout << "\n" <<"                                    DO YOU WANT TO DELETE YOUR TICKET [Y/N] : ";
        string choice;
        cin >> choice;

        if(choice == "y" || choice == "Y"){

        //DELETE FIRST
        if(n == 1){
                head = head->next;
                system("pause > 0");
                system("cls");
                cout << "\n\n\n" << "                                                   SUCCESSFULLY DELETE" << endl;
            }
            //DELETE MIDDLE
            else if(n < ctr){
                node* del = head;
                for(int i = 1; i < n-1; i++){
                    del = del->next;
                }
                del->next = del->next->next;
                system("pause > 0");
                system("cls");
                cout << "\n\n\n" << "                                                   SUCCESSFULLY DELETE" << endl;
            }
            //DELETE LAST
            else{
                node* del2 = head;
                while(del2->next->next!=NULL){
                    del2 = temp->next;
                }
                del2->next = NULL;
                system("pause > 0");
                system("cls");
                cout << "\n\n\n" << "                                                   SUCCESSFULLY DELETE" << endl;
            }
        }

        system("pause");
        ctr--;
    }
    else {  system("cls");
        cout << endl;
        cout << "                                                    NO TICKET FOUND                " << endl;
        cout << "                               --------------------------------------------------- " << endl;
        system("pause > 0");
    }
}

int main() {
    while(about() != "y"){
        about();
    }
    //MAIN MENU
    do{
        system("cls");
        main_menu();
        cout << "                                                  Option : ";
        string option;
        cin >>option;
        system("cls");
        // GAME SECTION
        if(option == "n" || option == "N") break;
        else if(option == "1") buy_ticket();
        else if(option == "2") view_ticket();
        else if(option == "3") update_ticket();
        else if(option == "4") delete_ticket();

        // GAME RESULT
        else if(option == "y" || option == "Y") {
                draw_ticket();
                cout << "                                                  Option : ";
                string option1;
                cin >>option1;
                system("cls");
                // GAME DRAW TICKET SECTION

                if(option1 == "y" || option1 == "Y") lucky_winners();
                system("pause");

        }

        }while(true);

    return 0;
}