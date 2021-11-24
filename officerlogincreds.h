#ifndef OFFICERLOGINCREDS_H
#define OFFICERLOGINCREDS_H

#include <QObject>

class OfficerLoginCreds : public QObject
{
    Q_OBJECT
    QString user_name;
    QString password;

public:
    explicit OfficerLoginCreds(QObject *parent = nullptr);
    ~OfficerLoginCreds();
    const QString &getUser_name() const;
    void setUser_name(const QString &newUser_name);

    const QString &getPassword() const;
    void setPassword(const QString &newPassword);

signals:

};

#endif // OFFICERLOGINCREDS_H
