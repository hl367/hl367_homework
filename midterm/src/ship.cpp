
#include "ship.hpp"

ship::ship() {

	//original position
	originX = 500.245;
	originY = 720;
	ufopos.x = ofGetWidth() / 2;
	ufopos.y = 720;
	

	ufo.load("spaceship.png");
	
}


void ship::update() {

	
}


void ship::drawufo() {
	
	ufo.draw(ufopos.x -29, ufopos.y, 86, 58.9);

	//std::cout << "value: " << ufopos.x << endl;
	//std::cout << "value: " << ufopos.y << endl;
	
	
}

void ship::moveright() {

	ufopos.x = ufopos.x - 10;

}

void ship::moveleft() {
	ufopos.x = ufopos.x + 10;
}