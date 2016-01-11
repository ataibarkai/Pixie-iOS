surface occsurf2(float samples = 64)
{
	normal Ns = faceforward (normalize(N), I);
	
	// Compute occlusion
	float occ = occlusion(P, Ns, samples);

	// Set Ci and Oi
	Ci = (1 - occ) * Cs * Os;
	Oi=Os;
}