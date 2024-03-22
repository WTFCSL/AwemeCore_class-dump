//
//     Generated by private class-dump
//

@class NSString, AWEDiskCleanViewModel, DUXLoadingToast;

@interface AWEDiskManageBaseViewController : UIViewController {
    NSString *_enterFrom;
    AWEDiskCleanViewModel *_viewModel;
    DUXLoadingToast *_cleanLoading;
}

@property (retain, nonatomic) DUXLoadingToast *cleanLoading;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) AWEDiskCleanViewModel *viewModel;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)backBtnClick;
- (void)configNavigationBar;
- (void)observeDeleteDrafts;
- (void)moreBtnClick;
- (void)setCleanLoading:(id)arg0;
- (id)cleanLoading;
- (void)showCleanDraftToast;
- (void)gotoDraftBox;
- (void)alertWithCleanType:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)dealloc;
- (void)viewDidLoad;

@end