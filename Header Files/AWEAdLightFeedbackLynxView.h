//
//     Generated by private class-dump
//

@class AWEOriginalAdLynxComponentModel, NSString, AWEBDARifleView, AWEAwemeModel, NSDictionary;

@interface AWEAdLightFeedbackLynxView : UIView <AWEBDARifleViewDelegate, AWEAdLightFeedbackLynxView> {
    BOOL canShow;
    BOOL _hasTrackShowBefore;
    BOOL _disableAutoShow;
    NSString *surl;
    NSString *bundleName;
    NSString *channelName;
    NSDictionary *initialProps;
    id /* block */ lynxButtonLoadFailBlock;
    id /* block */ updateLynxViewHeight;
    id /* block */ isElementHidden;
    AWEAwemeModel *_model;
    AWEOriginalAdLynxComponentModel *_component;
    AWEBDARifleView *_lynxContainer;
    unsigned long long _startAnimationTime;
    unsigned long long _startAnimationAttachMilliSeconds;
    double _startAnimationHeight;
    double _startAnimationDuration;
    NSString *_enterMethod;
    NSDictionary *_appendAdExtraData;
}

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEOriginalAdLynxComponentModel *component;
@property (retain, nonatomic) AWEBDARifleView *lynxContainer;
@property (nonatomic) BOOL hasTrackShowBefore;
@property (nonatomic) unsigned long long startAnimationTime;
@property (nonatomic) unsigned long long startAnimationAttachMilliSeconds;
@property (nonatomic) double startAnimationHeight;
@property (nonatomic) double startAnimationDuration;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSDictionary *appendAdExtraData;
@property (nonatomic) BOOL disableAutoShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *surl;
@property (copy, nonatomic) NSString *channelName;
@property (copy, nonatomic) NSString *bundleName;
@property (copy, nonatomic) NSDictionary *initialProps;
@property (nonatomic) BOOL canShow;
@property (copy, nonatomic) id /* block */ updateLynxViewHeight;
@property (copy, nonatomic) id /* block */ lynxButtonLoadFailBlock;
@property (copy, nonatomic) id /* block */ isElementHidden;

+ (BOOL)canUseConvertInfo:(id)arg0;
+ (void)addCovertInfoIntoLocalStorage:(id)arg0;
+ (id)lockForLocalStorage;
+ (void)clearExpireConvertInfoInLocalStorage;
+ (BOOL)isConvertInfoInLocalStorage:(id)arg0;
+ (BOOL)shouldShowBottomFeedBack:(id)arg0;

- (void)setEnterMethod:(id)arg0;
- (BOOL)canShow;
- (id)enterMethod;
- (void)trackShowIfNeeded;
- (void)setStartAnimationTime:(unsigned long long)arg0;
- (unsigned long long)startAnimationTime;
- (void)rifleView:(id)arg0 didLoadFailedWithURL:(id)arg1 error:(id)arg2;
- (id)lynxContainer;
- (id)surl;
- (void)setSurl:(id)arg0;
- (id)initialProps;
- (void)setInitialProps:(id)arg0;
- (void)setLynxContainer:(id)arg0;
- (void)lynxAnimationStartWithNotification:(id)arg0;
- (id)lynxBridge;
- (void)setupLynxContainer;
- (id)appendAdExtraData;
- (void)setAppendAdExtraData:(id)arg0;
- (BOOL)updateLynxViewHeight:(double)arg0 withDuration:(double)arg1 enterMethod:(id)arg2;
- (void)setStartAnimationHeight:(double)arg0;
- (void)setStartAnimationDuration:(double)arg0;
- (BOOL)disableAutoShow;
- (void)setDisableAutoShow:(BOOL)arg0;
- (void)setStartAnimationAttachMilliSeconds:(unsigned long long)arg0;
- (void)startAnimationAfterDelayTime;
- (id /* block */)updateLynxViewHeight;
- (id /* block */)isElementHidden;
- (BOOL)hasTrackShowBefore;
- (void)setHasTrackShowBefore:(BOOL)arg0;
- (id /* block */)lynxButtonLoadFailBlock;
- (void)autoShowLynxViewIfNeeded;
- (unsigned long long)startAnimationAttachMilliSeconds;
- (double)startAnimationHeight;
- (double)startAnimationDuration;
- (void)setCanShow:(BOOL)arg0;
- (void)setupLynxViewWithModel:(id)arg0;
- (void)notifyAppear;
- (void)notifyDisappear;
- (void)sendVideoLoopEvent:(long long)arg0;
- (void)sendBackFromLandingPageEvent:(double)arg0 surveyShowed:(BOOL)arg1;
- (void)setUpdateLynxViewHeight:(id /* block */)arg0;
- (void)setLynxButtonLoadFailBlock:(id /* block */)arg0;
- (void)setIsElementHidden:(id /* block */)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)channelName;
- (id)model;
- (id)component;
- (id)bundleName;
- (void)setBundleName:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)reset;
- (void)setComponent:(id)arg0;
- (void)setChannelName:(id)arg0;

@end
