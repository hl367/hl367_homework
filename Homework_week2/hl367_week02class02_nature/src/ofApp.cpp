#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	ofBackground(0);

	gravity = ofVec2f(0, 19);
  
}

//--------------------------------------------------------------
void ofApp::update() {

	
	/*	
	gravity.x = ofMap(ofGetMouseX(), 0, ofGetWidth(), -1, 1);
	gravity.y = ofMap(ofGetMouseY(), 0, ofGetHeight(), -1, 1);
	*/


	for (int i = 0; i < 100; i++) {
		rain[i].update(gravity);
	}

	if (click == true) {
		for (int i = 0; i < 100; i++) {
			rain[i].changecolor();
		}
	}

}

	




//--------------------------------------------------------------
void ofApp::draw(){

	for (int i = 0; i < 100; i++) {
		rain[i].draw();
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == 32) {
		press == true;
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
	if (key == 32) {
		press == false;
	}
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	click = true;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
	click = false;
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

