Page({
  data: {
    isPlayingMusic: false
  },
  bgm: null,
  music_url: 'https://m8.music.126.net/20191016114957/ba4f403b00a9997a209e352f5e74ff37/ymusic/225a/0b65/aa03/90387f0b1f4558c67fe72c77f39e5b62.mp3',
  music_coverImgUrl:'https://images.shobserver.com/news/news/2019/2/3/3a77df79-4827-4ef4-ac17-2bae12bc0b33.jpg',
  onReady: function () {
  this.bgm = wx.getBackgroundAudioManager()
  this.bgm.title = 'merry me'
  this.bgm.epname = 'wedding'
this.bgm.singer = 'singer'
this.bgm.coverImgUrl = this.music_coverImgUrl
this.bgm.onCanplay(() => {
this.bgm.pause()
    })
   
    this.bgm.src = this.music_url
  },

  play: function () {
    if (this.data.isPlayingMusic) {
      this.bgm.pause()
    } else {
      this.bgm.play()
    }
    this.setData({
      isPlayingMusic: !this.data.isPlayingMusic
    })
  },

  callGroom: function () {
    wx.makePhoneCall({
      phoneNumber: '13700000000'
    })
  },

  callBride: function () {
    wx.makePhoneCall({
      phoneNumber: '15600000000'
    })
  }
})