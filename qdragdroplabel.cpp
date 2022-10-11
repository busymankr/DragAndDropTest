#include "qdragdroplabel.h"
#include <QDebug>
#include <QDropEvent>
#include <QMimeData>
#include <QApplication>
#include <QStringList>
#include <QDragMoveEvent>
#include <QDragEnterEvent>

void QDragDropLabel::dragEnterEvent(QDragEnterEvent *e)
{
    if (e->mimeData()->hasUrls()) {
        e->acceptProposedAction();
    }
}

void QDragDropLabel::dragLeaveEvent(QDragLeaveEvent *e)
{
    Q_UNUSED(e);
}

void QDragDropLabel::dragMoveEvent(QDragMoveEvent *e)
{
    Q_UNUSED(e);
}

void QDragDropLabel::dropEvent(QDropEvent *e)
{
    foreach (const QUrl &url, e->mimeData()->urls()) {
        QString fileName = url.toLocalFile();
        qDebug() << "Dropped file:" << fileName;
    }
}

void QDragDropLabel::mousePressEvent(QMouseEvent *e)
{
    Q_UNUSED(e);
}
