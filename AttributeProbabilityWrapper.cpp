#include <iostream>
#include "AttributeProbabilityWrapper.h"

AttributeProbabilityWrapper::AttributeProbabilityWrapper()
{
}

AttributeProbabilityWrapper::AttributeProbabilityWrapper(double pDemocratForAttributePositive, double pDemocratForAttributeNegative, double pRepublicanForAttributePositive, double pRepublicanForAttributeNegative)
{
	this->pDemocratForAttributePositive = pDemocratForAttributePositive;
	this->pDemocratForAttributeNegative = pDemocratForAttributeNegative;
	this->pRepublicanForAttributePositive = pRepublicanForAttributePositive;
	this->pRepublicanForAttributeNegative = pRepublicanForAttributeNegative;
}
