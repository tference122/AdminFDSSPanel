#ifndef COMPANY_H
#define COMPANY_H

#include <QObject>

class Company : public QObject
{
    Q_OBJECT
    int company_number;
public:
    explicit Company(QObject *parent = nullptr);
    ~Company();
    int getCompany_number() const;
    void setCompany_number(int newCompany_number);

signals:

};

#endif // COMPANY_H
