#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){


	ofEnableDepthTest();
	ofBackground(0, 0, 255);
	ofSetVerticalSync(true);
	
	ofLoadImage(mTex, "water.jpg");
	ofLoadImage(mTex2, "tower.jpg");
	ofLoadImage(mTex3, "stick.jpg");
	ofBackground(0);


	 numsnows = 100;


	 force = ofVec3f(0, -1, 0);

	 pushw = false; 
	 pushs = false;
	 pusha = false;
	 pushd = false;
	 activate = false;
	 dis = 2000;
	 rotate1 = 512;
	 rotate2 = 384;

	 easyCam.setDistance(dis);
	 easyCam.setPosition(rotate1, rotate2, dis);
	 
}

//--------------------------------------------------------------
void ofApp::update() {



	if (pushs == true) {
		if (boxes.boxposition.y < 100) {

			boxes.boxposition.y += 3;
		}
	}

	if (pushw == true) {
		if (boxes.boxposition.x < 400) {

			boxes.boxposition.x += 3;
		}
	}

	// a1kageyama's work  https://github.com/a1kageyama/CircleDance/blob/master/ofApp.cpp
	ofSeedRandom(200);
	this->locations.clear();

	int radius = 350;
	float noise_seed_x, noise_seed_y;
	for (int i = 0; i < 5; i++) {
		noise_seed_x = ofRandom(1000);
		noise_seed_y = ofRandom(1000);
		for (int deg = 0; deg < 360; deg += 3) {
			auto point = glm::vec3(radius * cos(deg * DEG_TO_RAD),
				radius * sin(deg * DEG_TO_RAD), 0);
			auto rotation_x = glm::rotate(glm::mat4(),
				ofMap(ofNoise(noise_seed_x, ofGetFrameNum() * 0.0005), 0, 1.5, -PI, PI),
				glm::vec3(1, 0, 0));
			auto rotation_y = glm::rotate(glm::mat4(),
				ofMap(ofNoise(noise_seed_y, ofGetFrameNum() * 0.0005), 0, 1.5, -PI, PI),
				glm::vec3(0, 1, 0));
			this->locations.push_back(glm::vec4(point, 0) * rotation_x * rotation_y);
		}
	}

}

//--------------------------------------------------------------
void ofApp::draw(){
	
//	mesh.drawVertices();
	
	easyCam.begin();


	ofPushStyle();
	for (int i = 0; i < numsnows; i++) {

		snows[i].draw();
		snows[i].update(force);
		//snows[i].circle();
	}

	ofEnableBlendMode(OF_BLENDMODE_ADD);

	

	
	ofPushMatrix();
	ofFill();
	mTex.bind();
	ofRotate( 90, 1, 0, 0);
	ofDrawPlane( ofGetWidth()/2, ofGetHeight()/2,  ofGetWidth(), ofGetWidth());
	ofPopMatrix();
	mTex.unbind();
	ofPopStyle();
	

	if (pushs == true) {


		ofPushStyle();
		ofFill();
		ofDisableBlendMode();
		mTex2.bind();
		boxes.draw();
		mTex2.unbind();
		ofPopStyle();
	}


	if (pushw == true) {


		ofPushStyle();
		ofFill();
		ofDisableBlendMode();
		mTex3.bind();
		boxes.tower2();
		mTex3.unbind();
		ofPopStyle();
	}

	

	std::cout << "value: " << boxes.boxposition.y << endl;
	std::cout << "value: " << boxes.boxposition.x << endl;
	if (boxes.boxposition.y >=100 && boxes.boxposition.x >= 400) {
		// edited from a1kageyama's work  https://github.com/a1kageyama/CircleDance/blob/master/ofApp.cpp

		for (auto& location : this->locations) {
			ofPushStyle();
			
			ofPushMatrix();
			ofTranslate(ofGetWidth() / 2, 600, ofGetWidth()/2);
			ofSetColor(221, 221, 221, 220);
			ofDrawSphere(ofGetWidth() / 2, 600, ofGetWidth(), 7);
			for (auto& other : this->locations) {
				float distance = glm::distance(location, other);
				if (distance < 120) {
					ofSetColor(224, 159, 189, ofMap(distance, 100, 120, 239, 0));
					ofDrawLine(location, other);
					
					
				}
			}
			ofPopStyle();
			ofPopMatrix();
		}

	}
	easyCam.end();

	ofDrawBitmapString("Press W and S and wait ", 100, 30);
	
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == 'w') {
		pushw = !pushw;
	}
	if (key == 's') {
		pushs = !pushs;
	}
	if (key == 'a') {
		pusha = true;
	}
	if (key == 'd') {
		pushd = true;
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
/*	if (key == 'w') {
		pushw = false;
		
	}
	if (key == 's') {
		pushs = false;
	}
	if (key == 'a') {
		pusha = false;
	}
	if (key == 'd') {
		pushd = false;
	}*/
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
	//	snows[i].blow();
		mTex2.bind();
		boxes.draw();
		mTex2.unbind();
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
