//
//     Generated by private class-dump
//

@class AFDLearningSkyLightCatchView, NSString, AFDLearningTabSelectInterestAlertViewController, AWETouchCaptureView, AFDLearningDataController, NSDictionary, UIViewController;
@protocol AWEFeedTableViewControllerProtocol, AWEFeedTabItemViewControllerProtocol, AWEXTabBaseChannelControllerProtocol, AFDLearningViewControllerDelegate;

@interface AFDFullScreenLearningViewController : UIViewController <AWEUserMessage, AFDLearningTabSelectInterestAlertViewControllerDelegate, AFDLearningSkyLightCatchViewDelegate, AWEFeedTabItemViewControllerProtocol, AFDLearningViewControllerProtocol, AWEXTabChildViewControllerProtocol> {
    BOOL isFromRouterTransfer;
    BOOL _hasShowedXTab;
    BOOL _checkAlertFailed;
    id<AFDLearningViewControllerDelegate> delegate;
    NSString *enterFrom;
    NSString *enterMethod;
    NSDictionary *logExtraDict;
    id<AWEXTabBaseChannelControllerProtocol> _channelController;
    UIViewController<AWEFeedTableViewControllerProtocol, AWEFeedTabItemViewControllerProtocol> *_feedTableViewController;
    AFDLearningDataController *_dataController;
    AFDLearningSkyLightCatchView *_catchView;
    AWETouchCaptureView *_touchCaptureView;
    AFDLearningTabSelectInterestAlertViewController *_interestAlert;
    NSString *_referString;
}

@property (retain, nonatomic) UIViewController<AWEFeedTableViewControllerProtocol, AWEFeedTabItemViewControllerProtocol> *feedTableViewController;
@property (retain, nonatomic) AFDLearningDataController *dataController;
@property (retain, nonatomic) AFDLearningSkyLightCatchView *catchView;
@property (retain, nonatomic) AWETouchCaptureView *touchCaptureView;
@property (nonatomic) BOOL hasShowedXTab;
@property (retain, nonatomic) AFDLearningTabSelectInterestAlertViewController *interestAlert;
@property (nonatomic) BOOL checkAlertFailed;
@property (copy, nonatomic) NSString *referString;
@property (weak, nonatomic) id<AWEXTabBaseChannelControllerProtocol> channelController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long type;
@property (weak, nonatomic) id<AFDLearningViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSDictionary *logExtraDict;
@property (nonatomic) BOOL isFromRouterTransfer;

- (id)referString;
- (void)didFinishLogin;
- (void)didFinishLogout;
- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (void)pauseWithAnimation;
- (id)enterMethod;
- (void)setReferString:(id)arg0;
- (void)setLogExtraDict:(id)arg0;
- (id)logExtraDict;
- (id)enterFrom;
- (void)transition_didStartTransitionWithContext:(id)arg0;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (void)animatedRefreshWithCompletion:(id /* block */)arg0;
- (BOOL)currentTabIsTop;
- (BOOL)canRefresh;
- (BOOL)isCommentPanelShowing;
- (BOOL)isAITextPanelShowing;
- (BOOL)isVideoDescriptionPanelShowing;
- (BOOL)isVideoRelatedPanelShowing;
- (void)onAwemeDeleted:(id)arg0 isDislike:(BOOL)arg1;
- (void)onAwemeDeleted:(id)arg0 isLiveFinish:(BOOL)arg1 isDislike:(BOOL)arg2;
- (void)onAwemeMarkDislikeCanWithdraw:(id)arg0;
- (void)seekPlayTimeWithItemID:(id)arg0;
- (BOOL)onSegmentRepeatedClickWithIndex:(unsigned long long)arg0;
- (id)currentAweme;
- (id)currentAwemeID;
- (BOOL)isFromRouterTransfer;
- (void)setIsFromRouterTransfer:(BOOL)arg0;
- (id)channelController;
- (void)setChannelController:(id)arg0;
- (id)xtabFeedTableViewController;
- (BOOL)checkLeftPanWidth:(double)arg0;
- (unsigned long long)transition_destinatedType;
- (void)setDataController:(id)arg0;
- (void)addNotification;
- (void)p_setUI;
- (void)showAlertIfNeeded;
- (void)onCatchViewTouched;
- (void)onCatchViewPanned;
- (id)feedTableViewController;
- (id)catchView;
- (void)setFeedTableViewController:(id)arg0;
- (void)setCatchView:(id)arg0;
- (BOOL)showBackToFeedBubble:(id)arg0;
- (void)showSkylight:(BOOL)arg0 animated:(BOOL)arg1;
- (void)checkToShowAlertViewIfNeeded;
- (void)updateCellLogExtrParams:(id)arg0;
- (BOOL)checkAlertFailed;
- (void)tryShowBackHotBubble;
- (void)setTouchCaptureView:(id)arg0;
- (id)touchCaptureView;
- (void)addRelationLabelInfoIfNeeded:(id)arg0;
- (void)setInterestAlert:(id)arg0;
- (void)setCheckAlertFailed:(BOOL)arg0;
- (id)interestAlert;
- (void)refreshLearningFeed;
- (BOOL)hasShowedXTab;
- (void)setHasShowedXTab:(BOOL)arg0;
- (void)reload;
- (void)setScrollEnabled:(BOOL)arg0;
- (id)init;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)stop;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)viewDidLoad;
- (id)dataController;

@end
