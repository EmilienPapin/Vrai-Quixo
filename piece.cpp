#include "piece.h"

Piece::Piece() :
    QGraphicsPixmapItem(),
    x(0),
    y(0),
    couleur(0)
{
    QPixmap * image = new QPixmap(":/croix");
    this->setPixmap(* image);
}
