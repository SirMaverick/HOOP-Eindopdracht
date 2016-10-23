#pragma once


#include "ofMain.h"

#define MAX_LIFETIME 150

class Particle {
public:
	Particle(const int startX, const int startY); // De startpositie moet altijd hetzelfde zijn
	virtual ~Particle();

	virtual void move();

	const void draw();  //De draw functie blijft hetzelfde en zal niet inene andere circles gaan tekenen

	void setColours(ofColor center, ofColor inner, ofColor outer);

	const bool isDead(); // hij gaat niet inene anders reageren als de particle dood is. Dit is in ieder geval op het moment niet nodig.

protected:
	ofPoint position;
	float radius;
	ofVec2f speed;
	long lifetime;

	ofColor centerColour = ofColor::white;
	ofColor innerColour;
	ofColor outerColour;

};