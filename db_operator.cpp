#include "db_operator.h"

db_operator::db_operator(QObject *parent)
    : QObject{parent}
{}

void db_operator::init()
{
    // 创建数据库连接
    m_db = QSqlDatabase::addDatabase("QMYSQL");

    m_db.setHostName("127.0.0.1");
    m_db.setDatabaseName("addressbook");
    m_db.setUserName("root");
    m_db.setPassword("qazwsxcde");


    // 尝试连接数据库
    if (!m_db.open())
    {
        qDebug() << "Error: Failed to connect to the database";
    } else {
        qDebug() << "Database connected successfully";
    }
}
