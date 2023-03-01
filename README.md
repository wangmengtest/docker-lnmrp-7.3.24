## 安装说明
* 1 brew install docker  (安装docker，windows 自行安装即可)
* 2 bash docker-lnmrp-7.3.24  (进入本项目)
* 3 docker-compose up -d   (启动服务)


## 环境说明
本环境主要适用于轻享项目的环境构建

### 具体版本列表

* nginx nginx:stable-alpine
* redis redis:6-alpine
* mysql 5.7
* php 7.3.24
* yaf 3.2.5

### 配置项
* 容器前缀统 .env/APP_NAME
* mysql密码 .env/MYSQL_ROOT_PASSWORD
* redis密码 .env/REDIS_PASSWORD
* nginx 的配置文件放在 ./config/nginx
* php 的配置文件放在 ./config/php
* mysql 的配置文件放在 ./config/mysql

### 常规说明 
* 为方便安装扩展和导入数据，所有容易默认共享 ./share （例如导入数据库使用）
* mysql 数据文件放在 ./data 下
* nginx 日志统一放在 ./log/nginx 下
* 应用统一放在 ./app 下 分 前后端 （backend & html 用于配置前后端项目）
* backend 映射于容器的 /var/www/backend 目录下
* html 映射于容器的 /var/www/html 目录下




