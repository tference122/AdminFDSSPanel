#include "officerlogincreds.h"

const QString &OfficerLoginCreds::getUser_name() const
{
    return user_name;
}

void OfficerLoginCreds::setUser_name(const QString &newUser_name)
{
    user_name = newUser_name;
}

const QString &OfficerLoginCreds::getPassword() const
{
    return password;
}

void OfficerLoginCreds::setPassword(const QString &newPassword)
{
    password = newPassword;
}

OfficerLoginCreds::OfficerLoginCreds(QObject *parent) : QObject(parent)
{

}

OfficerLoginCreds::~OfficerLoginCreds()
{

}
