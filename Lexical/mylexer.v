#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 13 of your 30 day trial period.
# 
# This file was produced by an UNREGISTERED COPY of Parser Generator. It is
# for evaluation purposes only. If you continue to use Parser Generator 30
# days after installation then you are required to purchase a license. For
# more information see the online help or go to the Bumble-Bee Software
# homepage at:
# 
# http://www.bumblebeesoftware.com
# 
# This notice must remain present in the file. It cannot be removed.
#############################################################################

#############################################################################
# mylexer.v
# Lex verbose file generated from mylexer.l.
# 
# Date: 05/17/18
# Time: 09:15:38
# 
# ALex Version: 2.07
#############################################################################


#############################################################################
# Expressions
#############################################################################

    1  \"(\\.|[^\"])*\"

    2  \"(\\.|[^\"])*[\r\n]

    3  "/*"([^\*]|(\*)*[^\*/])*(\*)*"*/"

    4  \/\/[^\n]*

    5  '.'

    6  '\\.'

    7  '\\[0-7]([0-7][0-7]?)?'

    8  '\\[xX][0-9a-fA-F]([0-9a-fA-F][0-9a-fA-F]?)?'

    9  0[0-7]*[UuLl]?

   10  0[xX][0-9a-fA-F]+[UuLl]?

   11  [1-9][0-9]*[UuLl]?

   12  ([1-9][0-9]*|[0-9]+\.[0-9]*|[0-9]*\.[0-9]+)(eE][-+]?[0-9]+)?[fF]?

   13  "("

   14  ")"

   15  "{"

   16  "}"

   17  "["

   18  "]"

   19  ("->"|".")

   20  ("++")|("--")

   21  [/%]

   22  [~!]

   23  \<\<|\>\>

   24  [<>]=?

   25  [! =]=

   26  [-+*/%&|\^]=

   27  (\<\<|\>\>)=

   28  "*"

   29  "+"

   30  "-"

   31  "="

   32  "&"

   33  "^"

   34  "|"

   35  "&&"

   36  "||"

   37  "?"

   38  ":"

   39  ","

   40  ";"

   41  [_A-Za-z][_A-Za-z0-9]*

   42  "#"

   43  [\t\n\040]+

   44  .


#############################################################################
# States
#############################################################################

state 1
	INITIAL

	0x00 - 0x08 (9)    goto 3
	0x09               goto 4
	0x0a               goto 4
	0x0b - 0x1f (21)   goto 3
	0x20               goto 5
	0x21               goto 6
	0x22               goto 7
	0x23               goto 8
	0x24               goto 3
	0x25               goto 9
	0x26               goto 10
	0x27               goto 11
	0x28               goto 12
	0x29               goto 13
	0x2a               goto 14
	0x2b               goto 15
	0x2c               goto 16
	0x2d               goto 17
	0x2e               goto 18
	0x2f               goto 19
	0x30               goto 20
	0x31 - 0x39 (9)    goto 21
	0x3a               goto 22
	0x3b               goto 23
	0x3c               goto 24
	0x3d               goto 25
	0x3e               goto 26
	0x3f               goto 27
	0x40               goto 3
	0x41 - 0x5a (26)   goto 28
	0x5b               goto 29
	0x5c               goto 3
	0x5d               goto 30
	0x5e               goto 31
	0x5f               goto 28
	0x60               goto 3
	0x61 - 0x7a (26)   goto 28
	0x7b               goto 32
	0x7c               goto 33
	0x7d               goto 34
	0x7e               goto 35
	0x7f - 0xff (129)  goto 3


state 2
	^INITIAL

	0x00 - 0x08 (9)    goto 3
	0x09               goto 4
	0x0a               goto 4
	0x0b - 0x1f (21)   goto 3
	0x20               goto 5
	0x21               goto 6
	0x22               goto 7
	0x23               goto 8
	0x24               goto 3
	0x25               goto 9
	0x26               goto 10
	0x27               goto 11
	0x28               goto 12
	0x29               goto 13
	0x2a               goto 14
	0x2b               goto 15
	0x2c               goto 16
	0x2d               goto 17
	0x2e               goto 18
	0x2f               goto 19
	0x30               goto 20
	0x31 - 0x39 (9)    goto 21
	0x3a               goto 22
	0x3b               goto 23
	0x3c               goto 24
	0x3d               goto 25
	0x3e               goto 26
	0x3f               goto 27
	0x40               goto 3
	0x41 - 0x5a (26)   goto 28
	0x5b               goto 29
	0x5c               goto 3
	0x5d               goto 30
	0x5e               goto 31
	0x5f               goto 28
	0x60               goto 3
	0x61 - 0x7a (26)   goto 28
	0x7b               goto 32
	0x7c               goto 33
	0x7d               goto 34
	0x7e               goto 35
	0x7f - 0xff (129)  goto 3


state 3
	match 44


state 4
	0x09 - 0x0a (2)    goto 4
	0x20               goto 4

	match 43


state 5
	0x09 - 0x0a (2)    goto 4
	0x20               goto 4
	0x3d               goto 36

	match 43


state 6
	0x3d               goto 36

	match 22


state 7
	0x00 - 0x09 (10)   goto 37
	0x0a               goto 38
	0x0b - 0x0c (2)    goto 37
	0x0d               goto 38
	0x0e - 0x21 (20)   goto 37
	0x22               goto 39
	0x23 - 0x5b (57)   goto 37
	0x5c               goto 40
	0x5d - 0xff (163)  goto 37

	match 44


state 8
	match 42


state 9
	0x3d               goto 41

	match 21


state 10
	0x26               goto 42
	0x3d               goto 41

	match 32


state 11
	0x00 - 0x09 (10)   goto 43
	0x0b - 0x5b (81)   goto 43
	0x5c               goto 44
	0x5d - 0xff (163)  goto 43

	match 44


state 12
	match 13


state 13
	match 14


state 14
	0x3d               goto 41

	match 28


state 15
	0x2b               goto 45
	0x3d               goto 41

	match 29


state 16
	match 39


state 17
	0x2d               goto 45
	0x3d               goto 41
	0x3e               goto 46

	match 30


state 18
	0x30 - 0x39 (10)   goto 47

	match 19


state 19
	0x2a               goto 48
	0x2f               goto 49
	0x3d               goto 41

	match 21


state 20
	0x2e               goto 47
	0x30 - 0x37 (8)    goto 50
	0x38 - 0x39 (2)    goto 51
	0x4c               goto 52
	0x55               goto 52
	0x58               goto 53
	0x6c               goto 52
	0x75               goto 52
	0x78               goto 53

	match 9


state 21
	0x2e               goto 47
	0x30 - 0x39 (10)   goto 21
	0x46               goto 54
	0x4c               goto 55
	0x55               goto 55
	0x65               goto 56
	0x66               goto 54
	0x6c               goto 55
	0x75               goto 55

	match 11


state 22
	match 38


state 23
	match 40


state 24
	0x3c               goto 57
	0x3d               goto 58

	match 24


state 25
	0x3d               goto 36

	match 31


state 26
	0x3d               goto 58
	0x3e               goto 57

	match 24


state 27
	match 37


state 28
	0x30 - 0x39 (10)   goto 28
	0x41 - 0x5a (26)   goto 28
	0x5f               goto 28
	0x61 - 0x7a (26)   goto 28

	match 41


state 29
	match 17


state 30
	match 18


state 31
	0x3d               goto 41

	match 33


state 32
	match 15


state 33
	0x3d               goto 41
	0x7c               goto 59

	match 34


state 34
	match 16


state 35
	match 22


state 36
	match 25


state 37
	0x00 - 0x09 (10)   goto 37
	0x0a               goto 38
	0x0b - 0x0c (2)    goto 37
	0x0d               goto 38
	0x0e - 0x21 (20)   goto 37
	0x22               goto 39
	0x23 - 0x5b (57)   goto 37
	0x5c               goto 40
	0x5d - 0xff (163)  goto 37


state 38
	0x00 - 0x09 (10)   goto 37
	0x0a               goto 38
	0x0b - 0x0c (2)    goto 37
	0x0d               goto 38
	0x0e - 0x21 (20)   goto 37
	0x22               goto 39
	0x23 - 0x5b (57)   goto 37
	0x5c               goto 40
	0x5d - 0xff (163)  goto 37

	match 2


state 39
	match 1


state 40
	0x00 - 0x09 (10)   goto 37
	0x0a               goto 38
	0x0b - 0x0c (2)    goto 37
	0x0d               goto 38
	0x0e - 0x21 (20)   goto 37
	0x22               goto 60
	0x23 - 0x5b (57)   goto 37
	0x5c               goto 40
	0x5d - 0xff (163)  goto 37


state 41
	match 26


state 42
	match 35


state 43
	0x27               goto 61


state 44
	0x00 - 0x09 (10)   goto 62
	0x0b - 0x26 (28)   goto 62
	0x27               goto 63
	0x28 - 0x2f (8)    goto 62
	0x30 - 0x37 (8)    goto 64
	0x38 - 0x57 (32)   goto 62
	0x58               goto 65
	0x59 - 0x77 (31)   goto 62
	0x78               goto 65
	0x79 - 0xff (135)  goto 62


state 45
	match 20


state 46
	match 19


state 47
	0x30 - 0x39 (10)   goto 47
	0x46               goto 54
	0x65               goto 56
	0x66               goto 54

	match 12


state 48
	0x00 - 0x29 (42)   goto 48
	0x2a               goto 66
	0x2b - 0x2e (4)    goto 48
	0x2f               goto 48
	0x30 - 0xff (208)  goto 48


state 49
	0x00 - 0x09 (10)   goto 49
	0x0b - 0xff (245)  goto 49

	match 4


state 50
	0x2e               goto 47
	0x30 - 0x37 (8)    goto 50
	0x38 - 0x39 (2)    goto 51
	0x4c               goto 52
	0x55               goto 52
	0x6c               goto 52
	0x75               goto 52

	match 9


state 51
	0x2e               goto 47
	0x30 - 0x39 (10)   goto 51


state 52
	match 9


state 53
	0x30 - 0x39 (10)   goto 67
	0x41 - 0x46 (6)    goto 67
	0x61 - 0x66 (6)    goto 67


state 54
	match 12


state 55
	match 11


state 56
	0x45               goto 68


state 57
	0x3d               goto 69

	match 23


state 58
	match 24


state 59
	match 36


state 60
	0x00 - 0x09 (10)   goto 37
	0x0a               goto 38
	0x0b - 0x0c (2)    goto 37
	0x0d               goto 38
	0x0e - 0x21 (20)   goto 37
	0x22               goto 39
	0x23 - 0x5b (57)   goto 37
	0x5c               goto 40
	0x5d - 0xff (163)  goto 37

	match 1


state 61
	match 5


state 62
	0x27               goto 70


state 63
	0x27               goto 70

	match 5


state 64
	0x27               goto 70
	0x30 - 0x37 (8)    goto 71


state 65
	0x27               goto 70
	0x30 - 0x39 (10)   goto 72
	0x41 - 0x46 (6)    goto 72
	0x61 - 0x66 (6)    goto 72


state 66
	0x00 - 0x29 (42)   goto 48
	0x2a               goto 66
	0x2b - 0x2e (4)    goto 48
	0x2f               goto 73
	0x30 - 0xff (208)  goto 48


state 67
	0x30 - 0x39 (10)   goto 67
	0x41 - 0x46 (6)    goto 67
	0x4c               goto 74
	0x55               goto 74
	0x61 - 0x66 (6)    goto 67
	0x6c               goto 74
	0x75               goto 74

	match 10


state 68
	0x5d               goto 75


state 69
	match 27


state 70
	match 6


state 71
	0x27               goto 76
	0x30 - 0x37 (8)    goto 77


state 72
	0x27               goto 78
	0x30 - 0x39 (10)   goto 79
	0x41 - 0x46 (6)    goto 79
	0x61 - 0x66 (6)    goto 79


state 73
	match 3


state 74
	match 10


state 75
	0x2b               goto 80
	0x2d               goto 80
	0x30 - 0x39 (10)   goto 81


state 76
	match 7


state 77
	0x27               goto 76


state 78
	match 8


state 79
	0x27               goto 78
	0x30 - 0x39 (10)   goto 82
	0x41 - 0x46 (6)    goto 82
	0x61 - 0x66 (6)    goto 82


state 80
	0x30 - 0x39 (10)   goto 81


state 81
	0x30 - 0x39 (10)   goto 81
	0x46               goto 54
	0x66               goto 54

	match 12


state 82
	0x27               goto 78


#############################################################################
# Summary
#############################################################################

1 start state(s)
44 expression(s), 82 state(s)


#############################################################################
# End of File
#############################################################################
