-- lua quest file template/tester 

-- remember format  ref_id = { response = ["output", [{"dialog_option":input value to match within quest}], is_complete, faction adjustment] }
-- any 0 is where quest starts and any -3 ends current dialog

0001main_quest {
    0 =  [ "do you want to test my dialog function", [{"yes":2,"no":1}], nil, nil, nil],
    1 =  [ "Too bad....", [{"q.q":-3}], 1, -100, nil], 
    2 =  [ "You just did... thanks.", [{"you're welcome":-3,"bye":-3}], 1, 1000000, nil],
    },

0002main_quest {
    0 = [ "oh nice, you even checked my faction function", [{":)":-3}], 1, nil, "0003main_quest"],
    1 = [ "I even made you check faction fucntion", [{"quit":-3}], 1, nil, nil]
    },
0003main_quest {
    0 = [ "Thanks, again...", [{"quit":-3}], 1, nil, nil]
}