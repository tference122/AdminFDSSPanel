#include "company.h"

int Company::getCompany_number() const
{
    return company_number;
}

void Company::setCompany_number(int newCompany_number)
{
    company_number = newCompany_number;
}

Company::Company(QObject *parent) : QObject(parent)
{

}

Company::~Company()
{

}
