surface occsurf3(float samples = 64, maxdist = 1e30, coneangle = PI/2)
{
	normal Ns = faceforward (normalize(N), I);
	
	// Compute occlusion
	float occ = occlusion(P, Ns, samples, "maxdist", maxdist, "coneangle", coneangle);

	// Set Ci and Oi
	Ci = (1 - occ) * Cs * Os;
	Oi=Os;
}