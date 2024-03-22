//
//     Generated by private class-dump
//

@class UIViewController, NSString, AWEAwemeModel, DUXContentSheet, AWEInterestDiscoverContext, AWEListDataController;
@protocol AWEAwemeDetailTableViewControllerProtocol;

@interface AWEInterestDiscoverDetailViewController : UIViewController <AWEAwemeDetailTableViewControllerOuterVCDelegate, AWEInterestDiscoverPanelViewControllerDelegate, AWEAwemeDetailTableViewControllerDelegate, DUXSheetDelegate> {
    BOOL _hasFirstAppeared;
    BOOL _needShowPanelVCWhenAppear;
    UIViewController<AWEAwemeDetailTableViewControllerProtocol> *_detailVC;
    AWEAwemeModel *_firstModel;
    AWEListDataController *_dataController;
    NSString *_interestId;
    NSString *_interestName;
    AWEInterestDiscoverContext *_context;
    DUXContentSheet *_panelSheet;
}

@property (retain, nonatomic) UIViewController<AWEAwemeDetailTableViewControllerProtocol> *detailVC;
@property (retain, nonatomic) AWEAwemeModel *firstModel;
@property (weak, nonatomic) AWEListDataController *dataController;
@property (copy, nonatomic) NSString *interestId;
@property (copy, nonatomic) NSString *interestName;
@property (retain, nonatomic) AWEInterestDiscoverContext *context;
@property (retain, nonatomic) DUXContentSheet *panelSheet;
@property (nonatomic) BOOL hasFirstAppeared;
@property (nonatomic) BOOL needShowPanelVCWhenAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)arg0;
- (void)detailTableViewController:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 model:(id)arg3;
- (void)sheetWillDismiss:(id)arg0;
- (BOOL)transition_gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (BOOL)transition_shouldStartInteractiveTranstionForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (void)transition_didStartTransitionWithContext:(id)arg0;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (void)transition_didCancelPercentDrivenTransitionWithContext:(id)arg0;
- (BOOL)transition_enableCustomActionForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (void)transition_performCustomActionForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (void)setDataController:(id)arg0;
- (id)detailVC;
- (id)interestName;
- (void)setInterestName:(id)arg0;
- (void)setDetailVC:(id)arg0;
- (unsigned long long)currentVisibleCellIndex;
- (double)getStartSeekTime:(id)arg0;
- (id)initWithAwemeModel:(id)arg0 referString:(id)arg1 logExtraDict:(id)arg2;
- (void)adaptPlaybackRateForDetailCell:(id)arg0;
- (void)recordForSpeedInheritedIfNeedsWithSpeed:(id)arg0 model:(id)arg1;
- (id)interestIDString;
- (id)interestNameString;
- (void)setHasFirstAppeared:(BOOL)arg0;
- (void)setNeedShowPanelVCWhenAppear:(BOOL)arg0;
- (void)interestDiscoverPageBottomBarShowPanelClick;
- (void)setInterestId:(id)arg0;
- (void)setFirstModel:(id)arg0;
- (id)interestId;
- (id)firstModel;
- (BOOL)needShowPanelVCWhenAppear;
- (void)showPanelVC;
- (void)setPanelSheet:(id)arg0;
- (BOOL)hasFirstAppeared;
- (id)currentPlayingAwemeModel;
- (id)panelSheet;
- (void)interestDiscoverPanelListDidSelectAtIndex:(long long)arg0 aweme:(id)arg1;
- (void)shouldDismissPanelVC;
- (id)init;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)context;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setupUI;
- (id)dataController;

@end