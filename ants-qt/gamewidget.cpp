#include "gamewidget.h"
#include <QTimer>

GameWidget::GameWidget(QWidget *parent) : QWidget(parent),
    timer(new QTimer(this))
{
    timer->setInterval(300);
    size = 10;
    cell_size = 100;
    m_masterColor = "#FFF";
    m_otro = "#00FF00";
    cells = new bool*[size];
    x = 3;
    y = 4;
    empezar=false;
    direction = 's';
    for (short i = 0; i < size; i++) {
        cells[i] = new bool[size];
        memset(cells, false, sizeof(bool)*static_cast<unsigned long>(size));
    }
    connect(timer, SIGNAL(timeout()), this, SLOT(animate()));
    qDebug("Tam %d x %d", width(), height());
}

void GameWidget::animate() {
    update();
}

void GameWidget::startGame() {
    qDebug("startGame() Tam %d x %d", width(), height());
    empezar = true;
    timer->start();
}

void GameWidget::paintEvent(QPaintEvent *){
    qDebug("HOLA");
    QPainter p(this);
    paintGrid(p);
    if (empezar)
        paintAnts(p);
}

void GameWidget::paintAnts(QPainter &p) {

    qreal left = (qreal)(cell_size*x); // margin from left
    qreal top  = (qreal)(cell_size*y); // margin from top
    QRectF r(left, top, (qreal) cell_size, (qreal)cell_size);
    if (cells[y][x]) {
        p.fillRect(r, QBrush(m_masterColor)); // fill cell with brush of main color
    } else {
        p.fillRect(r, QBrush(m_otro)); // fill cell with brush of main color
    }
    cells[y][x] = !cells[y][x];
     mover(cells[y][x]);
}

void GameWidget::mover(bool tipo) {
    if (tipo) {
        switch (direction) {
            case 's':
                direction = 'o';
            break;
            case 'o':
                direction = 'n';
            break;
            case 'n':
                direction = 'e';
            break;
            case 'e':
                direction = 's';
            break;
        }
    } else {
        switch (direction) {
            case 's':
                direction = 'e';
            break;
            case 'e':
                direction = 'n';
            break;
            case 'n':
                direction = 'o';
            break;
            case 'o':
                direction = 's';
            break;
        }
    }
    if (direction == 's') {
        ++y;
    } else if (direction == 'e')
        x++;
    else if (direction == 'n')
        y--;

    if (x<0)
        x = size-1;
    else if (x==size)
        x = 0;
    if (y<0)
        y = size-1;
    else if (y==size)
        y = 0;
}

void GameWidget::paintGrid(QPainter &p) {
    QRect borders(0, 0, width()-1, height()-1); // borders of the universe
    QColor gridColor = m_masterColor; // color of the grid
    gridColor.setAlpha(10); // must be lighter than main color
    p.setPen(gridColor);
    for(short k = cell_size; k <= width(); k += cell_size)
        p.drawLine(k, 0, k, height());
    for(short k = cell_size; k <= height(); k += cell_size)
        p.drawLine(0, k, width(), k);
    p.drawRect(borders);
}
