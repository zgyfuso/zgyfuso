// components/Tabs/Tabs.js
Component({
    /**
     * 组件的属性列表
     */
    // 从父组件中解收的数据
    properties: {
        // aaa:{
        //     type:String,
        //     value:""
        // }
        tabs:{
            type:Array,
            value:[]
        }
    },

    /**
     * 组件的初始数据
     */
    data: {
        tabs:[
            {
                id:0,
                name:"校内资讯",
                isActive:true
            },
            {
                id:1,
                name:"时事热点",
                isActive:false
            }
        ]
    },

    
    // 存放事件回调函数时存放于data同层级下
    //组件中存放事件回调函数中存放于methods
    methods: {
        handleItemtap(e){
           /*1 绑定点击事件
             2 获取被点击索引
             3 获取数组
             4 对数组循环
              1 将每一个循环项改为false
              2 给当前选中的索引项激活即可
            5 点击事件触发时，触发自定义事件，同时传递父组件
            */
           const{index}=e.currentTarget.dataset;
        //    let{tabs}=this.data;
        //    tabs.forEach((v,i)=>i===index?v.isActive=true:v.isActive=false);

        //    this.setData({
        //        tabs
        //    })
            this.triggerEvent("itemChange",{index});
        }
    }
})
