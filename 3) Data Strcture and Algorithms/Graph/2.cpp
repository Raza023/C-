	
	string temp,temp2;
	temp += this->studentID[8];								//considering the id = BITF19A003
	temp += this->studentID[9];
	temp2 += stu.getStudentID()[8];
	temp2 += stu.getStudentID()[9];
	int id1, id2;
	id1 = stoi(temp);
	id2 = stoi(temp2);
	return id1 < id2;
	
	a <<"Student Name: "<< ref.studentName << endl;
	a <<"Student ID: "<< ref.studentID << endl;
	return a;
