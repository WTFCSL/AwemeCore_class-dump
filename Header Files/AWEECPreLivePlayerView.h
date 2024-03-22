//
//     Generated by private class-dump
//

@class UIImageView, NSString, AWEAwemeModel;
@protocol IESECMallLiveDelegate, IESLivePlayerProtocol;

@interface AWEECPreLivePlayerView : UIView <IESLivePlayerControllerDelegate> {
    BOOL _autoPlay;
    BOOL _enableBGPlay;
    BOOL _needPreload;
    BOOL _autoLifecycle;
    BOOL _respondsSEI;
    double _startTime;
    double _playTime;
    NSString *_posterURL;
    NSString *_fitMode;
    double _rate;
    NSString *_roomID;
    id<IESLivePlayerProtocol> _innerPlayer;
    UIImageView *_coverImageView;
    unsigned long long _currentPlayState;
    id<IESECMallLiveDelegate> _delegate;
    NSString *_streamData;
    NSString *_sdkKey;
    AWEAwemeModel *_awemeModel;
}

@property (retain, nonatomic) id<IESLivePlayerProtocol> innerPlayer;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (nonatomic) unsigned long long currentPlayState;
@property (weak, nonatomic) id<IESECMallLiveDelegate> delegate;
@property (nonatomic) BOOL respondsSEI;
@property (copy, nonatomic) NSString *streamData;
@property (copy, nonatomic) NSString *sdkKey;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) BOOL enableHardDecode;
@property (nonatomic) BOOL mute;
@property (nonatomic) BOOL autoPlay;
@property (nonatomic) double volume;
@property (nonatomic) double startTime;
@property (nonatomic) double playTime;
@property (nonatomic) BOOL enableBGPlay;
@property (copy, nonatomic) NSString *posterURL;
@property (copy, nonatomic) NSString *fitMode;
@property (nonatomic) BOOL needPreload;
@property (nonatomic) BOOL autoLifecycle;
@property (nonatomic) double rate;
@property (copy, nonatomic) NSString *roomID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (void)setAwemeModel:(id)arg0;
- (void)player:(id)arg0 loadStateDidChange:(unsigned long long)arg1;
- (void)player:(id)arg0 didReceiveError:(id)arg1;
- (void)player:(id)arg0 playbackStateDidChange:(unsigned long long)arg1;
- (void)player:(id)arg0 didReceiveMetaInfo:(id)arg1 processed:(BOOL)arg2;
- (void)playerFrozen:(id)arg0;
- (void)playerResume:(id)arg0;
- (id)innerPlayer;
- (void)setInnerPlayer:(id)arg0;
- (id)fitMode;
- (void)setFitMode:(id)arg0;
- (BOOL)enableHardDecode;
- (void)setEnableHardDecode:(BOOL)arg0;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (BOOL)needPreload;
- (void)setNeedPreload:(BOOL)arg0;
- (void)setPlayTime:(double)arg0;
- (void)setStreamData:(id)arg0;
- (id)posterURL;
- (void)setPosterURL:(id)arg0;
- (unsigned long long)currentPlayState;
- (void)setCurrentPlayState:(unsigned long long)arg0;
- (BOOL)autoLifecycle;
- (void)setAutoLifecycle:(BOOL)arg0;
- (void)reloadDataWithAwemeModel:(id)arg0 defaultSDKKey:(id)arg1;
- (void)setEnableBGPlay:(BOOL)arg0;
- (void)updateVideoQuality:(id)arg0;
- (id)enqueuePlayer;
- (void)dequeuePlayer;
- (void)__configFitMode;
- (id)sdkKey;
- (void)configCoverHidden:(BOOL)arg0;
- (void)setSdkKey:(id)arg0;
- (BOOL)respondsSEI;
- (void)__configPoster:(id)arg0;
- (BOOL)enableBGPlay;
- (void)setRespondsSEI:(BOOL)arg0;
- (BOOL)mute;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (double)volume;
- (double)playTime;
- (id)initWithDelegate:(id)arg0;
- (void)stop;
- (void)setRate:(double)arg0;
- (void)didMoveToWindow;
- (id)delegate;
- (double)startTime;
- (double)rate;
- (void)setVolume:(double)arg0;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)reset;
- (void)setMute:(BOOL)arg0;
- (id)roomID;
- (void)setRoomID:(id)arg0;
- (id)streamData;
- (BOOL)autoPlay;
- (void)setAutoPlay:(BOOL)arg0;

@end