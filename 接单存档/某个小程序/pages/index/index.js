//Page Object
Page({
    data: {
        
    },
    //options(Object)
    gotoPage: function (options) {   
        wx.navigateTo({      
            url: '../qndxx/qndxx',    //要跳转到的页面路径
     })  
    },
    gotoPage_: function (options) {   
        wx.navigateTo({      
            url: '../dangke/dangke',    //要跳转到的页面路径
     })  
    },
    onLoad: function(options){
        
    },
    onReady: function(){
        
    },
    onShow: function(){
        
    },
    onHide: function(){

    },
    onUnload: function(){

    },
    onPullDownRefresh: function(){

    },
    onReachBottom: function(){

    },
    onShareAppMessage: function(){

    },
    onPageScroll: function(){

    },
    //item(index,pagePath,text)
    onTabItemTap:function(item){

    }
});