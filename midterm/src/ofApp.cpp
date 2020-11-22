#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	
	ofBackground(255);
	thebackground.load("background.jpg");
	
	/*gui.setup();
	gui.add(intsliderx.setup("intsliderX", 0, 0, 300));
	gui.add(intslidery.setup("intsliderY", 0, 0, 300));
	gui.add(toggle.setup("toggle", true));
	*/
	test = false;
	shootbullet = false;
	testing == false;
	getfishrod == false;
	addhook ==false;
	ufofall == false;
	startbutton == false;
	startspaceinvader == false;
	//finding position
	fishrod.update();
	shi.update();
	UFO.update();
	background.update();
	start.update();

	ParameterGroup.add(fishrod.fishroddata);
	ParameterGroup.add(shi.shidata);
	ParameterGroup.add(UFO.UFOinfo);
	ParameterGroup.add(background.backgroundinfo);
	ParameterGroup.add(start.startbuttondata);

	gui.setup(ParameterGroup);
	
	size = 100;
	for (int i = 0; i < enemynumber; i++) {
		enemies[i].show(-120 * i - 100, 200, size); //even space inbetween
	}


	shootaction.x = ship.ufopos.x + 10;
	shootaction.y = ship.ufopos.y;

	distance = enemies[enemynumber].pos.distance(shootaction);
	
}

//--------------------------------------------------------------
void ofApp::update(){

	std::cout << "value: " << ofGetMouseX() << endl;
	std::cout << "value: " << ofGetMouseY() << endl;
	std::cout << "value: " << startspaceinvader << endl;



	}

		


//--------------------------------------------------------------
void ofApp::draw(){

	thebackground.draw(0, 0, 1024, 768);
	

	background.water();


	if (startbutton == true) {
		start.word1();
	}



	if (testing == false ) {
		shi.draw();
		UFO.draw();
		background.draw();
		start.draw();
		

		//UFO action

		if (ufofall == false) {
			UFO.ufostay(); //still on button
		}

		if (ufofall == true) {
			//UFO.ufodrop(); //fall down
			touch.interaction();
		}

		if (word1 == true) {
			ofPushStyle();
			ofSetHexColor(0x00ff00);
			ofDrawBitmapString("Something is missing", 50, 367);
			ofPopStyle();
		}

		//get fishing rod
		if (getfishrod == false ) {
			fishrod.draw(); 
			ofPushStyle();
			ofSetHexColor(0x00ff00);
			ofDrawBitmapString("HELLO",50, 367);
			ofPopStyle();
		}
		else {
			fishrod.take(); //take the fishing rod
			word1 = true;
		}

		//hook nottaken
		if (addhook == false) {
			shi.hooknottaken();
		}
		//hook taken
		else {
			shi.hooktaken();
			word1 = false;
		}
	}
	
	touch.game(); //start the space invader game if the ship is hooked
	if (touch.pos.x <= 0) {
		startspaceinvader = true;
	}

	if (startspaceinvader == true) {


		ship.drawufo();


		for (int i = 0; i < enemynumber - 1; i++) {
			enemies[i].move(); //how the enemy should move
		}


		//bullet
		if (shootbullet == true) {
			//bullets[].show(ship.ufopos.x, ship.ufopos.y);
			

			ofSetRectMode(OF_RECTMODE_CENTER);
			ofDrawRectangle(shootaction.x, shootaction.y - 5, 20, 20);
			ofSetRectMode(OF_RECTMODE_CORNER);

			
			
		}



	}


	//for testing
	if (testing == true) {
		gui.draw();

		shi.test();
		UFO.test();
		background.test();
		start.test();
		fishrod.test();
	}

	
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	
	//for adjusting location only
	if (key == 't') {
		testing= !testing;
	}
	if (key == OF_KEY_RIGHT) {
		ship.moveleft();
	}
	if (key == OF_KEY_LEFT) {
		ship.moveright();
	}
	if (key == ' ') {
		shootbullet = !shootbullet;
	
	}

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

	// ƒ√rod
	if (getfishrod == false && ofGetMouseX() <= 337 && ofGetMouseY() <= 476 && ofGetMouseX() >= 309 && ofGetMouseY() >= 436) {
		getfishrod = true;
	}

	// —bhook 
	if (getfishrod == true && ofGetMouseX() <= 592 && ofGetMouseY() <= 107 && ofGetMouseX() >= 582 && ofGetMouseY() >= 97) {
		addhook = true;
	}
	
	// UFOµÙœ¬ÅÌ 
	if ( ofGetMouseX() <= 567 && ofGetMouseY() <= 488 && ofGetMouseX() >= 506 && ofGetMouseY() >= 432) {
		//UFO.resettime();
		ufofall = true;
		// touch.resettime;
	}

	//info
	if (ofGetMouseX() <= 615 && ofGetMouseY() <= 400 && ofGetMouseX() >= 465 && ofGetMouseY() >= 318) {
		startbutton = true;
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
