#ifndef MEMBER_H
#define MEMBER_H

#include <QObject>

class Member : public QObject
{
    Q_OBJECT
    int linenumber;
    QString first_name;
    QString last_name;
    QString position;
    QString birthday;

public:
    explicit Member(QObject *parent = nullptr);
    ~Member();
    int getLinenumber() const;
    void setLinenumber(int newLinenumber);

    const QString &getFirst_name() const;
    void setFirst_name(const QString &newFirst_name);

    const QString &getLast_name() const;
    void setLast_name(const QString &newLast_name);

    const QString &getPosition() const;
    void setPosition(const QString &newPosition);

    const QString &getBirthday() const;
    void setBirthday(const QString &newBirthday);

signals:

};

#endif // MEMBER_H
