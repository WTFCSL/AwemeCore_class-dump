//
//     Generated by private class-dump
//

@class AWEEmptyPageSectionController, NSString, UICollectionView;

@interface AWEFansListViewController : AWERelationListViewController <UIScrollViewDelegate, AWEFansListViewControllerProtocol> {
    BOOL _recordTTI;
    BOOL _fetchUserListOnly;
    id /* block */ didBlockUser;
    UICollectionView *_collectionView;
    AWEEmptyPageSectionController *_emptySectionController;
}

@property (weak, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL recordTTI;
@property (nonatomic) BOOL fetchUserListOnly;
@property (retain, nonatomic) AWEEmptyPageSectionController *emptySectionController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ didBlockUser;

+ (Class)aAWEVCDAuthorizeDOUYINHTSAdapterClass;

- (id)aweui_emptyPageConfigForState:(unsigned long long)arg0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg0;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)arg0 forSectionViewModel:(id)arg1;
- (void)listDidReloadDataWithCollectionView:(id)arg0;
- (void)addBinding;
- (void)setDidBlockUser:(id /* block */)arg0;
- (id /* block */)didBlockUser;
- (id)aAWEVCDAuthorizeDOUYINHTSAdapter;
- (void)setFetchUserListOnly:(BOOL)arg0;
- (BOOL)fetchUserListOnly;
- (void)reloadEmptyHeight;
- (BOOL)recordTTI;
- (void)setRecordTTI:(BOOL)arg0;
- (void)setEmptySectionController:(id)arg0;
- (double)emptyViewHeight;
- (id)emptySectionController;
- (void)transferToHelpDesk;
- (id)initWithContext:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)collectionView;
- (void)setCollectionView:(id)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)endRefreshing;
- (void)setupCollectionView:(id)arg0;

@end
