//
//     Generated by private class-dump
//

@class AWEPadSkyLightCapsuleView, NSString, IGListAdapter, AWEBaseListAdapterDataSource, AWEPadSkyLightListDataController, UIViewController;
@protocol AWESkyLightContainerViewModelProtocol, AWESkyLightContainerConfigProtocol;

@interface AWEPadChildSkyLightTopBarViewModel : NSObject <UIGestureRecognizerDelegate, AWEBaseListViewControllerDataSource, UIScrollViewDelegate, AWEUserMessage, AWESkyLightTopBarViewModelProtocol> {
    id<AWESkyLightContainerViewModelProtocol> containerViewModel;
    IGListAdapter *_listAdapter;
    id /* block */ _commitAction;
    id<AWESkyLightContainerConfigProtocol> _config;
    UIViewController *_topBarView;
    AWEPadSkyLightCapsuleView *_capsuleView;
    AWEPadSkyLightListDataController *_dataController;
    AWEBaseListAdapterDataSource *_dataSource;
}

@property (retain, nonatomic) id<AWESkyLightContainerConfigProtocol> config;
@property (retain, nonatomic) UIViewController *topBarView;
@property (retain, nonatomic) AWEPadSkyLightCapsuleView *capsuleView;
@property (retain, nonatomic) AWEPadSkyLightListDataController *dataController;
@property (retain, nonatomic) IGListAdapter *listAdapter;
@property (retain, nonatomic) AWEBaseListAdapterDataSource *dataSource;
@property (copy, nonatomic) id /* block */ commitAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWESkyLightContainerViewModelProtocol> containerViewModel;

- (id)referString;
- (void)didFinishLogin;
- (id)sectionControllerClassArray;
- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (id)sectionViewModels;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (id)containerViewModel;
- (void)setDataController:(id)arg0;
- (id)listAdapter;
- (void)setListAdapter:(id)arg0;
- (void)bindListAdapter:(id)arg0 dataSource:(id)arg1;
- (void)setContainerViewModel:(id)arg0;
- (id /* block */)commitAction;
- (void)setCommitAction:(id /* block */)arg0;
- (void)skyLightSatusChanged:(BOOL)arg0;
- (void)updateCapsuleText;
- (void)setupSkyLightListHandler;
- (void)skyLightExpandedForce:(BOOL)arg0;
- (void)capsuleViewDidTaped;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void)setConfig:(id)arg0;
- (double)topBarHeight;
- (void).cxx_destruct;
- (void)setCapsuleView:(id)arg0;
- (id)config;
- (id)initWithConfig:(id)arg0;
- (id)capsuleView;
- (void)refreshWithCompletion:(id /* block */)arg0;
- (id)dataController;
- (id)topBarView;
- (void)setTopBarView:(id)arg0;

@end
