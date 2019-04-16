#ifndef UPDATESVG_H
#define UPDATESVG_H

#include <QDomDocument>
#include <iostream>
#include <QString>

class updatesvg
{

public:
    QByteArray updateAttr(QByteArray pic, QString id, QString attr, QString val);
    QByteArray updateVal(QByteArray pic, QString id, QString val);
    void findElementAttr( QDomElement& elem, QString id, QString attr, QString val);
    void findElementVal( QDomElement& elem, QString id, QString val);
};

#endif // UPDATESVG_H

