#include "CurvingParticle.h"

CurvingParticle::CurvingParticle(const int startX, const int startY) : Particle(startX, startY) {
	curve = ofVec2f(ofRandom(-5, 5),
		ofRandom(-5, 5));
}

CurvingParticle::~CurvingParticle() {
}

void CurvingParticle::move() {
	position += speed;
	curve.rotate(2);
	position += curve;
}