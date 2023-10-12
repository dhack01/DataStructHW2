# DataStructHW2
An assignment to help us learn how to use stacks

This programming problem deals with the template-based stack
(Stacktype) implementation, and strings. You must use the provided Stacktype.h
file within the TemplateStackDriver.zip file. Also, be certain to adhere to the
example below in using the standard library string (std::string) as input in lieu of a
character array as input, since we will be testing with the former.
You are to create a modified well-formed parenthetical (WFP) expression checking
function (refer to Section 12 and 14 slides for the original algorithm) that checks if the
input string is a well-formed parenthetical expression, given the following modified
requirements (note these are subtly different from the rules on the slides!):
⚫ A parenthetical expression is an expression consisting of parentheses or
arrow brackets, specifically (, ), [, ], and <, >.
⚫ A well-formed parenthetical expression satisfies two conditions:
1. A closing parenthesis must match the most recent, unmatched opening
parenthesis of the same type.
2. All opening parentheses must have closing parentheses of the same type by
the end of the expression.
⚫ Non-parenthetical characters (even curly braces {, }) are irrelevant.
Your function must be defined with the signature int WFPTagCounts(std::string exp) in
file wfptc.cpp (no header file is necessary for this assignment!) and it must return
the following:
i. the number of arrow-brackets matched if it IS well-formed or ii. -1 if it is not.
Note that we are only actually counting the quantity of arrow-brackets < and > here,
even though we are assessing its quality as a WFP based on (, ), [, ], and <, > chars!
As stated above, the function should return the count of matching arrow brackets (+1 per
<> pair encountered) if the expression is well-formed, and -1 if it is not. In case you are
curious, this problem is closely related to the task of tag counting (e.g. in html contexts).
As alluded to above, you should create a StackType instance of char type and
add/remove parenthetical characters to it until i. a mismatched parenthesis is found or ii.
there are no more elements of the string to test, at which point a non-empty stack
indicates a mismatch, while an empty one indicates a well-formed expression. You are
free to use helper functions. However, all of your code, including the function
WFPTagCounts, must be submitted in the file wfptc.cpp.
Some sample input and output is provided on the next page:
Some sample input and output for reference:
i. The string “[Hello. < How are > you?]” should return 1.
ii. The string “<[(<X>)]>” should return 2.
iii. The string “<><>DiamondsAreForever<><>” should return 4.
iv. The string “(Today is before tomorrow.)” should return 0.
v. The string “(Good evening.” should return -1.
vi. The string “[<]>” should also return -1.
Responses to Problems #1 and #2 should be in .txt or .pdf format. The code for problem 3
should be submitted as a single file (wfptc.cpp).
As before, your files should be submitted to Gradescope. The submissions should open
sometime in early October, so keep an eye on announcements. You will be able to submit
up to 10 times without penalty. In accordance with the related post on Blackboard, make
sure you initialize your variables.
