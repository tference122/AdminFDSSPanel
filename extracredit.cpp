#include "extracredit.h"

int ExtraCredit::getId() const
{
    return id;
}

void ExtraCredit::setId(int newId)
{
    id = newId;
}

int ExtraCredit::getCreditAmmount() const
{
    return creditAmmount;
}

void ExtraCredit::setCreditAmmount(int newCreditAmmount)
{
    creditAmmount = newCreditAmmount;
}

const QString &ExtraCredit::getReason() const
{
    return reason;
}

void ExtraCredit::setReason(const QString &newReason)
{
    reason = newReason;
}

ExtraCredit::ExtraCredit(QObject *parent) : QObject(parent)
{

}

ExtraCredit::~ExtraCredit()
{

}
