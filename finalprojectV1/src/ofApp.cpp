#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {

	numberofrays = 80;
	

	for (int i = 0; i < numberofrays; i+=1) {
		fireray tempray;
		rays.push_back(tempray);
		
		rays[i].update(rays[i].a);
	}
	
}

//--------------------------------------------------------------
void ofApp::update() {

	for (int i = 0; i < rays.size(); i+=1) {
		
		rays[i].changeangles(i);
		
	}
	
}

//--------------------------------------------------------------
void ofApp::draw() {

	for (int i = 1; i < rays.size(); i+=1) {
		rays[i].changeanglee(rays[i].a);
		rays[i].draw();
	}
	//std::cout << "value: " << rays[2].distances1 << endl;
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

	if (key == 'w') {
		for (int i = 1; i < rays.size(); i += 1) {
			rays[i].currentposition.y -= 4;
		}
		currentposition.y -= 4;
	}

	if (key == 's') {
		for (int i = 1; i < rays.size(); i += 1) {
			rays[i].currentposition.y += 4;
		}
		currentposition.y += 4;
	}

	if (key == 'd') {
		for (int i = 1; i < rays.size(); i += 1) {
			rays[i].currentposition.x += 4;
		}
		currentposition.x += 4;
	}

	if (key == 'a') {
		for (int i = 1; i < rays.size(); i += 1) {
			rays[i].currentposition.x -= 4;
		}
		currentposition.x -= 4;
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {
	
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {
	
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
