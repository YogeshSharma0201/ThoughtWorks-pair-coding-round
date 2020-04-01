#ifndef __Interviewer_H__
#define __Interviewer_H__

#include <bits/stdc++.h>
using namespace std;

#include "Person.h"

class Interviewer: public Person {
public:
	Interviewer(): Person() {
		id = "";
	};
	Interviewer(string id): Person(id) {
		this->id = id;
	}
};

class InterviewersReader {
public:
	static vector<Interviewer*> generateInterviewers() {
		vector<Interviewer*> interviewers;
		int noOfInterviewers;
		cin>>noOfInterviewers;
		for(int i=0; i<noOfInterviewers; i++) {
			string interviewerId;
			cin>>interviewerId;
			interviewers.push_back(new Interviewer(interviewerId));
		}
		return interviewers;
	}
};

#endif
