#ifndef ELLIPSEITEM_H
#define ELLIPSEITEM_H


#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>


class EllipseItem : public QGraphicsItem
{
public:
    EllipseItem();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

protected:
    void advance(int phase);

private:
    qreal angle;
    qreal speed;
    void doCollision();

};

#endif // ELLIPSEITEM_H
