Page({
  data: {
    latitude: 36.180064816369445,
    longitude: 117.12375868774413,
    markers: [{
      iconPath: '/images/navi.png',
      id: 0,
      latitude: 36.180064816369445,
      longitude: 117.12375868774413,
      width: 50,
      height: 50
    }]

  },
  markertap: function () {
    wx.openLocation({
      latitude: this.data.latitude,
      longitude: this.data.longitude,
      name: '山东科技大学',
      address: '山东省 泰安市'
    })
  }
})