#ifndef EXTRACREDIT_H
#define EXTRACREDIT_H

#include <QObject>
#include <QDebug>

class ExtraCredit : public QObject
{
    Q_OBJECT
    int id;
    int creditAmmount;
    QString reason;

public:
    explicit ExtraCredit(QObject *parent = nullptr);
    ~ExtraCredit();
    int getId() const;
    void setId(int newId);

    int getCreditAmmount() const;
    void setCreditAmmount(int newCreditAmmount);

    const QString &getReason() const;
    void setReason(const QString &newReason);

signals:

};

#endif // EXTRACREDIT_H
