#pragma once


#include "ofMain.h"
#include "Particle.h"

class CurvingParticle : public Particle {
public:
	CurvingParticle(const int startX, const int startY); // Het object zal niet inene een andere spawnpoint krijgen.
	virtual ~CurvingParticle();

	void move();

	ofVec2f curve;
};
