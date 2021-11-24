#ifndef CALL_H
#define CALL_H

#include <QObject>

class Call : public QObject
{
    Q_OBJECT
    int incident_number;
    QString call_type;
    QString call_date;
    QString call_time_out;
    QString call_time_back;

public:
    explicit Call(QObject *parent = nullptr);
    ~Call();
    int getIncident_number() const;
    void setIncident_number(int newIncident_number);

    const QString &getCall_type() const;
    void setCall_type(const QString &newCall_type);

    const QString &getCall_date() const;
    void setCall_date(const QString &newCall_date);

    const QString &getCall_time_out() const;
    void setCall_time_out(const QString &newCall_time_out);

    const QString &getCall_time_back() const;
    void setCall_time_back(const QString &newCall_time_back);

    virtual void getDataQuery();
    virtual void insertDataIntoDatabase();

signals:

};

#endif // CALL_H
