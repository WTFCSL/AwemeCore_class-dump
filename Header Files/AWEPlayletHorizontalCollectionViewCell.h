//
//     Generated by private class-dump
//

@class NSString, UICollectionView, AWEPlayletScrollTailView, UIView, AWEPlayletCardInfoModel, AWEPlayletUserProfileTabCollectionHeaderView;

@interface AWEPlayletHorizontalCollectionViewCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    BOOL _isCurrentUserLogin;
    BOOL _isTransfering;
    BOOL _containJustSeenItem;
    id /* block */ _enterPlayletFeedListBlock;
    NSString *_justSeenAwemeID;
    UICollectionView *_horizontalList;
    AWEPlayletCardInfoModel *_playletCardModel;
    AWEPlayletUserProfileTabCollectionHeaderView *_headerView;
    AWEPlayletScrollTailView *_footerView;
    double _currentOffset;
    UIView *_containerView;
    double _originalScrollViewOffset;
}

@property (retain, nonatomic) UICollectionView *horizontalList;
@property (retain, nonatomic) AWEPlayletCardInfoModel *playletCardModel;
@property (retain, nonatomic) AWEPlayletUserProfileTabCollectionHeaderView *headerView;
@property (retain, nonatomic) AWEPlayletScrollTailView *footerView;
@property (nonatomic) BOOL isTransfering;
@property (nonatomic) double currentOffset;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) double originalScrollViewOffset;
@property (nonatomic) BOOL containJustSeenItem;
@property (copy, nonatomic) id /* block */ enterPlayletFeedListBlock;
@property (copy, nonatomic) NSString *justSeenAwemeID;
@property (nonatomic) BOOL isCurrentUserLogin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)scrollToIndex:(long long)arg0;
- (void)configWithModel:(id)arg0;
- (void)setOriginalScrollViewOffset:(double)arg0;
- (double)originalScrollViewOffset;
- (BOOL)isTransfering;
- (void)setIsTransfering:(BOOL)arg0;
- (void)setJustSeenAwemeID:(id)arg0;
- (void)setIsCurrentUserLogin:(BOOL)arg0;
- (void)setEnterPlayletFeedListBlock:(id /* block */)arg0;
- (void)setPlayletCardModel:(id)arg0;
- (id)playletCardModel;
- (id)horizontalList;
- (void)setContainJustSeenItem:(BOOL)arg0;
- (id)justSeenAwemeID;
- (void)enterFeedShouldWithWatchedHistory;
- (BOOL)containJustSeenItem;
- (BOOL)isCurrentUserLogin;
- (void)enterFeedList:(id)arg0;
- (void)updateFooterFrame;
- (id /* block */)enterPlayletFeedListBlock;
- (void)setHorizontalList:(id)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (double)currentOffset;
- (id)footerView;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void)setFooterView:(id)arg0;
- (void).cxx_destruct;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setHeaderView:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)containerView;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (id)headerView;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)setCurrentOffset:(double)arg0;
- (void)setUpUI;

@end
