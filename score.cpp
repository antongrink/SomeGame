#include "score.h"

Score::Score(QGraphicsTextItem* parent) : QGraphicsTextItem(parent)
{
    score = 0;

    setPlainText(QString("Score") + QString::number(score));
    setDefaultTextColor(Qt::red);
    setFont(QFont("times",16));
}

void Score::increase()
{
    score++;
    setPlainText(QString("Score") + QString::number(score));
}
int Score::getScore()
{
    return score;
}
