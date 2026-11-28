typedef struct 
{
    char name[25],surname[25];
} full_name_of_student;

typedef struct
{
    int day, month, year;
} date;

typedef struct Student
{
    full_name_of_student full_name;
    date date_of_birth;
    int ID;
    double GPA;
    char major[40];
    int class;
} Student;

void show_student_item (Student *s, int id, int count);
void edit_student_item (Student s);
void delete_student_item (Student s);
void add_student (Student s);
void welcome();
int wrong_input_number_detector(int n);
int number_of_all_students(Student s);
