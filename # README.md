# README.md

Purpose

so the idea of this code section
is it handle output and input
of dialog options


Plan

Testing Method

our main file runner.cpp
will have its own npc name "runner"
start with a faction of 0
and give the dialog choices
to test how well it works
and depending how the
user responds

runner may decide they 
appreciate or dislike
interacting with the user
and respond accordingly

Code Breakdown

runner will simply initiate the files
and set up global variables
make sure lua is ready to recieve
and give the starting dialog
which it will receive from the
associated lua file

then it will call a Get_Dialog
and begin its routine
potentially updating
its faction if it is not
recieveing a 0 or no_change
response.

user input with numbers 1,2,3,4 etc
will be passed to the program
to determine how to handle
further dialog

Long Term Goal

this should be flexible enough
to be used standalone, as well
as integrated into text, 2D and
3D games in the future. This
means it is important
for the UI of said application
to define how many characters
and allowed per line, and as
such the ability to break
the output up by n characters
will be integrated into this