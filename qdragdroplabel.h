#ifndef QDRAGDROPLABEL_H
#define QDRAGDROPLABEL_H

#include <QObject>
#include <QWidget>
#include <QLabel>
#include <QFont>

class QDragDropLabel : public QLabel
{
    Q_OBJECT

public:
    QDragDropLabel(QWidget *parent=nullptr): QLabel(parent){
        QFont font = parent->font();
        font.setPixelSize(12);
        setFont(font);

        setAcceptDrops(true);
    }

    void dragEnterEvent(QDragEnterEvent *event);
    void dragLeaveEvent(QDragLeaveEvent *event);
    void dragMoveEvent(QDragMoveEvent *event);
    void dropEvent(QDropEvent *event);
    void mousePressEvent(QMouseEvent *ev);
};

#endif // QDRAGDROPLABEL_H
