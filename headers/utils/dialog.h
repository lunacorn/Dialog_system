// dialog.h
// Header File
// Juna Rachelle 2021

#include <string>

using std namespace;

Class Dialog {
    // retrieves from lua file
    // the quest reference , dialog output, responses
    // and their corresponding ids
    Dialog::Get_Dialog( string ref_id string user_see, string user_choice, string choice_ref_id int faction_adj){
        // get variables from lua file
        string lua_ref_id = luascripts.dialog //
        string lua_d_text = lua_ref_id[0];
        string lua_d_choice[] = lua_ref_id[1][1];
        string lua_ref_choice[] = lua_ref_id[1][0];
        string lua_f_change = lua_ref_id[2];
        return lua_ref_id, lua_d_text, lua_d_choice, lua_ref_choice, lua_f_change;
    }

    // store important info on dialog
    // choices to be used in other
    // dialog situations
    Dialog::Check_Choice(){
        for int digits in [/* "faction1", "faction2" */ "larry"]{
        // go through list of affect factions ( just in case program needs it someday )
        Check_Choice_Faction(OPENING_REF_ID, is_choice section[is_choice][2]);
    }
    }
    Dialog::Check_Choice_Faction( string ref_id string faction_name int choice_value){
        // check dictionary values for npc standing


        

    }

    Dialog::Process_Options(){
        // make adjustments to faction
        // and ref_id values such as
        // quest progress, so that next
        // time Get_Dialog is called
        // it knows current progress
    }

    Dialog::Build_Line (string d_test){
    int i    = 0;
    int line = 0;
    string finished_output = [];
    string show_me = "";

        for d_text[i]{
            i++;
            show_me[d_text[i]];
            if i == DIALOG_LINE_MAX{
                show_me[i]="\n";
                i=0;
                finished_output[line] = show_me;
                line++;
                show_me = "";
                }
        }

    }

}

// Get_Dialog retrieves the global info for dialog 
// stored as xpac:zone:npc:quest  or 00103larry17
// using integers for xpac and zone as there are 
// bound to be less than 1000 with less than 100 
// zones in each, and strings for names and int
// for quest numbers as again likely < 100

// Check_Choice will be used to help
// pull up proper ref_id for a quest
// as depending on standing with the 
// npc there may potentially be
// different dialogs or choices