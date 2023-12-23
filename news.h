#ifndef NEWS_H
#define NEWS_H
#include <QString>

class News
{
protected:
    QString news;
    QString date;
public:
    News();

    News(QString news, QString date);

    QString getNews() const;
    void setNews(QString news);

    QString getDate() const;
    void setDate(QString date);

    ~News();
};

#endif // NEWS_H
