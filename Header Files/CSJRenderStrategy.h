//
//     Generated by private class-dump
//

@class CSJRenderEngineViewModel, UIView, CSJRenderResultModel, CSJDynamicRenderTimeOutControlServer;

@interface CSJRenderStrategy : NSObject {
    BOOL _haveRenderResult;
    CSJRenderEngineViewModel *_renderEngineViewModel;
    UIView *_containerView;
    CSJDynamicRenderTimeOutControlServer *_timeOutControlServer;
    CSJRenderResultModel *_renderResultModel;
    id _delegate;
}

@property (weak, nonatomic) UIView *containerView;
@property (nonatomic) BOOL haveRenderResult;
@property (retain, nonatomic) CSJDynamicRenderTimeOutControlServer *timeOutControlServer;
@property (retain, nonatomic) CSJRenderResultModel *renderResultModel;
@property (weak, nonatomic) id delegate;
@property (retain, nonatomic) CSJRenderEngineViewModel *renderEngineViewModel;

- (long long)renderType;
- (id)initWithRenderEngineViewModel:(id)arg0 containerView:(id)arg1;
- (id)renderEngineViewModel;
- (void)safeDelegate_renderStrategy:(id)arg0 logWithMsg:(id)arg1 isInternal:(BOOL)arg2;
- (void)invokeWebEvent:(id)arg0 data:(id)arg1;
- (BOOL)haveRenderResult;
- (void)safeDelegate_renderStrategy:(id)arg0 interceptArray:(id)arg1;
- (id)renderResultModel;
- (void)reportRenderSuccessWithInfo:(id)arg0;
- (void)safeDelegate_renderStrategy:(id)arg0 report_webview_time_trackWithParams:(id)arg1;
- (void)safeDelegate_renderStrategy:(id)arg0 successView:(id)arg1 error:(id)arg2;
- (void)updateWithThemeStatus:(long long)arg0;
- (void)detectBlankIfNeed;
- (void)reportShowEventIfNeed;
- (void)reportMaterialMetaIfNeedWithRelatedMaterialMetaJson:(id)arg0;
- (void)refreshWKWebViewIfNeed;
- (void)sendPlayableStateChange:(BOOL)arg0 reduceDuration:(long long)arg1;
- (void)sendShowSkipInLiveScene:(BOOL)arg0;
- (void)sendShowToast:(id)arg0;
- (id)logKeyName;
- (void)setRenderEngineViewModel:(id)arg0;
- (void)setHaveRenderResult:(BOOL)arg0;
- (void)setTimeOutControlServer:(id)arg0;
- (void)showChangedWithOriginShow:(BOOL)arg0 destShow:(BOOL)arg1;
- (long long)playerTotalTime;
- (id)safeDelegate_nativeAdInRenderStrategy:(id)arg0;
- (id)safeDelegate_renderStrategy:(id)arg0 renderInteractionModel:(id)arg1 clickExtraInfo:(id)arg2;
- (id)timeOutControlServer;
- (void)setRenderResultModel:(id)arg0;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)delegate;
- (id)containerView;
- (void)setDelegate:(id)arg0;
- (void)render;
- (double)playerCurrentTime;

@end