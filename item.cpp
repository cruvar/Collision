#include "item.h"
#include "dialog.h"

Item::Item()
{
    //rendom start rotation
    angle = (qrand() % 360);
    setRotation(angle);

    //set the speed
    speed = 5;

    //random start position
    int startX = 0;
    int startY = 0;

    if(qrand() % 1)
    {
        startX = (qrand() % 200);
        startY = (qrand() % 200);
    }
    else
    {
        startX = (qrand() % -100);
        startY = (qrand() % -100);
    }

    setPos(mapToParent(startX,startY));
}

QRectF Item::boundingRect() const
{
    return QRect(0,0,20,20);
}

void Item::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF rect = boundingRect();
    QBrush brush(Qt::gray);

    //basic colision detection

    if(scene()->collidingItems(this).isEmpty())
    {
        //no collision
        brush.setColor(Qt::green);
    }
    else
    {
        //collision
        brush.setColor(Qt::red);

        //set the position
        doCollision();
    }

    painter->fillRect(rect, brush);
    painter->drawRect(rect);
}

void Item::advance(int phase)
{
    if(!phase) return;

    QPointF location = this->pos();
    setPos(mapToParent(0,-(speed)));
}

void Item::doCollision()
{
    //set a new position

    //change angle
    if(qrand() % 1)
    {
        setRotation(rotation() + (180 + (qrand() % 10)));
    }
    else
    {
        setRotation(rotation() + (180 + (qrand() % -10)));
    }

    QPointF newpoint = mapToParent(-(boundingRect().width()), -(boundingRect().width() + 2));

    if(!scene()->sceneRect().contains(newpoint))
    {
        //move it back in bounds
        newpoint = mapToParent(0,0);
    }
    else
    {
        //set the new position
        setPos(newpoint);
    }
}
