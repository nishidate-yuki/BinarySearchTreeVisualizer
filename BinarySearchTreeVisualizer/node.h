#ifndef NODE_H
#define NODE_H

#include <QtDebug>
#include <QVector2D>
#include <QGraphicsItem>
#include "graphicscircle.h"

class Node
{
public:
    int num;
    Node *left, *right;

    Node(int num);
    bool operator==(const Node &node);
    bool operator!=(const Node &node);
    bool insert(Node *node);
    bool remove(Node *node);
    int  calcHeight();
    bool isEqual(Node *node);
    bool isAVL();
    bool exists(Node *node);
    Node *getMax();

    // for Debug
    void print();

    // for Graphics
//    Node *parent;
    QVector2D position;
    QGraphicsLineItem *edge;
    QGraphicsLineItem *leftEdge;
    QGraphicsLineItem *rightEdge;
//    QGraphicsEllipseItem *circle;
    GraphicsCircle *circle;
    QGraphicsTextItem *number;

    // for Other Tree Type
//    bool insertCompleteBST(Node *node);

public slots:
    void move();

};

#endif // NODE_H
