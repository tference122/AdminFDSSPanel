#include "member.h"

int Member::getLinenumber() const
{
    return linenumber;
}

void Member::setLinenumber(int newLinenumber)
{
    linenumber = newLinenumber;
}

const QString &Member::getFirst_name() const
{
    return first_name;
}

void Member::setFirst_name(const QString &newFirst_name)
{
    first_name = newFirst_name;
}

const QString &Member::getLast_name() const
{
    return last_name;
}

void Member::setLast_name(const QString &newLast_name)
{
    last_name = newLast_name;
}

const QString &Member::getPosition() const
{
    return position;
}

void Member::setPosition(const QString &newPosition)
{
    position = newPosition;
}

const QString &Member::getBirthday() const
{
    return birthday;
}

void Member::setBirthday(const QString &newBirthday)
{
    birthday = newBirthday;
}

Member::Member(QObject *parent) : QObject(parent)
{

}

Member::~Member()
{

}
