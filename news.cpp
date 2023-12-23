#include "news.h"

News::News()
{

}

News::News(QString news, QString date)
{
    this->news=news;
    this->date=date;
}

QString News::getNews() const
{
    return news;
}

void News::setNews(QString news)
{
    this->news=news;

}

QString News::getDate() const
{
    return date;
}

void News::setDate(QString date)
{
    this->date=date;
}

News::~News()
{

}

