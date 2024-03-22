//
//     Generated by private class-dump
//

@class NSString, AWEUILoadingView, AWESettingBaseViewModel;

@interface AWEPrivacySettingBaseViewController : AWESettingBaseViewController <AWERouterViewControllerProtocol, AWEPrivacySettingBaseViewModelDelegate> {
    AWESettingBaseViewModel *_viewModel;
    AWEUILoadingView *_loadingView;
}

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AWESettingBaseViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)arg0;
- (BOOL)useCardUIStyle;
- (void)viewModelStartsLoading:(id)arg0;
- (void)viewModelDidReload:(id)arg0;
- (void)viewModel:(id)arg0 didInsertSections:(id)arg1;
- (void)viewModel:(id)arg0 didDeleteSections:(id)arg1;
- (void)viewModel:(id)arg0 didUpdateItemsAtIndexPaths:(id)arg1;
- (void)viewModel:(id)arg0 didInsertItemsAtIndexPaths:(id)arg1;
- (void)viewModel:(id)arg0 didDeleteItemsAtIndexPaths:(id)arg1;
- (void)viewModelBeginsUpdates:(id)arg0;
- (void)viewModelEndsUpdates:(id)arg0;
- (void)viewModelEndsLoading:(id)arg0;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)viewDidLoad;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end