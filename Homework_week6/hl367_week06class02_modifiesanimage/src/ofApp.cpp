#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	img.load("img.jpg");

	img2.allocate(img.getWidth(), img.getHeight(), OF_IMAGE_COLOR);
	ofSetFrameRate(100);
}

//--------------------------------------------------------------
void ofApp::update(){

	img.update();

		for (int x = 0; x < img.getWidth(); x++) {
			for (int y = 0; y < img.getHeight(); y++) {

				int offset = ofGetMouseX();

				int range = ofGetMouseY();

				ofMap(offset, 0, 1024, 0, 255);
				ofMap(range, 0, 768, 0, 255);

				ofColor color = img.getPixels().getColor(x, y);
				
				int blue = color.r;
				int red = color.b;

				color.b = blue;
				color.r = red;

				if (color.r < 255 && color.r > 255 - range && color.g < 255 && color.g > 255 - range) {
					color.g = 0;
					color.r = offset;
				}
					
					img2.setColor(x, y, color);
				


				/*	
				float sumX = ofGetWidth();
				float sumY = ofGetHeight();
				float total = ofGetWidth()*ofGetHeight();
				*/


			}
		}

	img2.update();
	
	
}

//--------------------------------------------------------------
void ofApp::draw(){
	img2.draw(0, 0, img.getWidth(), img.getHeight());
	ofDrawBitmapString(" mouse Y value for threshold, mouse X value for color ", 100, 730);
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
