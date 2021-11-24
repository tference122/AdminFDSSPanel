#ifndef MEMBERRESPONDED_H
#define MEMBERRESPONDED_H

#include <QObject>
#include <QDebug>

#include "call.h"

class MemberResponded : public QObject, Call
{
    Q_OBJECT
public:
    explicit MemberResponded(QObject *parent = nullptr);

signals:


    // Call interface
public:
    void getDataQuery();

    // Call interface
public:
    void insertDataIntoDatabase();
};

#endif // MEMBERRESPONDED_H
