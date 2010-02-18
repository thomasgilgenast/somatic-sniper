#ifndef PRIOR_H
#define PRIOR_H


//returns the appropriate prior probability for a given reference base, and tumor and normal genotypes
int prior_for_genotype(int tumor_genotype, int normal_genotype, int ref);

//This generates the germline priors based on the prior probability of a het mutation. 
//TODO add more comments on what the actually means
void initialize_germline_priors (float prior);

//This generates the somatic priors based on transition/transversion probabilities    
void initialize_diploid_transition_transversion();

//Print out the somatic priors
void print_transition_tranversion_priors();
void print_germline_priors();

#endif