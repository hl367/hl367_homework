#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){


	ofEnableDepthTest();
	ofBackground(0, 0, 255);
	ofSetVerticalSync(true);
	easyCam.setDistance(1000);
	sun.load("sun.png");
	sun2.load("sun.png");
	
	

	/*
	ofVec3f a(0, 0, 0);
	ofVec3f b(100, 0, 0);
	ofVec3f c(100, 0, 100);
	ofVec3f d(100, 100.0, 0.0);
	ofVec3f e(50.0, 150.0, 0.0);
	ofVec3f f(150.0, 150.0, 0.0); 
	ofVec3f g(100.0, 50.0, 0.0);
	ofVec3f h(50.0, 150.0, 0.0);
	

	mesh.addVertex(a);
	mesh.addVertex(b);
	mesh.addVertex(c);
	mesh.addVertex(d);
	mesh.addVertex(e);
	mesh.addVertex(f); 
	mesh.addVertex(g);
	mesh.addVertex(h);

	mesh.addIndex(0);
	mesh.addIndex(1);
	mesh.addIndex(2);
	mesh.addIndex(3);
	*/

	ofBackground(0);
	int numBalls = 5;

	// fill our vector
	for (int i = 0; i < numBalls; i++) {

		Ball tempBall;					// create a temporary ball
		balls.push_back(tempBall);
	}

}

//--------------------------------------------------------------
void ofApp::update(){

	
	for (int i = 0; i < balls.size(); i++) {

		balls[i].update();	
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	
	float r = 200;
	
	easyCam.begin();
	for (int i = 0; i < balls.size(); i++) {

	balls[i].draw();
	}

	ofPushStyle();
	ofEnableBlendMode(OF_BLENDMODE_ADD);

	ofPushMatrix();
	
	sun.setAnchorPercent(0.5, 0.5);
	ofRotateX(2*ofGetElapsedTimeMillis());
	sun.draw(0, 0, 0, r, r);
	ofPopMatrix();


	ofPushMatrix();
	sun2.setAnchorPercent(0.5, 0.5);
	sun2.draw(0, 0, 0, r, r);
	ofRotateY(2*ofGetElapsedTimeMillis());
	ofPopMatrix();

	ofPushMatrix();
	sun2.setAnchorPercent(0.5, 0.5);
	sun2.draw(0, 0, 0, r, r);
	ofRotateZ(2*ofGetElapsedTimeMillis());
	ofPopMatrix();


	ofPopStyle();

	ofSetColor(255, 0, 150);
	//ofNoFill();
	ofFill();
	//ofDrawSphere(0,0, 50);
	
	easyCam.end();
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
	Ball tempBall;					// create a temporary ball
	balls.push_back(tempBall);		// copy the temporary ball into the balls vector
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
