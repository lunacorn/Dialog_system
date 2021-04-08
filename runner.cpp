// runner.cpp
// Attempt at a dialog
// testing application
// so that the dialog functions
// may be used here and beyond
// Juna Rachelle 2021

#include "headers/*.h"

// Variables for simply testing dialog features
// some of these will want to be reused
// in future applications

int DIALOG_LINE_MAX = 12; // you will want to set this in any applications
string OPENING_REF_ID = "0001main_quest"; //these are obtained from lua script. needed to run dialog
string INITIAL_STANDING_VALUES = [{"hated":10000},{"feuding":7500},{"disliked":4000},{"neutral":200},{"liked":4000},{"loved":7500},{"honored":10000}];
// the above line though important, may depending on game be defined in a larger
// future set of functions

// these are simple handling  definitions
// for the test application
runner_standing = "neutral";
runing_fac_val = 50;
int ACTIVE = 1;
int ERROR = -1;
int INACTIVE = 0;
// once finished adjust this value
// in the dialog code to be
// not this bad and ureadable
int QUEST_COMPLETE = -3;


void int main {
    
    Lua_Start();
    string MY_REF_ID = OPENING_REF_ID;
    int choice = ACTIVE;
    while choice == ACTIVE {
        int is_choice = 0;
        section = Dialog::Get_Dialog(MY_REF_ID);
        Put_Screen(section[1] section[2][0] section[2][1]);
        is_choice = Dialog::Get_Choice(section[2][0]);
        if is_choice == QUEST_COMPLETE{
            int is_choice = 0;
            if  runner_standing != "neutral"{
                if /*point to the next quest value*/ == NULL{
                    MY_REF_ID = /*point to quest 2*/
                }
                MY_REF_ID = // assign the new values for each section OPENING_REF_ID
                if MY_REF_ID="quit"{
                    cout << "everything worked as desired..."
                    return 0;
                }

            }
        }
    }
    if choice == INACTIVE {
        return 0;
    }
    else choice = ERROR;
    if choice == ERROR {
        cout << "I have such bad error handling currently";
        return 1;
    }
    }


}
// puts the output on screen
// and displays choices

Put_Screen (string d_output int option string option_data){
    cout << d_output << "\n";
    int option_number = 0;
    for option{
        cout option_number << " : " << option_data[option] << "\n";
        option_number++;
    }
    return 0;
}

Get_Choice (int max_possible){
    int d_input;
    cin >> d_input;
    if int(d_input){
        if d_input >-1{
            if d_input =< max_possible){
            return d_input;
            }
        }
    }
    cout << "invalid input";
    return -1;
}

// section[2]
// will have to be broken into [[choice number"int"][faction change value"int value +/-][is quest complete"int 0 or 1"]]