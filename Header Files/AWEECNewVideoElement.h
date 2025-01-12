//
//     Generated by private class-dump
//

@class NSString, NSDictionary, AWEAwemeModel, NSNumber;

@interface AWEECNewVideoElement : LynxUI <IESECMallVideoDelegate> {
    BOOL _autoPlay;
    BOOL _mute;
    BOOL _isLoop;
    BOOL _autoLifecycle;
    NSNumber *_startTime;
    NSNumber *_volume;
    NSString *_posterURL;
    NSString *_fitMode;
    NSString *_control;
    AWEAwemeModel *_singleAwemeModel;
    NSDictionary *_paramsDict;
    long long _changeOffset;
}

@property (retain, nonatomic) AWEAwemeModel *singleAwemeModel;
@property (retain, nonatomic) NSDictionary *paramsDict;
@property (nonatomic) long long changeOffset;
@property (nonatomic) BOOL autoPlay;
@property (nonatomic) BOOL mute;
@property (nonatomic) BOOL isLoop;
@property (nonatomic) BOOL autoLifecycle;
@property (retain, nonatomic) NSNumber *startTime;
@property (retain, nonatomic) NSNumber *volume;
@property (copy, nonatomic) NSString *posterURL;
@property (copy, nonatomic) NSString *fitMode;
@property (copy, nonatomic) NSString *control;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__lynx_prop_config__430;
+ (id)__lynx_prop_config__581;
+ (id)__lynx_prop_config__662;
+ (id)__lynx_prop_config__713;
+ (id)__lynx_prop_config__764;
+ (id)__lynx_prop_config__815;
+ (id)__lynx_prop_config__866;
+ (id)__lynx_prop_config__1027;
+ (id)__lynx_prop_config__1098;
+ (id)__lynx_prop_config__1149;
+ (id)__lynx_ui_method_config__11910;
+ (id)__lynx_ui_method_config__12311;
+ (id)__lynx_ui_method_config__12712;
+ (id)__lynx_ui_method_config__13113;
+ (id)__lynx_ui_method_config__14414;

- (id)fitMode;
- (void)setFitMode:(id)arg0;
- (void)play:(id)arg0 withResult:(id /* block */)arg1;
- (void)pause:(id)arg0 withResult:(id /* block */)arg1;
- (void)stop:(id)arg0 withResult:(id /* block */)arg1;
- (void)autoplay:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)playerPlayTime:(double)arg0 canPlayTime:(double)arg1 totalTime:(double)arg2;
- (void)logExtra:(id)arg0 requestReset:(BOOL)arg1;
- (void)volume:(id)arg0 requestReset:(BOOL)arg1;
- (void)poster:(id)arg0 requestReset:(BOOL)arg1;
- (id)paramsDict;
- (void)setIsLoop:(BOOL)arg0;
- (id)posterURL;
- (void)setPosterURL:(id)arg0;
- (void)seek:(id)arg0 withResult:(id /* block */)arg1;
- (void)didError:(id)arg0;
- (void)repeat:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)enterDetail:(id)arg0 withResult:(id /* block */)arg1;
- (void)didSeekEnd:(BOOL)arg0;
- (void)didStartStallWithInfo:(id)arg0;
- (void)enterDetailWithParams:(id)arg0 callBack:(id /* block */)arg1;
- (id)singleAwemeModel;
- (void)setSingleAwemeModel:(id)arg0;
- (void)videodata:(id)arg0 requestReset:(BOOL)arg1;
- (void)setupVideoModel;
- (void)controlPlayerWithCommand:(id)arg0;
- (void)inittime:(id)arg0 requestReset:(BOOL)arg1;
- (void)muted:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)objectfit:(id)arg0 requestReset:(BOOL)arg1;
- (void)__control:(id)arg0 requestReset:(BOOL)arg1;
- (BOOL)isCurrentDisplayedInScreen;
- (BOOL)autoLifecycle;
- (void)setAutoLifecycle:(BOOL)arg0;
- (void)setParamsDict:(id)arg0;
- (long long)changeOffset;
- (void)setChangeOffset:(long long)arg0;
- (BOOL)mute;
- (void)setStartTime:(id)arg0;
- (void).cxx_destruct;
- (id)volume;
- (BOOL)isLoop;
- (void)didEnd;
- (id)startTime;
- (void)setVolume:(id)arg0;
- (void)setMute:(BOOL)arg0;
- (id)control;
- (void)setControl:(id)arg0;
- (BOOL)autoPlay;
- (void)setAutoPlay:(BOOL)arg0;
- (id)createView;
- (void)didStop;
- (void)didPause;
- (void)didPlay;

@end
