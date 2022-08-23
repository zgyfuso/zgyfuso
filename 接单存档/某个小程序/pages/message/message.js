// pages/function/function.js

//引用用来发送请求的代码
import {
    request
} from "../../request/message";

Page({

    /**
     * 页面的初始数据
     */
    data: {
        //最常使用标签字符串
        // html:[

        //     name1:"div",
        //     attrs:{
        //     class:"my_div",
        //     style:"color:red"
        //     }

        // ]

        //轮播图数组


        tabs: [{
                id: 0,
                name: "校内资讯",
                isActive: true
            },
            {
                id: 1,
                name: "时事热点",
                isActive: false
            },
        ],
        swiperList: []

    },
    handleItemChange(e) {
        // console.log(e);
        const {
            index
        } = e.detail;
        let {
            tabs
        } = this.data;
        tabs.forEach((v, i) => i === index ? v.isActive = true : v.isActive = false);

        this.setData({
            tabs
        })
    },



    /**
     * 生命周期函数--监听页面加载
     */
    onLoad: function (options) {
        //请求获取轮播图数据
        //    优化代码 防止异步请求回调陷阱  通过es6 promise技术
        // wx-wx.request({
        //   url: 'https://api-hmugo-web.itheima.net/api/public/v1/home/swiperdata',//接口地址

        //   success: (result) => {
        //       console.log(result);
        //    this.setData({
        //     swiperList:result.data.message
        //    })


        //   },
        //   fail: (res) => {},
        //   complete: (res) => {},
        //   //回调函数
        // })

        //    优化代码 防止异步请求回调陷阱  通过es6 promise技术
        // 以上注释代码依旧可用  后期还可优化，但是我学不动了  2021-12-15-zgy
        request({
                url: "https://api-hmugo-web.itheima.net/api/public/v1/home/swiperdata"
            })
            .then(result => {
                this.setData({
                    swiperList: result.data.message
                })
            })
        // .then()  后续扩展代码
    },

    /**
     * 生命周期函数--监听页面初次渲染完成
     */
    onReady: function () {

    },

    /**
     * 生命周期函数--监听页面显示
     */
    onShow: function () {

    },

    /**
     * 生命周期函数--监听页面隐藏
     */
    onHide: function () {

    },

    /**
     * 生命周期函数--监听页面卸载
     */
    onUnload: function () {

    },

    /**
     * 页面相关事件处理函数--监听用户下拉动作
     */
    onPullDownRefresh: function () {

    },

    /**
     * 页面上拉触底事件的处理函数
     */
    onReachBottom: function () {

    },

    /**
     * 用户点击右上角分享
     */
    onShareAppMessage: function () {

    }
})