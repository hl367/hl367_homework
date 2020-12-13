
#pragma once		
#include "ofMain.h"		
#include "ofxRaycaster.h"

class fireray {

public:		

	fireray();
						

    void update( ofVec2f directions);
	void draw(int x, int y);
	void changeangles(float x);
	void changeanglee(ofVec2f directions);


	ofVec2f currentposition;
	ofxraycaster::Ray2D raze;
	glm::vec2 line1A = glm::vec2(0, 0);
	glm::vec2 line1B = glm::vec2(400, 0);
	glm::vec2 line2A = glm::vec2(0, 0);
	glm::vec2 line2B = glm::vec2(0, 400);
	glm::vec2 line3A = glm::vec2(0, 400);
	glm::vec2 line3B = glm::vec2(400, 400);
	glm::vec2 line4A = glm::vec2(400, 400);
	glm::vec2 line4B = glm::vec2(400, 0);

	/*ofFloatColor col1 = ofFloatColor(ofColor(246, 233, 101));
	ofFloatColor col2 = ofFloatColor(ofColor(85, 255, 60));
	ofFloatColor col3 = ofFloatColor(ofColor(20, 164, 204));
	ofFloatColor col4 = ofFloatColor(ofColor(180, 0, 131));
	ofFloatColor col5 = ofFloatColor(ofColor(0, 0, 0));*/

	//ofVec2f a1 = ofVec2f(1, 0);

	ofVec2f degrees;
	ofVec2f a;
	bool hit;
	float distances1;
	float distances2;
	float distances3;
	float distances4;
	float b, c;
};