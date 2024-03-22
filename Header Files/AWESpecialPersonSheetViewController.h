//
//     Generated by private class-dump
//

@class AWEExceptionContainerViewController, AWESpecialPersonSearchView, UICollectionView, NSString, UILabel, AWEUIKitViewControllerEmptyPageConfig, UIViewController;

@interface AWESpecialPersonSheetViewController : UIViewController <AWEExceptionContainerViewControllerDelegate> {
    AWESpecialPersonSearchView *_searchView;
    UICollectionView *_specialPersonCollectionView;
    UILabel *_titleLabel;
    UILabel *_searchEmptyPageTitleLabel;
    UILabel *_searchEmptyPageSubTitleLabel;
    UIViewController *_networkErrorVC;
    id /* block */ _retryBlock;
    AWEUIKitViewControllerEmptyPageConfig *_errorConfig;
    AWEExceptionContainerViewController *_emptyVC;
}

@property (retain, nonatomic) UICollectionView *specialPersonCollectionView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *searchEmptyPageTitleLabel;
@property (retain, nonatomic) UILabel *searchEmptyPageSubTitleLabel;
@property (retain, nonatomic) UIViewController *networkErrorVC;
@property (copy, nonatomic) id /* block */ retryBlock;
@property (retain, nonatomic) AWEUIKitViewControllerEmptyPageConfig *errorConfig;
@property (retain, nonatomic) AWEExceptionContainerViewController *emptyVC;
@property (retain, nonatomic) AWESpecialPersonSearchView *searchView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerRetryOnError;
- (id)emptyVC;
- (void)setEmptyVC:(id)arg0;
- (id)specialPersonCollectionView;
- (void)setEmptyPage;
- (void)setURLErrorPageWithRetryBlock:(id /* block */)arg0;
- (void)setSearchErrorPage;
- (void)setTitleWithString:(id)arg0;
- (void)setSpecialPersonCollectionView:(id)arg0;
- (void)setSearchEmptyPageTitleLabel:(id)arg0;
- (void)setSearchEmptyPageSubTitleLabel:(id)arg0;
- (id)searchEmptyPageTitleLabel;
- (id)searchEmptyPageSubTitleLabel;
- (id)errorConfig;
- (id)networkErrorVC;
- (void)setNetworkErrorVC:(id)arg0;
- (void)setErrorConfig:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (id)titleLabel;
- (void)setCollectionView:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id /* block */)retryBlock;
- (void)setRetryBlock:(id /* block */)arg0;
- (id)searchView;
- (void)setSearchView:(id)arg0;

@end
