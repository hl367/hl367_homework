#include "ofApp.h"

// The Game will start in 5 seconds, move your mouse to avoid touching the yellow ball and yellow square.



//--------------------------------------------------------------
void ofApp::setup(){
	
	ofBackground(0);
	
	attract attraction();
	
}

//--------------------------------------------------------------
void ofApp::update(){
	float starttime = ofGetElapsedTimeMillis();
	if (starttime >= 5000) {
		attraction.update();
	
	if (ofGetMouseX() > 100 && ofGetMouseY() > 100 && ofGetMouseX() < 924 && ofGetMouseY() < 668) {
		ofExit(); //End the game
	}
		
	}

}

//--------------------------------------------------------------
void ofApp::draw(){

		ofDrawRectangle( 100, 100, 824, 568);
	attraction.draw();
	
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
	start == true;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
	start == false;
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
