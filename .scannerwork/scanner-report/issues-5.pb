S
cxxMissingNewLineAtEndOfFile'Add a new line at the end of this file. 2 u
cxxFunctionNameVRename function "neverCalled" to match the regular expression ^[a-z_][a-z0-9_]{2,30}$. 2 v
cxxFunctionNameWRename function "divideByZero" to match the regular expression ^[a-z_][a-z0-9_]{2,30}$. 2 C
cxx
FileHeader&Add or update the header of this file. 2 w
cxxFunctionNameXRename function "buggyFunction" to match the regular expression ^[a-z_][a-z0-9_]{2,30}$. 2

 ‘
cppcheckarrayIndexOutOfBoundsConduEither the condition 'x==1000' is redundant or the array 'buf[10]' is accessed at index 1000, which is out of bounds. 2 :'
% Array index out of bounds:@
> 2Assuming that condition 'x==1000' is not redundantT
cppcheckvariableScope/The scope of the variable 'buf' can be reduced. 2 _
cppcheckunreadVariable9Variable 'buf[x]' is assigned a value that is never used. 2 @
cppcheckunusedVariableUnused variable: neverUsed 2 O
cppcheckunusedFunction)The function 'neverCalled' is never used. 2 