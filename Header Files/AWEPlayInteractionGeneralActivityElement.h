//
//     Generated by private class-dump
//

@class AWECampaignGeneralActivityButtonDataModel, AWEPlayInteractionGeneralActivityView, AWECampaignGeneralActivityElementModel;

@interface AWEPlayInteractionGeneralActivityElement : AWEPlayInteractionBaseActionButtonElement {
    BOOL _hasShowElement;
    BOOL _isRouting;
    BOOL _isRequesting;
    BOOL _needReverse;
    AWEPlayInteractionGeneralActivityView *_generalActivityView;
    AWECampaignGeneralActivityElementModel *_activityButtonModel;
    AWECampaignGeneralActivityButtonDataModel *_currentButtonData;
    id /* block */ _playPeriodChangeBlock;
}

@property (retain, nonatomic) AWEPlayInteractionGeneralActivityView *generalActivityView;
@property (retain, nonatomic) AWECampaignGeneralActivityElementModel *activityButtonModel;
@property (retain, nonatomic) AWECampaignGeneralActivityButtonDataModel *currentButtonData;
@property (copy, nonatomic) id /* block */ playPeriodChangeBlock;
@property (nonatomic) BOOL hasShowElement;
@property (nonatomic) BOOL isRouting;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) BOOL needReverse;

+ (BOOL)shouldActiveWithModel:(id)arg0 context:(id)arg1;

- (void)initializeElement;
- (void)viewDidDisposed;
- (void)setIsRequesting:(BOOL)arg0;
- (BOOL)isRequesting;
- (void)trackShowEvent;
- (BOOL)needReverse;
- (void)setNeedReverse:(BOOL)arg0;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:(id)arg0;
- (void)layoutElementView;
- (void)dynamicWidthRemakeLayout;
- (BOOL)p_shouldShow;
- (void)addTokenToSlardar;
- (void)removeVideoPlayPeriodObserver;
- (void)addVideoPlayPeriodObserver;
- (id /* block */)playPeriodChangeBlock;
- (void)setPlayPeriodChangeBlock:(id /* block */)arg0;
- (id)generalActivityView;
- (id)activityButtonModel;
- (void)setGeneralActivityView:(id)arg0;
- (void)setActivityButtonModel:(id)arg0;
- (void)setHasShowElement:(BOOL)arg0;
- (void)removeTokenWithinSlardar;
- (void)updateGeneralActivityViewWithDelay:(BOOL)arg0;
- (void)setCurrentButtonData:(id)arg0;
- (id)currentButtonData;
- (void)dismissActivityElement;
- (void)jumpPageWithSchema:(id)arg0 success:(id /* block */)arg1;
- (void)requestServerWithPath:(id)arg0 success:(id /* block */)arg1;
- (void)setIsRouting:(BOOL)arg0;
- (void)responseClickEventWithButton:(id)arg0 andInfo:(id)arg1;
- (BOOL)hasShowElement;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (BOOL)isRouting;
- (void)reset;
- (void)viewDidLoad;

@end
