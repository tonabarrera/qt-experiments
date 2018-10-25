#ifndef GAMEWIDGET_H
#define GAMEWIDGET_H

#include <QWidget>
#include <QPainter>

class GameWidget : public QWidget
{
    Q_OBJECT
public:
    explicit GameWidget(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *);

signals:

public slots:
    void startGame();

private slots:
    void animate();
    void paintGrid(QPainter &p);
    void paintAnts(QPainter &p);

private:
    QTimer* timer;
    bool** cells;
    short size;
    QColor m_masterColor;
    QColor m_otro;
    short cell_size;
    short x;
    short y;
    char direction;
    void mover(bool tipo);
    bool empezar;
};

#endif // GAMEWIDGET_H
