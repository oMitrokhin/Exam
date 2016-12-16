
struct subject{
	string course_name;
	string course_section[];
	float mark;
};

struct student{
	string first_name;
	string second_name;
	string group;
	struct subject student_subject;
};

