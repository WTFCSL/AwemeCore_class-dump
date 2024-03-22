//
//     Generated by private class-dump
//

@class IESGCPNavigationBar, IESGCPEvaluationListViewModel, IESGCPEvaluationListView, IESGCPFastEvaluationView, UIView, NSString, NSDictionary;

@interface IESGCPEvaluationListViewController : UIViewController <IESGCPDIContextSubscriber, IESGCPEvaluationActions> {
    id /* block */ _dismissHandler;
    IESGCPNavigationBar *_navigationBar;
    IESGCPEvaluationListView *_evaluationListView;
    UIView *_bottomContainer;
    IESGCPFastEvaluationView *_evaluateView;
    IESGCPEvaluationListViewModel *_viewModel;
    NSString *_enterFrom;
    double _startWatchTime;
    double _watchDuration;
    NSDictionary *_extraReportDic;
}

@property (retain, nonatomic) IESGCPNavigationBar *navigationBar;
@property (retain, nonatomic) IESGCPEvaluationListView *evaluationListView;
@property (retain, nonatomic) UIView *bottomContainer;
@property (retain, nonatomic) IESGCPFastEvaluationView *evaluateView;
@property (retain, nonatomic) IESGCPEvaluationListViewModel *viewModel;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) double startWatchTime;
@property (nonatomic) double watchDuration;
@property (copy, nonatomic) NSDictionary *extraReportDic;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (double)watchDuration;
- (void)setWatchDuration:(double)arg0;
- (double)startWatchTime;
- (void)setStartWatchTime:(double)arg0;
- (void)didSetGameCPDIContext;
- (void)reportTrackerWithEvent:(id)arg0 extra:(id)arg1;
- (id)extraReportDic;
- (void)setExtraReportDic:(id)arg0;
- (void)showQuickStarCommentEntrance:(BOOL)arg0 score:(double)arg1;
- (id)evaluateView;
- (void)setEvaluateView:(id)arg0;
- (void)initUserInterface;
- (id)evaluationListView;
- (void)setEvaluationListView:(id)arg0;
- (void)reportWatchDurationTracker;
- (void)showEvaluateDetailPageWithEnterWay:(id)arg0;
- (id)initWithGameId:(id)arg0 gameName:(id)arg1 enterFrom:(id)arg2 isAnchor:(BOOL)arg3 extraReportDic:(id)arg4;
- (void).cxx_destruct;
- (void)setDismissHandler:(id /* block */)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (long long)preferredStatusBarStyle;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (id)navigationBar;
- (void)setNavigationBar:(id)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (id /* block */)dismissHandler;
- (void)appDidEnterBackground;
- (void)appDidBecomeActive;
- (void)addObservers;
- (id)bottomContainer;
- (void)setBottomContainer:(id)arg0;

@end
