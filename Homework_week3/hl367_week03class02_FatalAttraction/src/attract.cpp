

#include "attract.hpp"



attract::attract(){
	
	
	pos = ofVec2f(ofGetWidth()/ 2, 3*sr);
	


	mass = 5;
	

	ofVec2f vel = ofVec2f (0, 0);
	ofVec2f acc = ofVec2f (0, 0);

	sr = 50;
	starr = 15;

	G = 0.05;

}



void attract::attractforce() {
	

}

//F=G*m1*m2/r^2
//F=acc*m
//acc = G*m1*m2/(r^2*m1)
//acc=G*m2/r^2

void attract::update() {


	mousepos = ofVec2f(ofGetMouseX(), ofGetMouseY());

	float distance = pos.distance(mousepos);
	// b =  G/ (distance*distance);

	

	
	dis = mousepos - pos;
	//float distantx = mousepos.x - pos.x;
	//float distanty = mousepos.y - pos.y;
	dis.normalize();
	if (distance <  sr ) {		//End the Game
		ofExit();
	} 

	 attraction= G * dis ; // apply force to ball

	 repuls = acc * -0.9;


	 acc = acc + attraction;


		 vel += acc;
		 pos += vel;
	 

	 //  left
	 if (pos.x <= sr) {
		 pos.x = sr;
		 vel.x = -0.001 * vel.x;
	 }
	 // right
	 else if (pos.x >= ofGetWidth() - sr) {
		 pos.x = ofGetWidth() - sr;
		 vel.x = -0.001 * vel.x;
	 }


	 //bot
	 if (pos.y >= ofGetHeight() - sr) {
		 pos.y = ofGetHeight() - sr;
		 vel.y = -0.001 * vel.y;
	 }

	 //top
	 if (pos.y <= 0 + sr) {
		 pos.y = 0 + sr;
		 vel.y = -0.001 * vel.y;
	 }
	 
	
	//std::cout << "value: " << vel<< endl;
	//std::cout << "value: " << acc << endl;
	//std::cout << "value: " << pos<< endl;
	std::cout << "value: " << mousepos << endl;
	
}

void attract::draw(){


	ofSetColor(255, 255, 0);

	ofDrawEllipse(pos.x, pos.y, 2*sr, 2*sr);



}