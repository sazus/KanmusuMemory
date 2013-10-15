#ifndef FAVORITEMENU_H
#define FAVORITEMENU_H

#include <QObject>
#include <QMenu>

class FavoriteMenu : public QObject
{
    Q_OBJECT
public:
    explicit FavoriteMenu(QObject *parent);

    void load(QMenu *menu);

signals:
    void selectFav(const QUrl &url);

public slots:
    void clickItem();

private:
    bool addItem(QMenu *parent, QJsonArray *array);
};

#endif // FAVORITE_H
