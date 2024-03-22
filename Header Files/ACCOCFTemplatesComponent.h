//
//     Generated by private class-dump
//

@class NSString, AWESelectTemplateChoseTemplateView, AWESelectTemplateChoseTemplateViewModel, LOTAnimationView, UIView, ACCOCFTemplatesEmptyDataView, NSObject;
@protocol ACCEditOneClickFilmTrackService, ACCEditOneClickFilmApplyServiceProtocol, ACCEditorOneClickFilmListFetchService, ACCEditorOneClickFilmingViewModelProtocol, OS_dispatch_group, ACCNetworkReachabilityProtocol, ACCOCFViewContainerProtocol;

@interface ACCOCFTemplatesComponent : ACCFeatureComponent <ACCEditOneClickFilmApplySubscriberProtocol, AWESelectTemplateChoseTemplateDelegate> {
    BOOL _hasWillAppeared;
    BOOL _hasDidAppeared;
    UIView *_selectTemplateContainerView;
    AWESelectTemplateChoseTemplateView *_selectTemplateView;
    AWESelectTemplateChoseTemplateViewModel *_selectTemplateViewModel;
    LOTAnimationView *_lottieLoadingView;
    ACCOCFTemplatesEmptyDataView *_emptyDataView;
    id<ACCEditOneClickFilmTrackService> _trackService;
    id<ACCEditorOneClickFilmListFetchService> _oneClickFilmFetchListService;
    id<ACCOCFViewContainerProtocol> _viewContainer;
    id<ACCEditOneClickFilmApplyServiceProtocol> _applyService;
    id<ACCEditorOneClickFilmingViewModelProtocol> _oneClickViewModel;
    id<ACCNetworkReachabilityProtocol> _reachabilityService;
    NSObject<OS_dispatch_group> *_initialStateGroup;
}

@property (retain, nonatomic) UIView *selectTemplateContainerView;
@property (retain, nonatomic) AWESelectTemplateChoseTemplateView *selectTemplateView;
@property (retain, nonatomic) AWESelectTemplateChoseTemplateViewModel *selectTemplateViewModel;
@property (retain, nonatomic) LOTAnimationView *lottieLoadingView;
@property (retain, nonatomic) ACCOCFTemplatesEmptyDataView *emptyDataView;
@property (weak, nonatomic) id<ACCEditOneClickFilmTrackService> trackService;
@property (weak, nonatomic) id<ACCEditorOneClickFilmListFetchService> oneClickFilmFetchListService;
@property (weak, nonatomic) id<ACCOCFViewContainerProtocol> viewContainer;
@property (weak, nonatomic) id<ACCEditOneClickFilmApplyServiceProtocol> applyService;
@property (weak, nonatomic) id<ACCEditorOneClickFilmingViewModelProtocol> oneClickViewModel;
@property (retain, nonatomic) id<ACCNetworkReachabilityProtocol> reachabilityService;
@property (nonatomic) BOOL hasWillAppeared;
@property (nonatomic) BOOL hasDidAppeared;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *initialStateGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupLoadingView;
- (void)componentDidMount;
- (void)componentDidAppear;
- (unsigned long long)preferredLoadPhase;
- (void)componentWillAppear;
- (void)setupContainerView;
- (void)fetchData:(id /* block */)arg0;
- (id)trackService;
- (void)setTrackService:(id)arg0;
- (id)oneClickViewModel;
- (void)didUpdateProgressForLatestTemplate:(unsigned long long)arg0 templateModel:(id)arg1;
- (void)setOneClickViewModel:(id)arg0;
- (id)oneClickFilmFetchListService;
- (void)setOneClickFilmFetchListService:(id)arg0;
- (id)applyService;
- (void)setupSelectTemplateViewModel;
- (void)setupSelectTemplateView;
- (void)setupEmptyDataView;
- (BOOL)hasWillAppeared;
- (void)setHasWillAppeared:(BOOL)arg0;
- (void)updateUIWithUIState:(long long)arg0;
- (void)setInitialStateGroup:(id)arg0;
- (void)setupInitialState;
- (id)initialStateGroup;
- (id)selectTemplateViewModel;
- (id)selectTemplateView;
- (BOOL)hasDidAppeared;
- (void)setHasDidAppeared:(BOOL)arg0;
- (id)selectTemplateContainerView;
- (id)lottieLoadingView;
- (id)emptyDataView;
- (void)updateViewModelWithTemplateModels:(id)arg0;
- (void)updateUIHiddenState;
- (BOOL)recoverLastSelectedIfNeeded;
- (void)selectNoneOrFirstItemByDefaultIfNeeded;
- (void)showErrorToast;
- (id)reachabilityService;
- (BOOL)couldSelectModel:(id)arg0;
- (void)predownloadTemplate:(id)arg0;
- (void)didUpdateSelectedModel:(id)arg0 oldSelectedModel:(id)arg1 source:(long long)arg2;
- (void)setSelectTemplateContainerView:(id)arg0;
- (void)setSelectTemplateView:(id)arg0;
- (void)setSelectTemplateViewModel:(id)arg0;
- (void)setLottieLoadingView:(id)arg0;
- (void)setEmptyDataView:(id)arg0;
- (void)setApplyService:(id)arg0;
- (void)setReachabilityService:(id)arg0;
- (void).cxx_destruct;
- (void)showLoadingView;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;
- (void)hideLoadingView;
- (void)selectItemAtIndex:(long long)arg0;

@end