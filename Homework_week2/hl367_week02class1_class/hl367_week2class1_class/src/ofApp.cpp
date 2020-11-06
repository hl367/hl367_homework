#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	ofBackground(255);
    
    gravity = ofVec2f(0,0); // start with no gravity force
	

}

//--------------------------------------------------------------
void ofApp::update() {

	
	gravity.x = 0;
	gravity.y = 0.2;
	frame = ofGetFrameNum() ;
	ball1.update(gravity); 
	ball2.update(gravity);
	ball3.update(gravity);
	ball4.update(gravity);
	ball5.update(gravity);
	ball6.update(gravity);
	ball7.update(gravity);
	ball8.update(gravity);
	ball9.update(gravity);

	if (frame % 200 >= 2 && frame % 200 <= 3) {

	wind.x = ofRandom(-1.5, 1.5);
	wind.y = ofRandom(-2, 0);

	ball1.update(wind);
	ball2.update(wind);
	ball3.update(wind);
	ball4.update(wind); 
	ball5.update(wind);
	ball6.update(wind);
	ball7.update(wind);
	ball8.update(wind);
	ball9.update(wind);
}
	
	

	


}

//--------------------------------------------------------------
void ofApp::draw(){

	ball1.draw();
	ball2.draw();
	ball3.draw();
	ball4.draw();
	ball5.draw();
	ball6.draw();
	ball7.draw();
	ball8.draw();
	ball9.draw();
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

