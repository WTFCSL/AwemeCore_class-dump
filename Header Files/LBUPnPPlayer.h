//
//     Generated by private class-dump
//

@class LBUPnPConnection, NSString, NSTimer, LEBUPnPDevice, LBLelinkProgressInfo, NSArray;
@protocol LBLelinkPlayerItemInterface, LEBUPnPPlayerDelegate;

@interface LBUPnPPlayer : NSObject {
    BOOL _volumeAdded;
    BOOL _volumeReduced;
    LBUPnPConnection *_upnpConnection;
    id<LBLelinkPlayerItemInterface> _item;
    LEBUPnPDevice *_device;
    NSString *_sessionId;
    id<LEBUPnPPlayerDelegate> _delegate;
    NSArray *_monitorActions;
    NSTimer *_infoTimer;
    long long _timerCount;
    long long _currentVolume;
    NSString *_urlId;
    unsigned long long _playStatus;
    LBLelinkProgressInfo *_progressInfo;
    long long _startPosition;
    NSString *_statPlayingUrlId;
}

@property (retain, nonatomic) NSTimer *infoTimer;
@property (nonatomic) long long timerCount;
@property (nonatomic) BOOL volumeAdded;
@property (nonatomic) BOOL volumeReduced;
@property (nonatomic) long long currentVolume;
@property (copy, nonatomic) NSString *urlId;
@property (nonatomic) unsigned long long playStatus;
@property (retain, nonatomic) LBLelinkProgressInfo *progressInfo;
@property (nonatomic) long long startPosition;
@property (copy, nonatomic) NSString *statPlayingUrlId;
@property (retain, nonatomic) LBUPnPConnection *upnpConnection;
@property (retain, nonatomic) id<LBLelinkPlayerItemInterface> item;
@property (retain, nonatomic) LEBUPnPDevice *device;
@property (copy, nonatomic) NSString *sessionId;
@property (weak, nonatomic) id<LEBUPnPPlayerDelegate> delegate;
@property (retain, nonatomic) NSArray *monitorActions;

- (unsigned long long)playStatus;
- (void)startPlay;
- (void)setPlayStatus:(unsigned long long)arg0;
- (id)upnpConnection;
- (void)playWithItem:(id)arg0;
- (void)addVolume;
- (void)reduceVolume;
- (void)setMonitorActions:(id)arg0;
- (void)setUpnpConnection:(id)arg0;
- (void)stopInfoTimer;
- (void)setVolumeAdded:(BOOL)arg0;
- (void)setVolumeReduced:(BOOL)arg0;
- (id)initWithUPnPConnection:(id)arg0;
- (void)timerSelector;
- (void)setInfoTimer:(id)arg0;
- (void)setTimerCount:(long long)arg0;
- (void)getPositionInfo;
- (void)getTransportInfo;
- (void)setStatPlayingUrlId:(id)arg0;
- (void)setUrlId:(id)arg0;
- (id)urlId;
- (void)setAVTransportURL:(id)arg0 withMediaType:(id)arg1 title:(id)arg2 idString:(id)arg3 resolution:(id)arg4;
- (void)setAVTransportURL:(id)arg0 withMediaType:(id)arg1 title:(id)arg2;
- (void)postRequestWith:(id)arg0 callBlock:(id /* block */)arg1;
- (void)startInfoTimer;
- (void)seekToTarget:(id)arg0 Unit:(id)arg1;
- (void)setVolumeWithValue:(id)arg0;
- (void)parseRequestResponseData:(id)arg0;
- (void)resultsWith:(id)arg0;
- (void)_SetAVTransportURIResponse;
- (void)_GetVolumeSuccessWith:(id)arg0;
- (void)_GetPositionInfoResponseWith:(id)arg0;
- (void)_GetTransportInfoResponseWith:(id)arg0;
- (void)playStatusStoppedOrCommpletedStatisticalClick;
- (void)playStatusPlayingStatisticalClick;
- (id)statPlayingUrlId;
- (void)setAVTransportURL:(id)arg0 withMediaType:(id)arg1;
- (id)monitorActions;
- (id)infoTimer;
- (BOOL)volumeAdded;
- (BOOL)volumeReduced;
- (id)item;
- (id)init;
- (void)setCurrentVolume:(long long)arg0;
- (void)setSessionId:(id)arg0;
- (void).cxx_destruct;
- (id)sessionId;
- (void)stop;
- (id)delegate;
- (long long)currentVolume;
- (void)setVolume:(long long)arg0;
- (void)setDevice:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)setItem:(id)arg0;
- (id)device;
- (long long)startPosition;
- (void)setStartPosition:(long long)arg0;
- (void)getVolume;
- (void)seek:(float)arg0;
- (id)progressInfo;
- (void)setProgressInfo:(id)arg0;
- (long long)timerCount;

@end
