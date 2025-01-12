//
//     Generated by private class-dump
//

@class NSString, AWEUserRecommendBigCardViewModel, AWEUserRecommendBigCardContainerView, AWEAwemeModel, AWEAwemePageContext;
@protocol AFDSpecialCardPanelTrackDelegate, AWEPlayInteractionViewControllerProtocol;

@interface AWEFeedUserRecommendListViewController : UIViewController <AWEUserRecommendBigCardContainerViewDelegate, AWEFeedUserRecommendListViewControllerProtocol, AFDSpecialCardPanelProtocol> {
    AWEAwemeModel *model;
    AWEAwemePageContext *outerPageContext;
    NSString *referString;
    id<AWEPlayInteractionViewControllerProtocol> interactionDelegate;
    id<AFDSpecialCardPanelTrackDelegate> trackDelegate;
    AWEUserRecommendBigCardViewModel *_viewModel;
    AWEUserRecommendBigCardContainerView *_bigCardContainerView;
}

@property (retain, nonatomic) AWEUserRecommendBigCardViewModel *viewModel;
@property (retain, nonatomic) AWEUserRecommendBigCardContainerView *bigCardContainerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AFDSpecialCardPanelTrackDelegate> trackDelegate;

- (id)referString;
- (void)setReferString:(id)arg0;
- (id)outerPageContext;
- (void)setOuterPageContext:(id)arg0;
- (id)trackDelegate;
- (void)setTrackDelegate:(id)arg0;
- (void)videoWillPlay;
- (void)videoWillPause;
- (BOOL)p_isVCVisibleAndHasMusic;
- (void)p_handleEnterPrivacySetting;
- (void)p_handleExitPrivacySetting;
- (void)p_didEnterBackground;
- (void)p_willEnterForeground;
- (id)bigCardContainerView;
- (void)willShowLongPressPanelOnBigCard:(id)arg0;
- (void)willDismissLongPressPanelOnBigCard:(id)arg0;
- (void)didClickBigCard:(id)arg0 enterMethod:(id)arg1;
- (void)didDislikeBigCard:(id)arg0 enterMethod:(id)arg1;
- (void)setBigCardContainerView:(id)arg0;
- (void)setModel:(id)arg0;
- (id)init;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)model;
- (void)setInteractionDelegate:(id)arg0;
- (id)interactionDelegate;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)reset;
- (void)viewDidLoad;
- (void)configureWithModel:(id)arg0;
- (void)didEndDisplaying;
- (void)updateWithModel:(id)arg0;
- (void)willDisplay;

@end
