

#include "solar.hpp"



solar::solar(){
	
	
	sunpos = ofVec2f(ofGetWidth()/ 2, ofGetHeight() / 2);
	starpos = ofVec2f(ofGetWidth() / 20, ofGetHeight()/3);


	smass = 5;
	starmass = 1;

	ofVec2f vel = ofVec2f (100, 500);
	ofVec2f acc = ofVec2f (0, 0);

	sr = 50;
	starr = 15;

	

}




/*solar::solar(glm::vec2 _sunpos, glm::vec2 _smass) {

	sunpos = _sunpos;
	smass =  _smass;
	glm::vec2 acc = smass * starmass / ((starpos - sunpos)*(starpos - sunpos)*starmass);
}*/





//F=G*m1*m2/r^2
//F=acc*m
//acc = G*m1*m2/(r^2*m)

void solar::gravity() {
	
	//Failed
/*  
	//((starpos - sunpos)*(starpos - sunpos)*starmass) * acc = smass * starmass ;

	sunpos += ofVec2f(0.05, 0); //sunmoving


	dis = sunpos - starpos;
	dis.normalize();

	sungravity = 0.1 * dis; // apply force toward sun



   //vel += acc;
	vel += sungravity;
	//starpos += vel;
	starpos += vel;

	/starmass*acc = force;

	std::cout << "value: " << sungravity << endl;
	std::cout << "value: " << sunpos << endl;
	*/
}

void solar::update() {


	float distance = sunpos.distance(starpos);
	 b = smass * starmass / (distance*distance*starmass);

	sunpos += ofVec2f(0.05, 0); //sunmoving

	
	dis = sunpos - starpos;
	dis.normalize();


	 sungravity= 20 * dis ; // apply force toward sun

	// acc*sungravity = acc;
    
	 acc = acc + sungravity;

	 ofVec2f vel= ofVec2f (20, 50);

	
	 vel += acc;

	 starpos += vel;

	// starmass*acc = force;


	std::cout << "value: " << vel<< endl;
	
	
	
	


	std::cout << "value: " << acc << endl;
}

void solar::draw(){


	ofSetColor(255, 255, 0);

	ofDrawEllipse(sunpos.x, sunpos.y, sr, sr);


	ofSetColor(163,148,128);
	ofDrawEllipse(starpos.x, starpos.y, starr, starr);
}