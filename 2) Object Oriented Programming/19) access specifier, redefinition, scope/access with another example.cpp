#include<iostream>
#include<string>

using namespace std;



class GradedActivity
{
	int totalMarks;
	int obtainedMarks;
public:
	void setToatlMarks(int tm)
	{
		totalMarks=tm;
	}
	void setObtainedMarks(int om)
	{
		obtainedMarks=om;
	}
	int getToatlMarks()
	{
		return totalMarks;
	}
	int getObtainedMarks()
	{
		return obtainedMarks;
	}
};

class FinalExam: private GradedActivity  //use private to hide functionality
{
	int questionCount;
	int marksEach;
	int correctResponses;
public:
	void setQuestionCount(int qc)
	{
		questionCount=qc;
	}
	void setMarksEach(int me)
	{
		marksEach=me;
	}
	void setCorrectResponses(int cr)
	{
		correctResponses=cr;
	}
	int getToatlMarks()
	{
		setToatlMarks(questionCount*marksEach);
		return questionCount*marksEach;
	}
	int getObtainedMarks()
	{
		setObtainedMarks(correctResponses*marksEach);
		return correctResponses*marksEach;
	}
};

int main()
{
	FinalExam exam;
	exam.setQuestionCount(30);
	exam.setMarksEach(2);
	exam.setCorrectResponses(18);
	cout<<exam.getObtainedMarks()<<"/"<<exam.getToatlMarks()<<endl;
	return 0;
}
