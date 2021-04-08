
string static_standings = INITIAL_STANDING_VALUES;
int max_standing = INITIAL_STANDING_VALUES[x];  // write a way to find this max value

Class Faction{

    string name;
    int faction_value;
    string standing;

    Change_Faction( string faction_name int faction_adjustment){
        // adjust the faction value of named faction
        for Faction faction_name{
            new_faction_value = (faction_value + faction_adjustment);
        }
        Faction faction_name faction_value=new_faction_value;
    }
    Check_Standing( string faction_name ){
        for Faction faction_name{
            if standing < max_standing{
                // make sure they dont exceed max standing
                if faction_value > 99{
                    Change_Standing(faction_name, 1);
                    faction_value = 0;

                }
                // fix standing if too high
                else{
                    faction_value = 99;
                }
            }
            if faction_value < 0{
                // make sure they do not go below lowest standing
                if standing > 0{
                    Change_Standing(faction_name, -1);
                    faction_value = 99;
                }
                // fix standing if too low
                else{
                    faction_value = 0;
                }
            }
        }
    }
    Change_Standing( string faction_name int modifier){
        int current = int static_standings[faction_name.standing];
        int new_standing = static_standings[current+modifier];
        return new_standing;
    }

    Setup_Faction{
        // get names from ref_id (currently as this is isolated program),
        // set each to its starting value, and create a standing based
        // on that value
    }
    
}


