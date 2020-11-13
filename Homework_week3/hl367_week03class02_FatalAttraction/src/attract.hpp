

#pragma once
#include "ofMain.h"


class attract {
public:
	


	attract();



	//solar(glm::vec2 _sunpos, glm::vec2 _smass);
	//void solar(glm::vec2 _sunpos, glm::vec2 _smass);

	
	void update();
	void draw();
	void attractforce();

	
	ofVec2f dir, attraction, dis, mousepos;
	ofVec2f vel, pos, acc, repuls;
	
	float mass, b, G;

	
/*	float smass;
	float starmass;*/
	float sr;
	float starr;
};