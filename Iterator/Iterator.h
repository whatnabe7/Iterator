#pragma once
#include <string>
#include <vector>

class Student {
private:
	std::string name;
	int sex; //’j‚Ìq:1  —‚Ìq:2
public:
	Student() : name(""), sex(1) {}
	Student(std::string name, int sex) : name(name), sex(sex){}
public:
	std::string getName() {
		return name;
	}
	int getSex() {
		return sex;
	}
};

class StudentList {
protected:
	std::vector<Student> students;

public:
	StudentList() {}
	StudentList(int studentCount) {
		students.resize(studentCount);
	}

	void add(Student student) {
		students.push_back( student );
	}
	Student getStudentAt(int index) {
		return students[index];
	}
	int getLastNum() {
		return (int)students.size();
	}
};

class Teacher {
protected:
	StudentList studentList;

public:
	virtual void createStudentList() {}
	virtual void callStudents() {}
};

class MyTeacher : public Teacher{
protected:
	StudentList studentList;

public:
	void createStudentList() {
		studentList.add(Student("AAAA", 1));
		studentList.add(Student("bbbb", 2));
		studentList.add(Student("CCCC", 1));
	}
	void callStudents() {
		for (int idx = 0; idx < studentList.getLastNum(); ++idx) {
			auto student = studentList.getStudentAt(idx);
			printf("%s/%d", student.getName().c_str(), student.getSex());
		}
	}
};
