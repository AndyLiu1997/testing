#!/usr/bin/python3
#-*- coding:utf-8 -*-
#Date:13-10-2017
#Author:jhinno
#Version=.3

import sys
sys.path.append("..")
from tools.get_access_token import * 
from tools.tools import *
import unittest



class TestPing(unittest.TestCase):
    """测试 appform 连接资源 case："""

    def setUp(self):
        print("开始测试appform资源是否可用【ping api】 ...")
     

    def actions(self, arg1, arg2):
        data_json = os.path.join(os.path.abspath('..'), "jhappform_api/test_data/data.json")
        datas = Tools().readi_test_data(data_json)
        self.url = datas['other_param'][0]['baseUrl'] + "ping?token=" + arg1 
        self.result = Tools().access_web(self.url)
        if arg2 == "1":    
            self.assertEqual(self.result['result'], "success", msg = "token值不正确，appform 资源不可用！")
        else:
            self.assertNotEqual(self.result['result'], "success", msg = "token值不正确，appform 资源不可用！")

    @staticmethod
    def getTestFunc(arg1 , arg2, arg3):
        def func(self):
            self.actions(arg1, arg2)
        return func

    def tearDown(self):
        print("【ping api】 访问的URL地址为：")
        print(self.url)
        print("【ping api】 测试返回值：")
        print(self.result)
        print("【ping api】 测试结束...")


def generateTestCases():
    t = Tools()
    
    data_json = os.path.join(os.path.abspath('..'), "jhappform_api/test_data/data.json")
    data_case = Tools().readi_test_data(data_json)
    arglists = []
    lenth = len(data_case['ping'][0])
    for i in range(lenth):
        no = "_no_" + str(i)
        cse = "case" + str(i + 1)
        png = data_case['ping'][0][cse][0]['data']['token']
        ext = data_case['ping'][0][cse][0]['data']['expect']
        arglists.append((png, ext, no))
    arglists.append((t.read_token(), str(1) ,"_" + str(lenth)))
    for args in arglists:
        setattr(TestPing, 'test_ping_{1}{2}{2}'.format(args[0], args[1], args[2]), TestPing.getTestFunc(*args) )


s = generateTestCases()



if __name__ == '__main__':
	unittest.main()
