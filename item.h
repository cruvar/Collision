#ifndef ITEM_H
#define ITEM_H

#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>


class Item : public QGraphicsItem
{
public:
    Item();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

protected:
    void advance(int phase);

private:
    qreal angle;
    qreal speed;
    void doCollision();

};

#endif // ITEM_H
