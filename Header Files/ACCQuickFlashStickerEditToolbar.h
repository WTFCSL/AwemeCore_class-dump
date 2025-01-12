//
//     Generated by private class-dump
//

@class CAGradientLayer, NSArray, UICollectionView, NSString, AWEVideoPublishViewModel, NSMutableArray, UIView;
@protocol ACCFriendsServiceProtocol;

@interface ACCQuickFlashStickerEditToolbar : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    BOOL _gradientLayerFadeout;
    BOOL _isFetching;
    unsigned long long _limitSelectedCount;
    id /* block */ _didSelectUserBlock;
    id /* block */ _clickLittleInspirationBlock;
    AWEVideoPublishViewModel *_publishModel;
    id<ACCFriendsServiceProtocol> _friendsService;
    unsigned long long _loadStatus;
    NSArray *_userList;
    NSMutableArray *_selectedUserIdList;
    UIView *_littleInspirationView;
    UICollectionView *_collectionView;
    CAGradientLayer *_gradientLayer;
}

@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) id<ACCFriendsServiceProtocol> friendsService;
@property (nonatomic) unsigned long long loadStatus;
@property (copy, nonatomic) NSArray *userList;
@property (retain, nonatomic) NSMutableArray *selectedUserIdList;
@property (retain, nonatomic) UIView *littleInspirationView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) BOOL gradientLayerFadeout;
@property (nonatomic) BOOL isFetching;
@property (nonatomic) unsigned long long limitSelectedCount;
@property (copy, nonatomic) id /* block */ didSelectUserBlock;
@property (copy, nonatomic) id /* block */ clickLittleInspirationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)defaulBarHeight;

- (id)publishModel;
- (void)setPublishModel:(id)arg0;
- (void)setUserList:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 publishModel:(id)arg1;
- (id)littleInspirationView;
- (void)fetchRecommendUsers;
- (void)updateLoadStatus:(unsigned long long)arg0;
- (void)handleUserDataFetchSucceed:(id)arg0;
- (void)setSelectedUserIdList:(id)arg0;
- (id)friendsService;
- (id)selectedUserIdList;
- (id /* block */)clickLittleInspirationBlock;
- (BOOL)isSelectedUserWithTargetUserModel:(id)arg0;
- (unsigned long long)limitSelectedCount;
- (id /* block */)didSelectUserBlock;
- (BOOL)gradientLayerFadeout;
- (void)setGradientLayerFadeout:(BOOL)arg0;
- (void)littleInspirationTap:(id)arg0;
- (void)updateSelectedUserIds:(id)arg0;
- (void)setLimitSelectedCount:(unsigned long long)arg0;
- (void)setDidSelectUserBlock:(id /* block */)arg0;
- (void)setClickLittleInspirationBlock:(id /* block */)arg0;
- (void)setFriendsService:(id)arg0;
- (void)setLittleInspirationView:(id)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumInteritemSpacingForSectionAtIndex:(long long)arg2;
- (void)dismiss;
- (id)gradientLayer;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(long long)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (unsigned long long)loadStatus;
- (void)show;
- (void)setLoadStatus:(unsigned long long)arg0;
- (void)setCollectionView:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)userList;
- (void)setGradientLayer:(id)arg0;
- (void)setupUI;
- (void)setupData;
- (BOOL)isFetching;
- (void)setIsFetching:(BOOL)arg0;
- (void)reloadView;

@end
