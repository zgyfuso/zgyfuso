// pages/setting/setting.js
Page({
  handleGetUserInfo(e) {
    // console.log(e);
    const {
      encryptedData,
      rawData,
      iv,
      signature
    } = e.detail;
    wx - wx.login({
      timeout: 10000,
      success: (result) => {
        //   console.log(result);
        const {
          code
        } = result;
      },
      fail: (res) => {},
      complete: (res) => {},
    })
  },


  gotoPage: function (options) {   
    wx.navigateTo({      
        url: '../Developer/Developer',    //要跳转到的页面路径
 })  
},
  /**
   * 页面的初始数据
   */
  data: {
    isShow: false,
    userInfo: {}

  },

  // onShow(){
  //   const userinfo=wx.getStorageSync("userinfo");
  //   this.setData({
  //     userinfo
  //   })
  // },

  // 以下为12-16日志标记代码
  onLoad() {
    let isShow = wx.getStorageSync('isShow') || false
    let userinfo = wx.getStorageSync('userinfo')
    if (isShow) {
      this.setData({
        isShow: true,
        userinfo
      })
    }
  },

  getUserInfo() {
    let that = this;
    wx.getUserProfile({
      desc: '获取用户信息',
      success(res) {
        console.log(res)
        let userinfo = res.userInfo
        that.setData({
          isShow: true,
          userinfo: userinfo
        })
        wx.setStorageSync('isShow', true)
        wx.setStorageSync('userinfo', userinfo)
      },
      fail() {
        wx.showToast({
          title: '同意获取信息后方可使用',
          icon: "none"
        })
      }
    })
  }

})