// pages/test/test.js
Page({

    /**
     * 页面的初始数据  
     */
    data: {
        // number:10000,
        // flag:true,
        // array:{
        //     first:1,
        //     second:2,
        //     third:3
        // },
        // list:[
        //     {
        //         id:0,
        //         init:"hhhh"
        //     },
        //     {
        //         id:1,
        //         init:"llll"
        //     }
        // ]
        num:0,
        helloworld:"你好"
    },
    handinput(e)
    {
        //console.log(e);
        //console.log(e.detail.value)
        this.setData({
            num:e.detail.value//双向链接代码
        })
    },
     //加减按钮绑定
    handletap(e){
        // console.log(e);
        const operation=e.currentTarget.dataset.operation;
        this.setData({
            num:this.data.num+operation//双向链接代码
        })
    },
    /**
     * 生命周期函数--监听页面加载
     */
    onLoad: function (options) {

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