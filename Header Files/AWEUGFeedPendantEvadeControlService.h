//
//     Generated by private class-dump
//

@class NSString, AWEUGCountDownConfigModel, AWEAwemeModel;
@protocol AWEUGFeedPendantEvadeControlCustomProtocol;

@interface AWEUGFeedPendantEvadeControlService : NSObject {
    BOOL _showStatus;
    BOOL _enableNoAwemeShowPendant;
    BOOL _displayingSkylightView;
    BOOL _displayProgressView;
    BOOL _needHidePendant;
    BOOL _isFromFeedVC;
    BOOL _isLandscape;
    BOOL _isPlayAweme;
    id<AWEUGFeedPendantEvadeControlCustomProtocol> _customEvadeDelegate;
    AWEAwemeModel *_currentAwemeModel;
    NSString *_activityId;
    id /* block */ _resultHandler;
    id /* block */ _multiSceneResultHandler;
    unsigned long long _controlType;
    NSString *_returnType;
    AWEUGCountDownConfigModel *_countDownConfig;
    unsigned long long _pendantSceneCheckStatus;
    unsigned long long _pendantFeedCheckStatus;
    NSString *_currScene;
    NSString *_evadeReason;
}

@property (nonatomic) BOOL displayingSkylightView;
@property (nonatomic) BOOL displayProgressView;
@property (nonatomic) BOOL needHidePendant;
@property (copy, nonatomic) id /* block */ resultHandler;
@property (copy, nonatomic) id /* block */ multiSceneResultHandler;
@property (nonatomic) unsigned long long controlType;
@property (nonatomic) BOOL isFromFeedVC;
@property (copy, nonatomic) NSString *returnType;
@property (retain, nonatomic) AWEUGCountDownConfigModel *countDownConfig;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) BOOL isPlayAweme;
@property (nonatomic) unsigned long long pendantSceneCheckStatus;
@property (nonatomic) unsigned long long pendantFeedCheckStatus;
@property (copy, nonatomic) NSString *currScene;
@property (copy, nonatomic) NSString *evadeReason;
@property (weak, nonatomic) id<AWEUGFeedPendantEvadeControlCustomProtocol> customEvadeDelegate;
@property (retain, nonatomic) AWEAwemeModel *currentAwemeModel;
@property (nonatomic) BOOL showStatus;
@property (copy, nonatomic) NSString *activityId;
@property (nonatomic) BOOL enableNoAwemeShowPendant;

- (id)currentAwemeModel;
- (void)setupNotification;
- (void)setCurrentAwemeModel:(id)arg0;
- (void)setShowStatus:(BOOL)arg0;
- (BOOL)showStatus;
- (void)awesomeSplashRemoved:(id)arg0;
- (void)feedContainerViewControllerDidSwitchTab:(id)arg0;
- (void)trackLogWithKey:(id)arg0 message:(id)arg1;
- (id)currentFeedContainerViewController;
- (void)getCurrentFeedAweModel;
- (void)checkPendantStatus;
- (void)setIsFromFeedVC:(BOOL)arg0;
- (BOOL)isFromFeedVC;
- (long long)currentFeedType;
- (void)pendantNeedShow:(id)arg0;
- (void)pendantNeedHide:(id)arg0;
- (void)feedSkylightViewDidShow:(id)arg0;
- (void)feedSkylightViewDidHide:(id)arg0;
- (void)feedPublishProgressViewDidShow:(id)arg0;
- (void)feedPublishProgressViewDidHide:(id)arg0;
- (void)feedLongPressViewDidShow:(id)arg0;
- (void)feedLongPressViewDidHide:(id)arg0;
- (void)feedTableViewControllerWillPlayAweme:(id)arg0;
- (BOOL)needHidePendant;
- (id /* block */)multiSceneResultHandler;
- (void)setEvadeReason:(id)arg0;
- (BOOL)displayingSkylightView;
- (BOOL)displayProgressView;
- (id)customEvadeDelegate;
- (BOOL)checkIfCanShowPendant;
- (BOOL)enableNoAwemeShowPendant;
- (BOOL)shouldDismissTemporarilyWithAwemeModel:(id)arg0;
- (void)setNeedHidePendant:(BOOL)arg0;
- (void)setDisplayingSkylightView:(BOOL)arg0;
- (void)setDisplayProgressView:(BOOL)arg0;
- (void)updateWithFeedTableVC:(id)arg0;
- (void)updateEvadeType:(unsigned long long)arg0;
- (void)setEnableNoAwemeShowPendant:(BOOL)arg0;
- (BOOL)pendantCanShowForGeneralEvadeRule:(id)arg0;
- (BOOL)checkIfcanShow;
- (void)campaignHasBegin;
- (void)setCustomEvadeDelegate:(id)arg0;
- (void)setMultiSceneResultHandler:(id /* block */)arg0;
- (id)countDownConfig;
- (void)setCountDownConfig:(id)arg0;
- (BOOL)isPlayAweme;
- (void)setIsPlayAweme:(BOOL)arg0;
- (unsigned long long)pendantSceneCheckStatus;
- (void)setPendantSceneCheckStatus:(unsigned long long)arg0;
- (unsigned long long)pendantFeedCheckStatus;
- (void)setPendantFeedCheckStatus:(unsigned long long)arg0;
- (id)currScene;
- (void)setCurrScene:(id)arg0;
- (id)evadeReason;
- (id)init;
- (id /* block */)resultHandler;
- (void).cxx_destruct;
- (id)returnType;
- (void)setIsLandscape:(BOOL)arg0;
- (void)setControlType:(unsigned long long)arg0;
- (unsigned long long)controlType;
- (void)setReturnType:(id)arg0;
- (BOOL)isLandscape;
- (void)setResultHandler:(id /* block */)arg0;
- (void)dealloc;
- (id)activityId;
- (void)setActivityId:(id)arg0;
- (id)initWithOptions:(unsigned long long)arg0 callback:(id /* block */)arg1;

@end
