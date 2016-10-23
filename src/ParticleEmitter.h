#pragma once


#include "Particle.h"

class ParticleEmitter {
public:
	static ParticleEmitter* instance(); 

	const void setOrigin(int x, int y); // Je wilt het object na spawning niet meer verplaatsen.

	const void setCurvingParticleRatio(float ratio); // De particle moet dezelfde curve mee blijven krijgen

	const void setColours(ofColor innerColour, ofColor outerColor); // De kleuren hoeven tijdens dat ze gespawned worden niet meer te veranderen

	Particle* emit();

private:
	ParticleEmitter();
	
	int originX; 
	int originY; 
	float curvingParticleRatio;
	ofColor inner;
	ofColor outer;

	static ParticleEmitter* theOnlyOne;
};