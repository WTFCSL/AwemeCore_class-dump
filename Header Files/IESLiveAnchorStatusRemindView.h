//
//     Generated by private class-dump
//

@class UIView, NSString, HTSLiveScorllLabelView, HTSEventContext, RealtimeSuggest, IESLiveCountTimer, NSDictionary, CAGradientLayer, IESLiveImageView, UILabel, NSNumber;

@interface IESLiveAnchorStatusRemindView : UIView <HTSLivePluginLayoutView> {
    BOOL _microphoneAbnormal;
    BOOL _NetWorkAbnormal;
    BOOL _temperatureAbnormal;
    BOOL _hasShowNetWorkRemindSlow;
    BOOL _hasShowNetWorkRemindNonet;
    BOOL _hasShowTempRemindCritical;
    BOOL _hasShowTempRemindSerious;
    BOOL _hasShowMicrophoneRemindMute;
    BOOL _hasShowMicrophoneRemindError;
    long long _currentDisplayMode;
    long long _currentNetworkStatus;
    long long _currentTempLevel;
    long long _currentMicorphoneState;
    RealtimeSuggest *_currentManageSuggest;
    double _maxExpendWidth;
    NSDictionary *_NetWorkIconMap;
    NSDictionary *_MicrophoneIconMap;
    NSDictionary *_TemperatureIconMap;
    IESLiveImageView *_microphoneImgView;
    IESLiveImageView *_temperatureImgView;
    IESLiveImageView *_networkImgView;
    UIView *_statusIconView;
    IESLiveImageView *_statusImgView;
    UIView *_contentView;
    UILabel *_normalContentView;
    HTSLiveScorllLabelView *_scrollContentView;
    IESLiveImageView *_expandIcon;
    CAGradientLayer *_gradientLayer;
    NSString *_currentSuggestKey;
    NSNumber *_roomID;
    HTSEventContext *_trackContext;
    IESLiveCountTimer *_prefSuggestCountTimer;
}

@property (nonatomic) double maxExpendWidth;
@property (retain, nonatomic) NSDictionary *NetWorkIconMap;
@property (retain, nonatomic) NSDictionary *MicrophoneIconMap;
@property (retain, nonatomic) NSDictionary *TemperatureIconMap;
@property (retain, nonatomic) IESLiveImageView *microphoneImgView;
@property (retain, nonatomic) IESLiveImageView *temperatureImgView;
@property (retain, nonatomic) IESLiveImageView *networkImgView;
@property (nonatomic) BOOL microphoneAbnormal;
@property (nonatomic) BOOL NetWorkAbnormal;
@property (nonatomic) BOOL temperatureAbnormal;
@property (retain, nonatomic) UIView *statusIconView;
@property (retain, nonatomic) IESLiveImageView *statusImgView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *normalContentView;
@property (retain, nonatomic) HTSLiveScorllLabelView *scrollContentView;
@property (retain, nonatomic) IESLiveImageView *expandIcon;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) BOOL hasShowNetWorkRemindSlow;
@property (nonatomic) BOOL hasShowNetWorkRemindNonet;
@property (nonatomic) BOOL hasShowTempRemindCritical;
@property (nonatomic) BOOL hasShowTempRemindSerious;
@property (nonatomic) BOOL hasShowMicrophoneRemindMute;
@property (nonatomic) BOOL hasShowMicrophoneRemindError;
@property (retain, nonatomic) NSString *currentSuggestKey;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveCountTimer *prefSuggestCountTimer;
@property (nonatomic) long long currentDisplayMode;
@property (nonatomic) long long currentNetworkStatus;
@property (nonatomic) long long currentTempLevel;
@property (nonatomic) long long currentMicorphoneState;
@property (retain, nonatomic) RealtimeSuggest *currentManageSuggest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (void)setCurrentNetworkStatus:(long long)arg0;
- (void)onClick;
- (id)normalContentView;
- (void)setNormalContentView:(id)arg0;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })pluginLayoutContentInsets;
- (id)statusIconView;
- (void)setStatusIconView:(id)arg0;
- (id)expandIcon;
- (void)setExpandIcon:(id)arg0;
- (id)initWithRoomID:(id)arg0 trackContext:(id)arg1;
- (void)updateNetworkStatus:(long long)arg0;
- (void)updateMicrophoneState:(long long)arg0;
- (void)updateTemperatureLevel:(long long)arg0;
- (long long)currentTempLevel;
- (long long)currentMicorphoneState;
- (void)setMicrophoneImgView:(id)arg0;
- (void)setTemperatureImgView:(id)arg0;
- (void)setNetworkImgView:(id)arg0;
- (id)microphoneImgView;
- (id)temperatureImgView;
- (id)networkImgView;
- (void)setCurrentTempLevel:(long long)arg0;
- (void)setCurrentMicorphoneState:(long long)arg0;
- (id)currentManageSuggest;
- (void)handleRealtimeSuggest:(id)arg0;
- (void)handleRealtimeSuggestExpire:(id)arg0;
- (void)setMaxExpendWidth:(double)arg0;
- (void)setNetWorkIconMap:(id)arg0;
- (void)setTemperatureIconMap:(id)arg0;
- (void)setMicrophoneIconMap:(id)arg0;
- (void)setStatusImgView:(id)arg0;
- (id)statusImgView;
- (void)transitionToNormal;
- (id)prefSuggestCountTimer;
- (void)setPrefSuggestCountTimer:(id)arg0;
- (BOOL)microphoneAbnormal;
- (BOOL)temperatureAbnormal;
- (BOOL)NetWorkAbnormal;
- (void)transitionToIconOnly;
- (void)setCurrentSuggestKey:(id)arg0;
- (void)resizeViewWithContent:(id)arg0;
- (void)updateContentViewWithContent:(id)arg0 shouldScroll:(BOOL)arg1;
- (void)updateStatusIconView;
- (void)updateGradientBorder;
- (void)getTotalExpendWidthWithContent:(id)arg0 completion:(id /* block */)arg1;
- (void)setNetWorkAbnormal:(BOOL)arg0;
- (id)NetWorkIconMap;
- (BOOL)hasShowNetWorkRemindSlow;
- (void)setHasShowNetWorkRemindSlow:(BOOL)arg0;
- (void)transitionToPrefSuggestWithContent:(id)arg0;
- (void)trackSuggestShowWithSuggestKey:(id)arg0;
- (BOOL)hasShowNetWorkRemindNonet;
- (void)setHasShowNetWorkRemindNonet:(BOOL)arg0;
- (void)setTemperatureAbnormal:(BOOL)arg0;
- (id)TemperatureIconMap;
- (BOOL)hasShowTempRemindSerious;
- (void)setHasShowTempRemindSerious:(BOOL)arg0;
- (BOOL)hasShowTempRemindCritical;
- (void)setHasShowTempRemindCritical:(BOOL)arg0;
- (void)setMicrophoneAbnormal:(BOOL)arg0;
- (id)MicrophoneIconMap;
- (BOOL)hasShowMicrophoneRemindError;
- (void)setHasShowMicrophoneRemindError:(BOOL)arg0;
- (BOOL)hasShowMicrophoneRemindMute;
- (void)setHasShowMicrophoneRemindMute:(BOOL)arg0;
- (id)currentSuggestKey;
- (void)trackSuggestClickWithSuggestKey:(id)arg0;
- (void)setCurrentManageSuggest:(id)arg0;
- (void)iconViewWithImage:(id)arg0;
- (void)transitionToManageSuggestWithContent:(id)arg0;
- (double)getContentViewWidth:(id)arg0;
- (double)getStatusIconViewWidth;
- (double)maxExpendWidth;
- (id)gradientLayer;
- (void).cxx_destruct;
- (id)scrollContentView;
- (id)contentView;
- (id)viewType;
- (void)dealloc;
- (void)setContentView:(id)arg0;
- (void)setGradientLayer:(id)arg0;
- (void)setupUI;
- (id)roomID;
- (void)setRoomID:(id)arg0;
- (void)setScrollContentView:(id)arg0;
- (long long)currentNetworkStatus;
- (long long)currentDisplayMode;
- (void)setCurrentDisplayMode:(long long)arg0;

@end
