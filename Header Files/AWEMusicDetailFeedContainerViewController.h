//
//     Generated by private class-dump
//

@class NSString, AWEMusicDetailSkeletonView, AWEUILoadingView, AWEMusicDetailFeedDataContext;

@interface AWEMusicDetailFeedContainerViewController : AWEBaseListViewController <AWETabListItemViewControllerProtocol, AWEZoomTransitionOuterContextProvider> {
    AWEUILoadingView *_loadingView;
    AWEMusicDetailSkeletonView *_skeletonView;
}

@property (weak, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AWEMusicDetailSkeletonView *skeletonView;
@property (readonly, nonatomic) AWEMusicDetailFeedDataContext *feedDataContext;
@property (readonly, nonatomic) BOOL isEmptyList;
@property (readonly, nonatomic) BOOL hasMoreData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)tabContentScrollView;
- (id)segmentedControlItemConfigForTabList:(id)arg0;
- (void)configWithTabItemModel:(id)arg0;
- (void)tabListItemDidSelect:(BOOL)arg0;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)arg0 forSectionViewModel:(id)arg1;
- (id)zoomTransitionStartViewForOffset:(long long)arg0;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (void)duxGrid_viewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })arg0 toBreakPoint:(struct { long long x0; long long x1; })arg1;
- (id)aAWEPadModuleAdapter;
- (BOOL)supportRotationForTabList;
- (id)preViewController;
- (void)preloadDetailData;
- (id)feedDataContext;
- (void)prepareTrackInstance:(id)arg0;
- (void)shareRecommendedAwemeCoversForIM;
- (void)bindSectionViewModel;
- (BOOL)enableUseSkeletonView;
- (void)setUpSkeletonView;
- (void)showSkeletonView;
- (void)hideSkeletonView;
- (BOOL)isEmptyList;
- (id)skeletonView;
- (id)titleForSegmentedControl;
- (void)setSkeletonView:(id)arg0;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)arg0;
- (BOOL)hasMoreData;
- (void)viewDidLoad;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)setupCollectionView:(id)arg0;

@end
