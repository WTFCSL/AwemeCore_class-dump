//
//     Generated by private class-dump
//

@class NSString;

@interface AWEBaseDetailContainerViewController : AWEBaseListViewController <AWEBaseDetailContainerViewControllerOverride, UIScrollViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg0;
- (void)dismissLoadingView;
- (BOOL)enableMemoryOptimizeWithNunki;
- (void)didReceiveMemeoryDangerLevelTopNotification;
- (void)_addNotifications;
- (void)setupContainerUI;
- (void)bindContainerViewModel;
- (void)addContainerNavigationView;
- (id)init;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)didReceiveMemoryWarning;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)showLoadingView;
- (void)setupCollectionView:(id)arg0;

@end
