#include "call.h"

int Call::getIncident_number() const
{
    return incident_number;
}

void Call::setIncident_number(int newIncident_number)
{
    incident_number = newIncident_number;
}

const QString &Call::getCall_type() const
{
    return call_type;
}

void Call::setCall_type(const QString &newCall_type)
{
    call_type = newCall_type;
}

const QString &Call::getCall_date() const
{
    return call_date;
}

void Call::setCall_date(const QString &newCall_date)
{
    call_date = newCall_date;
}

const QString &Call::getCall_time_out() const
{
    return call_time_out;
}

void Call::setCall_time_out(const QString &newCall_time_out)
{
    call_time_out = newCall_time_out;
}

const QString &Call::getCall_time_back() const
{
    return call_time_back;
}

void Call::setCall_time_back(const QString &newCall_time_back)
{
    call_time_back = newCall_time_back;
}

void Call::getDataQuery()
{
    QString query = "SELECT * FROM calls";
}

void Call::insertDataIntoDatabase()
{
    QString query = "INSERT INTO calls";
}

Call::Call(QObject *parent) : QObject(parent)
{

}

Call::~Call()
{

}
