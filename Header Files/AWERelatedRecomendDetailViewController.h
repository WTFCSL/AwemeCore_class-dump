//
//     Generated by private class-dump
//

@class AWEAwemeModel, NSString, NSDictionary, AWEPageContext, AWERelatedRecomendPanelViewController, AWERelatedRecomendDetailBottomView, AWEUILoadingView;

@interface AWERelatedRecomendDetailViewController : AWEAwemeDetailTableViewController <AWERelatedRecomendPanelViewDelegate> {
    BOOL _panelShowed;
    BOOL _firstAppear;
    BOOL _needResetData;
    BOOL _isRelatedVideo;
    AWEPageContext *_pageContext;
    AWERelatedRecomendDetailBottomView *_moreView;
    AWERelatedRecomendPanelViewController *_panelVC;
    AWEUILoadingView *_loadingView;
    AWEAwemeModel *_sourceModel;
    NSDictionary *_params;
    long long _initialIndex;
    NSString *_enterMethod;
    id /* block */ _dataSoureHandler;
}

@property (retain, nonatomic) AWEPageContext *pageContext;
@property (retain, nonatomic) AWERelatedRecomendDetailBottomView *moreView;
@property (retain, nonatomic) AWERelatedRecomendPanelViewController *panelVC;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AWEAwemeModel *sourceModel;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) BOOL panelShowed;
@property (nonatomic) BOOL firstAppear;
@property (nonatomic) long long initialIndex;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL needResetData;
@property (nonatomic) BOOL isRelatedVideo;
@property (copy, nonatomic) id /* block */ dataSoureHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (BOOL)recommendPanelShowed;
- (void)scrollToNextVideo;
- (void)cellWillDisplay:(id)arg0 forRowAtIndexPath:(id)arg1 tableView:(id)arg2;
- (void)cellDidEndDisplay:(id)arg0;
- (id)moreView;
- (void)setMoreView:(id)arg0;
- (void)onScrollWillChangeVideo:(id)arg0 index:(long long)arg1 directTop:(BOOL)arg2;
- (id)configCell:(id)arg0 atIndexPath:(id)arg1 tableView:(id)arg2;
- (void)onScrollDidEndWithIndexPath:(id)arg0;
- (void)willPlayNextLoop;
- (id)panelVC;
- (void)setPanelVC:(id)arg0;
- (void)recallDimissOtherView;
- (id)initWithAwemeModel:(id)arg0 dataController:(id)arg1 initialIndex:(long long)arg2 logExtraDict:(id)arg3;
- (void)getParam:(id)arg0;
- (void)showPanelAnimate:(BOOL)arg0 complete:(id /* block */)arg1;
- (id /* block */)dataSoureHandler;
- (void)didDataControllerModified;
- (void)setDataSoureHandler:(id /* block */)arg0;
- (void)setIsRelatedVideo:(BOOL)arg0;
- (void)moreViewClicked;
- (void)setNeedResetData:(BOOL)arg0;
- (BOOL)needResetData;
- (BOOL)panelShowed;
- (void)setPanelShowed:(BOOL)arg0;
- (void)awe_dismissPanelWithAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (BOOL)isRelatedVideo;
- (void)awe_didTappedIndex:(long long)arg0 aweme:(id)arg1;
- (void)didMoveToParentViewController:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)arg0;
- (id)params;
- (void)dealloc;
- (void)viewDidLoad;
- (id)sourceModel;
- (void)setFirstAppear:(BOOL)arg0;
- (BOOL)firstAppear;
- (void)setParams:(id)arg0;
- (id)pageContext;
- (void)setPageContext:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)setSourceModel:(id)arg0;
- (long long)initialIndex;
- (void)setInitialIndex:(long long)arg0;

@end
