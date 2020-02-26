#pragma once
 
class AttributeProbabilityWrapper {
public:
	double pDemocratForAttributePositive;
	double pDemocratForAttributeNegative;
	double pRepublicanForAttributePositive;
	double pRepublicanForAttributeNegative;

	AttributeProbabilityWrapper();
	AttributeProbabilityWrapper(double pDemocratForAttributePositive, double pDemocratForAttributeNegative,
		double pRepublicanForAttributePositive, double pRepublicanForAttributeNegative);

	
};