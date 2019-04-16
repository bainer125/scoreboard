#include "updatesvg.h"
#include <QtSvg>
#include <QDomDocument>
#include <QDomElement>
#include <QDomNodeList>
#include <QDomNode>
#include <QDomText>
#include <QDomAttr>
#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

QByteArray updatesvg::updateAttr(QByteArray pic, QString id, QString attr, QString val){
    QDomDocument doc;
    doc.setContent(pic);
    QDomElement svg = doc.documentElement();
    findElementAttr(svg,id,attr,val);
    pic = doc.toByteArray();
    return pic;
}

QByteArray updatesvg::updateVal(QByteArray pic, QString id, QString val){
    QDomDocument doc;
    doc.setContent(pic);
    QDomElement svg = doc.documentElement();
    findElementVal(svg,id,val);
    pic = doc.toByteArray();
    return pic;
}

void updatesvg::findElementAttr( QDomElement& elem, QString id, QString attr, QString val){

    //We go through five layers of children looking for chosen ID
    //Ideally we would just search recursively, but the function written
    //previously wasn't working. I'll get to it eventually lol

    QDomElement first;
    QDomElement second;
    QDomElement third;
    QDomElement fourth;
    QDomElement fifth;
    QDomElement sixth;

    if(elem.hasChildNodes()){
        for (int i = 0; i<elem.childNodes().count();i++){
            if(elem.childNodes().at(i).isElement()){
                first = elem.childNodes().at(i).toElement();
            }
            if(first.attribute("id")==id){
                first.setAttribute(attr,val);
                return;
            }
            if(first.hasChildNodes()){
                for (int i = 0; i<first.childNodes().count();i++){
                    if(first.childNodes().at(i).isElement()){
                        second = first.childNodes().at(i).toElement();
                    }
                    if(second.attribute("id")==id){
                        second.setAttribute(attr,val);
                        return;
                    }
                    if(second.hasChildNodes()){
                        for (int i = 0; i<second.childNodes().count();i++){
                            if(second.childNodes().at(i).isElement()){
                                third = second.childNodes().at(i).toElement();
                            }
                            if(third.attribute("id")==id){
                                third.setAttribute(attr,val);
                                return;
                            }
                            if(third.hasChildNodes()){
                                for (int i = 0; i<third.childNodes().count();i++){
                                    if(third.childNodes().at(i).isElement()){
                                        fourth = third.childNodes().at(i).toElement();
                                    }
                                    if(fourth.attribute("id")==id){
                                        fourth.setAttribute(attr,val);
                                        return;
                                    }
                                    if(fourth.hasChildNodes()){
                                        for (int i = 0; i<fourth.childNodes().count();i++){
                                            if(fourth.childNodes().at(i).isElement()){
                                                fifth = fourth.childNodes().at(i).toElement();
                                            }
                                            if(fifth.attribute("id")==id){
                                                fifth.setAttribute(attr,val);
                                                return;
                                            }
                                            if(fifth.hasChildNodes()){
                                                for (int i = 0; i<fifth.childNodes().count();i++){
                                                    if(fifth.childNodes().at(i).isElement()){
                                                        sixth = fifth.childNodes().at(i).toElement();
                                                    }
                                                    if(sixth.attribute("id")==id){
                                                        sixth.setAttribute(attr,val);
                                                        return;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void updatesvg::findElementVal( QDomElement& elem, QString id, QString val){

    //We go through five layers of children looking for chosen ID
    //Ideally we would just search recursively, but the function written
    //previously wasn't working. I'll get to it eventually lol

    QDomElement first;
    QDomElement second;
    QDomElement third;
    QDomElement fourth;

    if(elem.hasChildNodes()){
        for (int i = 0; i<elem.childNodes().count();i++){
            if(elem.childNodes().at(i).isElement()){
                first = elem.childNodes().at(i).toElement();
            }
            if(first.attribute("id")==id){
                first.childNodes().at(0).setNodeValue(val);
                return;
            }
            if(first.hasChildNodes()){
                for (int i = 0; i<first.childNodes().count();i++){
                    if(first.childNodes().at(i).isElement()){
                        second = first.childNodes().at(i).toElement();
                    }
                    if(second.attribute("id")==id){
                        second.childNodes().at(0).setNodeValue(val);
                        return;
                    }
                    if(second.hasChildNodes()){
                        for (int i = 0; i<second.childNodes().count();i++){
                            if(second.childNodes().at(i).isElement()){
                                third = second.childNodes().at(i).toElement();
                            }
                            if(third.attribute("id")==id){
                                third.childNodes().at(0).setNodeValue(val);
                                return;
                            }
                            if(third.hasChildNodes()){
                                for (int i = 0; i<third.childNodes().count();i++){
                                    if(third.childNodes().at(i).isElement()){
                                        fourth = third.childNodes().at(i).toElement();
                                    }
                                    if(fourth.attribute("id")==id){
                                        fourth.childNodes().at(0).setNodeValue(val);
                                        return;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
