#ifndef TRIANGLEITEM_H
#define TRIANGLEITEM_H


#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>


class TriangleItem : public QGraphicsItem
{
public:
    TriangleItem();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

protected:
    void advance(int phase);

private:
    qreal angle;
    qreal speed;
    void doCollision();

};

#endif // TRIANGLEITEM_H
