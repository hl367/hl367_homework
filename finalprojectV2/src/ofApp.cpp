#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {

	ofPushMatrix();
	
	numberofrays = 1440;
	

	
	for (int i = 0; i < numberofrays; i+=1) {
		fireray tempray;
		rays.push_back(tempray);
		
		//rays[i].update(rays[i].a);
		rays[i].currentposition= ofVec2f(200, 200);
	}
	ofPopMatrix();
}

//--------------------------------------------------------------
void ofApp::update() {
	
	ofPushMatrix();
	
	for (int i = 0; i < rays.size(); i+=1) {
		
		rays[i].changeangles(i);
		
	}
	ofPopMatrix();

}

//--------------------------------------------------------------
void ofApp::draw() {

	ofPushMatrix();
	
	
	for (int i = 0; i < (rays.size()-1); i+=1) {
		rays[i].changeanglee(rays[i].a);
		rays[i].draw(i, (i+1));
		//std::cout << "value: " <<  << endl;
	}
	ofPopMatrix();


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
