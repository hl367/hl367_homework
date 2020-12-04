#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	
	music.load("undertale.mp3");
	//ofBackground(255, 255, 255);
	vid.load("video.mp4");
	//vid.load("black.mov");
	glitch.allocate(vid.getWidth(), vid.getHeight(), OF_IMAGE_COLOR);

	ofSetFrameRate(100);
	//vid.play();
	vid.play();
	music.play();
}

//--------------------------------------------------------------
void ofApp::update(){
	
	vid.update();
	

	

	if (vid.isFrameNew()) {
		
float random = ofRandom(1, ofGetMouseX());

std::cout << "value: " << random << endl;

		for (int x = 0; x < vid.getWidth(); x++) {
			for (int y = 0; y < vid.getHeight(); y++) {

				ofColor color = vid.getPixels().getColor(x, y);
				ofColor color2 = vid.getPixels().getColor(x, y);
				int test = ofRandom(1, 10);

				
		int newX = int(test + ofGetElapsedTimef()) % int(vid.getWidth());
					int newY = int( random ) % int(vid.getHeight());

				if (test < 2) {
					glitch.setColor(newX, newY, color2);
				}
					
				if (test >= 2) {
					glitch.setColor(x, y, color);
				}

			}
		}
		glitch.update();
	}
	

	
}

//--------------------------------------------------------------
void ofApp::draw(){
	
	//	ofSetHexColor(0xFFFFFF);
	glitch.draw(0, 0, ofGetWidth(), ofGetHeight());
	//vid.draw(0, 0, ofGetWidth(), ofGetHeight());

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
