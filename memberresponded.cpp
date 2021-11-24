#include "memberresponded.h"

int MemberResponded::getIncident_number() const
{
    return incident_number;
}

void MemberResponded::setIncident_number(int newIncident_number)
{
    incident_number = newIncident_number;
}

int MemberResponded::getLinenumber() const
{
    return linenumber;
}

void MemberResponded::setLinenumber(int newLinenumber)
{
    linenumber = newLinenumber;
}

MemberResponded::MemberResponded(QObject *parent) : QObject(parent)
{

}

MemberResponded::~MemberResponded()
{

}
