#ifndef APPLICATIONDATA_H
#define APPLICATIONDATA_H

#include <QObject>
#include <QQuickItem>
#include <QDateTime>
#include <QString>

class ApplicationData : public QObject
{
    Q_OBJECT
public:
    explicit ApplicationData(QObject *parent = 0);
      Q_INVOKABLE QString print();

signals:

public slots:
};

#endif // APPLICATIONDATA_H
