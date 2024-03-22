//
//     Generated by private class-dump
//

@class UIView, ACCSlidingViewController, NSString, ACCSlidingTabbarView, AWEVideoPublishViewModel, ACCAlbumSelectTemplateNavigationView, ACCAlbumInputData, AWEAlbumSelectTemplateViewModel;

@interface AWEAlbumSelectTemplateViewController : UIViewController <ACCSlidingViewControllerDelegate, AWEAlbumSelectTemplateFeedViewControllerDelegate, ACCZoomContextOutterProviderProtocol> {
    AWEVideoPublishViewModel *_publishModel;
    ACCAlbumInputData *_inputData;
    UIView *_containerView;
    ACCAlbumSelectTemplateNavigationView *_navigationView;
    ACCSlidingViewController *_slidingViewController;
    ACCSlidingTabbarView *_slidingTabView;
    unsigned long long _currentSelectedVCIndex;
    AWEAlbumSelectTemplateViewModel *_viewModel;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) ACCAlbumSelectTemplateNavigationView *navigationView;
@property (retain, nonatomic) ACCSlidingViewController *slidingViewController;
@property (retain, nonatomic) ACCSlidingTabbarView *slidingTabView;
@property (nonatomic) unsigned long long currentSelectedVCIndex;
@property (retain, nonatomic) AWEAlbumSelectTemplateViewModel *viewModel;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (weak, nonatomic) ACCAlbumInputData *inputData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)publishModel;
- (void)setPublishModel:(id)arg0;
- (void)closeAction:(id)arg0;
- (id)slidingViewController;
- (long long)numberOfControllers:(id)arg0;
- (id)slidingViewController:(id)arg0 viewControllerAtIndex:(long long)arg1;
- (void)slidingViewController:(id)arg0 didSelectIndex:(long long)arg1;
- (void)slidingViewController:(id)arg0 didFinishTransitionToIndex:(unsigned long long)arg1;
- (void)setSlidingViewController:(id)arg0;
- (id)navigationView;
- (void)setNavigationView:(id)arg0;
- (id)acc_zoomTransitionStartViewForItemOffset:(long long)arg0;
- (void)setCurrentSelectedVCIndex:(unsigned long long)arg0;
- (void)p_trackViewDidLoad;
- (id)slidingTabView;
- (unsigned long long)currentSelectedVCIndex;
- (void)viewController:(id)arg0 collectionViewDidScroll:(id)arg1;
- (void)viewController:(id)arg0 didSelectItemForModel:(id)arg1;
- (void)viewController:(id)arg0 cellWillDisplay:(id)arg1;
- (void)setSlidingTabView:(id)arg0;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (void)setViewModel:(id)arg0;
- (id)containerView;
- (id)viewModel;
- (void)viewDidLoad;
- (void)setupUI;
- (id)inputData;
- (void)setInputData:(id)arg0;

@end