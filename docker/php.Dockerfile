FROM php:7.3.24-fpm

WORKDIR /var/www/backend

RUN apt-get update && apt-get -y install \
    libpng-dev \
    libmcrypt-dev \
    libjpeg62-turbo-dev \
    libfreetype6-dev \
    zlib1g-dev \
    libxml2-dev \
    libonig-dev \
    libzip-dev \
    locales \
    jpegoptim \
    optipng \
    pngquant \
    gifsicle \
    vim \
    zip \
    unzip \
    git \
    curl

RUN apt-get clean && rm -rf /var/lib/apt/lists/*

# install yaf
COPY ./yaf-3.2.5 /root/yaf-3.2.5
RUN cd /root/yaf-3.2.5 && phpize && ./configure && make && make install
RUN docker-php-ext-enable yaf
# RUN cd /usr/local/etc/php/conf.d && echo "extension=yaf.so" > docker-php-ext-yaf.ini

# install other php ext
RUN docker-php-ext-install pdo_mysql mysqli mbstring zip exif pcntl sockets bcmath 
RUN docker-php-ext-configure gd && docker-php-ext-install -j$(nproc) gd
RUN pecl install -o -f redis && docker-php-ext-enable redis

# install composer
COPY ./composer.install /root
RUN cd /root && php composer.install --install-dir=/usr/local/bin --filename=composer
#RUN curl -sS https://getcomposer.org/installer | php -- --install-dir=/usr/local/bin --filename=composer

# add php exec user
RUN groupadd -g 1000 www && useradd -u 1000 -ms /bin/bash -g www www && chown -R www:www /var/www/backend

USER www

EXPOSE 9000

CMD ["php-fpm"]
