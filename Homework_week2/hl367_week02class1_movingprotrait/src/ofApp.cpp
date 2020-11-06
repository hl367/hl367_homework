#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	ofBackground(255);
    
   
	

}

//--------------------------------------------------------------
void ofApp::update() {

	if (click == true) {
		hit.x = ofMap(ofGetMouseX(), 0, ofGetWidth(), -1, 1);
		hit.y = ofMap(ofGetMouseY(), 0, ofGetHeight(), -1, 1);
	}

	if (press == true) {
		face.draweye();
	}

	if (press == false) {
		face.drawother();
	}

	face.update(hit);



}
	
	

	




//--------------------------------------------------------------
void ofApp::draw(){

	face.draw();
	
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

