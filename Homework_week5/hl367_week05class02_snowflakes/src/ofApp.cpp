#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){


	ofEnableDepthTest();
	ofBackground(0, 0, 255);
	ofSetVerticalSync(true);
	easyCam.setDistance(1000);
	easyCam.setPosition(ofGetWidth() / 2, ofGetHeight() / 2, 2000);

	ofBackground(0);


	 numsnows = 100;


	 force = ofVec3f(0, -1, 0);

	 activate = false;

}

//--------------------------------------------------------------
void ofApp::update(){

	for (int i = 0; i < numsnows; i++) {
		snows[i].circle();
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	

//	mesh.drawVertices();

	
	easyCam.begin();

	for (int i = 0; i < numsnows; i++) {

		snows[i].draw();
		snows[i].update(force);
		//snows[i].circle();
	}

	ofEnableBlendMode(OF_BLENDMODE_ADD);

	
	
	
	


	//std::cout << "value:" << snows[2].position.y << endl;
	//std::cout << "value:" << snows[2].yheight << endl;
	
	ofNoFill();
	
	
	
	
	
	
/*
	//draw boxes
	for (int i = 0; i < numsnows; i++) {
		for (int j = 0; j < 900; j++) {
			snows[i].yheight = boxes[j].boxposition.y;
			if (snows[i].position.y <= snows[i].yheight) {
				boxes[j].boxposition.y += 30;
			}
		}
	}
	
	for (int i = 0; i < numsnows; i++) {
		for (int j = 0; j < 900; j++)
			if (snows[i].position.y <= snows[i].yheight) {
				boxes[j].update(snows[i].position.x, snows[i].position.z);
				
		}
	}
	for (int j = 0; j < 900; j++) {
		boxes[j].draw();
	}
	*/

	
	ofVec3f boxposition;

	

	
	for (int i = 0; i < numsnows; i++) {
		
		boxposition.x = snows[i].position.x;
		boxposition.y = 0;
		boxposition.y + 30;
		boxposition.z = snows[i].position.z;
		ofDrawBox(boxposition.x, boxposition.y, boxposition.z, 30, boxposition.y, 30);
		snows[i].circle();
		
	}

	/*
	for (int i = 0; i < numsnows; i++) {

		if (snows[i].position.y <= 10) {
			activate = true;
		}
		if (snows[i].position.y >= 10) {
			activate = false;
			circlesize = 0;
		}
		if (activate = true) {
			circlesize += 10;
			
		}

		ofDrawCone(boxposition.x, boxposition.y, boxposition.z, circlesize, 1);
	}
	*/
	

	
	
	
	easyCam.end();

	ofDrawBitmapString("click to randomly adjust the position of snowflakes ", 100, 30);
	ofDrawBitmapString("this is about snowflakes falling down and create ripples on the water surface ", 100, 50);
	ofDrawBitmapString(" I wanted to make this looked more natural but I encountered quite a few difficulties ", 100, 70);
	ofDrawBitmapString(" so I'd // out many things ", 100, 90);


}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){		
	for (int i = 0; i < numsnows; i++) {
		snows[i].blow();
	}
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
