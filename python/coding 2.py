performance=[3,3,3,3,4]
laddo=[0,0,0,0,0]
curr_stud=0
prev_stud=0
next_stud=0

for student in range(len(performance)):
    curr_stud=performance[student]
    curr_stud=0
    try:
        prev_stud=performance[student-1]
        prev_laddo=laddo[student-1]
    except:
        prev_stud=0
    try:
        next_stud=performance[student+1]
    except:
        next_stud=0
        next_laddo=laddo[student-1]
    if(curr_stud<prev_stud ):

        laddo[student]+=1


    