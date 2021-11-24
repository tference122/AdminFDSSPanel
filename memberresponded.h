#ifndef MEMBERRESPONDED_H
#define MEMBERRESPONDED_H

#include <QObject>
#include <QDebug>

#include "call.h"

class MemberResponded : public QObject
{
    Q_OBJECT
    int incident_number;
    int linenumber;

public:
    explicit MemberResponded(QObject *parent = nullptr);
    ~MemberResponded();

    int getIncident_number() const;
    void setIncident_number(int newIncident_number);

    int getLinenumber() const;
    void setLinenumber(int newLinenumber);

signals:

};

#endif // MEMBERRESPONDED_H
