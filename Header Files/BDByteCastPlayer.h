//
//     Generated by private class-dump
//

@class BDByteCastConnection, BDLinkPlayer, NSString, BDDlnaPlayer, BDByteCastPlayerItem, LBLelinkPlayer, BDByteCastMirrorItem;
@protocol BDByteCastPlayerDelegate;

@interface BDByteCastPlayer : NSObject <LBLelinkPlayerDelegate, BDDlnaPlayerDelegate, BDLinkPlayerDelegate, NSObject> {
    BOOL _needCheckDLNAStatusToPlay;
    BOOL _needBDLinkCheckUrlRedirect;
    BOOL _needBDDLNACheckUrlRedirect;
    BOOL _hasLelinkPlayingStarted;
    BOOL _hasLelinkSentStartCommand;
    BOOL _hasPlayingStarted;
    BOOL _hasReportDuration;
    long long _videoMirrorTransProtocol;
    id<BDByteCastPlayerDelegate> _delegate;
    BDByteCastConnection *_connection;
    BDByteCastPlayerItem *_lastPlayerItem;
    BDByteCastMirrorItem *_lastMirrorItem;
    double _statusQueryInterval;
    LBLelinkPlayer *_lelinkPlayer;
    id /* block */ _leboPlayCompletion;
    BDByteCastPlayerItem *_leboLastPlayerItem;
    BDDlnaPlayer *_dlnaPlayer;
    BDLinkPlayer *_bdlinkPlayer;
    unsigned long long _currentPlayType;
    long long _currentPlayDevicePort;
}

@property (retain, nonatomic) LBLelinkPlayer *lelinkPlayer;
@property (nonatomic) BOOL hasLelinkPlayingStarted;
@property (nonatomic) BOOL hasLelinkSentStartCommand;
@property (copy, nonatomic) id /* block */ leboPlayCompletion;
@property (retain, nonatomic) BDByteCastPlayerItem *leboLastPlayerItem;
@property (retain, nonatomic) BDDlnaPlayer *dlnaPlayer;
@property (retain, nonatomic) BDLinkPlayer *bdlinkPlayer;
@property (retain, nonatomic) BDByteCastPlayerItem *lastPlayerItem;
@property (retain, nonatomic) BDByteCastMirrorItem *lastMirrorItem;
@property (nonatomic) BOOL hasPlayingStarted;
@property (nonatomic) unsigned long long currentPlayType;
@property (nonatomic) long long currentPlayDevicePort;
@property (nonatomic) BOOL hasReportDuration;
@property (weak, nonatomic) id<BDByteCastPlayerDelegate> delegate;
@property (retain, nonatomic) BDByteCastConnection *connection;
@property (nonatomic) BOOL needCheckDLNAStatusToPlay;
@property (nonatomic) BOOL needBDLinkCheckUrlRedirect;
@property (nonatomic) BOOL needBDDLNACheckUrlRedirect;
@property (nonatomic) BOOL enableStatusQuery;
@property (nonatomic) double statusQueryInterval;
@property (nonatomic) long long videoMirrorTransProtocol;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)extraDictionary;
- (void)setPlaySpeed:(float)arg0;
- (unsigned long long)playWithItem:(id)arg0;
- (unsigned long long)resumePlay;
- (void)addVolume;
- (void)reduceVolume;
- (void)setPlaySpeedWithRate:(unsigned long long)arg0;
- (void)lelinkPlayer:(id)arg0 onError:(id)arg1;
- (void)lelinkPlayer:(id)arg0 playStatus:(unsigned long long)arg1;
- (void)lelinkPlayer:(id)arg0 progressInfo:(id)arg1;
- (BOOL)canPlayMedia:(unsigned long long)arg0;
- (void)sendMessage:(id)arg0 withCallback:(id /* block */)arg1;
- (void)setStatusQueryInterval:(double)arg0;
- (double)statusQueryInterval;
- (void)setNeedBDDLNACheckUrlRedirect:(BOOL)arg0;
- (void)setEnableStatusQuery:(BOOL)arg0;
- (unsigned long long)playWithItem:(id)arg0 completionBlock:(id /* block */)arg1;
- (BOOL)enableStatusQuery;
- (void)trackServiceWithServiceName:(id)arg0 andCategory:(id)arg1;
- (void)receiveErrorCodeNotification:(id)arg0;
- (BOOL)needBDLinkCheckUrlRedirect;
- (BOOL)needBDDLNACheckUrlRedirect;
- (BOOL)needCheckDLNAStatusToPlay;
- (id)lelinkPlayer;
- (void)setHasLelinkPlayingStarted:(BOOL)arg0;
- (void)setHasLelinkSentStartCommand:(BOOL)arg0;
- (id)extraDictionaryForLeLink;
- (id /* block */)leboPlayCompletion;
- (id)leboLastPlayerItem;
- (void)setLeboPlayCompletion:(id /* block */)arg0;
- (void)setLeboLastPlayerItem:(id)arg0;
- (id)dlnaPlayer;
- (id)bdlinkPlayer;
- (void)setHasPlayingStarted:(BOOL)arg0;
- (void)setHasReportDuration:(BOOL)arg0;
- (BOOL)hasLelinkPlayingStarted;
- (id)playerStatusDescWithLeLinkPlayStatus:(long long)arg0 dlnaPlayStatus:(long long)arg1 bdlinkPlayStatus:(long long)arg2;
- (BOOL)hasPlayingStarted;
- (BOOL)hasLelinkSentStartCommand;
- (BOOL)hasReportDuration;
- (void)trackPlayDurationWithSdkType:(unsigned long long)arg0 duration:(long long)arg1;
- (void)dlnaPlayer:(id)arg0 onError:(id)arg1;
- (void)dlnaPlayer:(id)arg0 playStatus:(unsigned long long)arg1;
- (void)dlnaPlayer:(id)arg0 progressInfo:(id)arg1;
- (void)dlnaPlayer:(id)arg0 mediaInfo:(id)arg1;
- (void)linkPlayer:(id)arg0 onError:(id)arg1;
- (void)linkPlayer:(id)arg0 playStatus:(unsigned long long)arg1;
- (void)linkPlayer:(id)arg0 progressInfo:(id)arg1;
- (void)setNeedCheckDLNAStatusToPlay:(BOOL)arg0;
- (void)setNeedBDLinkCheckUrlRedirect:(BOOL)arg0;
- (void)checkConnectionWithMaxCount:(long long)arg0 timeout:(double)arg1 retryInterval:(double)arg2 completion:(id /* block */)arg3;
- (long long)videoMirrorTransProtocol;
- (void)setVideoMirrorTransProtocol:(long long)arg0;
- (unsigned long long)startMirrorWithItem:(id)arg0;
- (void)stopMirror;
- (void)sendVideoData:(id)arg0;
- (void)sendMetaMessage:(id)arg0;
- (void)setCastToken:(id)arg0;
- (void)connectWithItem:(id)arg0;
- (void)requestCast;
- (void)castCancel;
- (id)lastMirrorItem;
- (void)setLastMirrorItem:(id)arg0;
- (void)setLelinkPlayer:(id)arg0;
- (void)setDlnaPlayer:(id)arg0;
- (void)setBdlinkPlayer:(id)arg0;
- (unsigned long long)currentPlayType;
- (void)setCurrentPlayType:(unsigned long long)arg0;
- (long long)currentPlayDevicePort;
- (void)setCurrentPlayDevicePort:(long long)arg0;
- (void)disconnect;
- (void).cxx_destruct;
- (void)setConnection:(id)arg0;
- (id)initWithConnection:(id)arg0;
- (void)stop;
- (id)delegate;
- (id)connection;
- (void)setVolume:(long long)arg0;
- (void)setDelegate:(id)arg0;
- (void)pause;
- (void)seekTo:(long long)arg0;
- (void)setupPlayer;
- (void)setLastPlayerItem:(id)arg0;
- (id)lastPlayerItem;
- (void)sendAudioData:(id)arg0;

@end
