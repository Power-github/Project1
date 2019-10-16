 # -*- coding: utf-8 -*-
import scrapy
from hengxin.items import HengxinItem
from scrapy import Request


class HengxinnovelSpider(scrapy.Spider):
    name = 'hengxinNovel'
    allowed_domains = ['top.hengyan.com']
    start_urls = ['http://top.hengyan.com/haokan']

    def parse(self, response):
        pass
        novel = HengxinItem()

        novel_items = response.xpath("//div[@id ='main']/div[@id = 'right']/div[@class= 'list']/ul")

        for item in novel_items:
            pass
            print(item.xpath("li[@class = 'num']/text()").get(),end = ' ')
            print(item.xpath("li[@class = 'bookname']/a/text()").get())

        novel['rank'] = item.xpath("li[@class = 'num']/text()").get()
        novel['title'] = item.xpath("li[@class = 'bookname']/a/text()").get()
        yield novel
            