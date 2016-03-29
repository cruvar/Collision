#ifndef RECTITEM_H
#define RECTITEM_H


#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>


class RectItem : public QGraphicsItem
{
public:
    RectItem();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

protected:
    void advance(int phase);

private:
    qreal angle;
    qreal speed;
    void doCollision();

};

#endif // RECTITEM_H
