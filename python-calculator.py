STUDENT_COUNT = 5
student_grades = [0.0] * STUDENT_COUNT  # declare a list (student_grades)

# Accessing individual elements in the list:
for i in range(STUDENT_COUNT):
    student_grades[i] = float(input(f"Enter grade for student {i + 1}: "))

# Print the list of student grades
print("Student Grades:", student_grades)

#add up all the sum of Grades for 5 students
sum_grades = sum(student_grades)

# Calculate the number score
max_number = 500
number_score = (sum_grades / max_number) * 100
#print("Number Score:", number_score) 

grade_count = 5
grade_thresholds = [90, 80, 70, 60, 0]

grades = ["A", "B", "C", "D", "Fail"]

final_grade = ""
for i in range(grade_count):
    if number_score >= grade_thresholds[i]:
        final_grade = grades[i]
        break

print(final_grade)