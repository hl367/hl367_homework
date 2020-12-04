#include "snow.h"
#include "box.h"

snow::snow() {

	// random color
	float red = ofRandom(0, 255);
	float green = ofRandom(0, 255);
	float blue = ofRandom(0, 255);
	color = ofColor(red, green, blue);

	snow1.load("snow.png");
	radius = 30;

	

	// random position 
	x = ofRandom(0, ofGetWidth()  - radius);
	y = ofRandom(-400, ofGetHeight() - radius);
	z = ofRandom(0, ofGetWidth() - radius);

	
	dirY = 5;

	 position.x = x;
	 position.y = y;
	 position.z = z;

	 circlesize = 1;
	// yheight = 0;
}

void snow::update(ofVec3f force) {

	
	position += force;

	//bottom
	if (position.y <= 0) {
		position.y = 800;
		yheight += 30;
	}
	

	//left and right
	if (position.x < 0) {
		position.x = 1024;
	}
	if (position.x > 1024) {
		position.x = 0;
	}
	if (position.z < 0) {
		position.z = 1024;
	}
	if (position.z > 1024) {
		position.z = 0;
	}
}


// draw the snow
void snow::draw() {

	ofPushStyle();

	//ofSetColor(color);

	//found this method on https://forum.openframeworks.cc/t/defining-a-rotation-point-for-images/17/4



	ofPolyline polyline;

			ofPushMatrix();
			ofTranslate(position);
			ofRotate(2*ofGetFrameNum(), 0, 2, 0);
			snow1.setAnchorPercent(0.5, 0.5);
			snow1.draw(0,0,0, radius, radius);
			ofPopMatrix();
		
			ofPushMatrix();
			ofTranslate(position);
			ofRotate(2*ofGetFrameNum(), 0, 0, 2);
			snow1.setAnchorPercent(0.5, 0.5);
			snow1.draw(0, 0, 0, radius, radius);
			ofPopMatrix();
	
			ofPushMatrix();
			ofTranslate(position);
			ofRotate(2*ofGetFrameNum(), 2, 0, 0);
			snow1.setAnchorPercent(0.5, 0.5);
			snow1.draw(0, 0, 0, radius, radius);
			ofPopMatrix();

			ofPopStyle();

			polyline.addVertex(ofGetWidth(), ofGetHeight());
			polyline.draw();
			
			
		

		
			


	/*
	snow1.setAnchorPercent(0.5, 0.5);

	ofPushMatrix();
	ofTranslate( -position);//move pivot to centre
	ofRotate(ofGetFrameNum(), 0, 1, 0);//rotate from centre
	ofPushMatrix();
	ofTranslate(position);
	snow1.draw(position, radius, radius);//move back by the centre offset
	ofPopMatrix();
	ofPopMatrix();
	*/


/*
	ofPushStyle();
	ofEnableBlendMode(OF_BLENDMODE_ADD);

	ofPushMatrix();

	snow1.setAnchorPercent(0.5, 0.5);

	ofRotateX(2 * ofGetElapsedTimeMillis());
	snow1.draw(position, radius, radius);

	ofPopMatrix();

	ofPushMatrix();
	snow1.setAnchorPercent(0.5, 0.5);
	snow1.draw(position, radius, radius);
	
	ofPopMatrix();

	ofPushMatrix();
	snow1.setAnchorPercent(0.5, 0.5);
	snow1.draw(position, radius, radius);
	
	ofPopMatrix();
	*/
}


void snow::tower(float x, float y, float z) {
	 
	ofDrawCone( x,y,z, 60, 185);
	
}

void snow::blow() {
	
	wind.x = ofRandom(-200, 200);
	 wind.y = ofRandom(-200, 200);
	wind.z = ofRandom(-200, 200);


	position.x += wind.x;
	position.y += wind.y;
	position.z += wind.z;
}