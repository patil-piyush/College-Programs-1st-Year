student_scores = {}

def add_student(name,score):
    """add a new student with their score"""
    if name in student_scores:
        print(f"Student {name} already exist. Use pdate_score to update their score.")
    else:
        student_scores[name] = score
        print(f"Added student {name} with score {score}.")

def update_score(name,score):
    """Update the score of existing student"""
    if name in student_scores:
        student_scores[name] = score
        print(f"updated {name}'s score to {score}.")
    else:
        print(f"student {name} does not exist. use add_student to add their first.")

def delete_student(name):
    """delete a student from the dictionary"""
    if name in student_scores:
        del student_scores[name]
        print(f"Deleted student {name}.")
    else:
        print(f"student {name} does not exist")
              
def find_highest_score():
    """find the student with the highest score"""
    if not student_scores:
        print("no student in the record")
        return none;
    
    highest_score_student = max(student_scores, key = student_scores.get)
    highest_score = student_scores[highest_score_student]
    print(f"student with the highest score is {highest_score_student} with a score of {highest_score}.")
    return highest_score_student, highest_score
            
    
add_student("alice", 85)
add_student("bob", 92)
update_score("alice", 88)
delete_student("bob")
find_highest_score()
