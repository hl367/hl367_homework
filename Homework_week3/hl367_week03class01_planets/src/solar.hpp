

#pragma once
#include "ofMain.h"


class solar {
public:
	


	solar();



	//solar(glm::vec2 _sunpos, glm::vec2 _smass);
	//void solar(glm::vec2 _sunpos, glm::vec2 _smass);

	
	void update();
	void draw();
	void gravity();

	
	ofVec2f dir, sungravity, dis;
	ofVec2f vel, sunpos, starpos,acc;

	float smass, starmass , b;

	
/*	float smass;
	float starmass;*/
	float sr;
	float starr;
};