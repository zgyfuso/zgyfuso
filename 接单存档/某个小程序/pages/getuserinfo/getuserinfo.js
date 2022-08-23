// pages/getuserinfo/getuserinfo.js
Page({

    /**
     * 页面的初始数据
     */
    data: {
        isShow:false,
        userInfo:{}
    },
    getUserInfo(){
        let that=this;
        wx.getUserProfile({
          desc: '获取用户信息',
          success(res){
            console.log(res)
            let userinfo=res.userInfo
            that.setData({
                isShow:true,
                userinfo: userinfo
            })
          },
          fail(){
            wx.showToast({
              title: '同意获取信息后方可使用',
              icon:"none"
            })
          }
        })
    }
})