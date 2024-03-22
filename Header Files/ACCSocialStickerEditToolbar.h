//
//     Generated by private class-dump
//

@class NSString, NSArray, AWEVideoPublishViewModel, ACCSocialStickeMentionBindingModel, NSDictionary, NSMutableSet, UICollectionView, NSMutableArray, UILabel;
@protocol ACCTextInputUserServiceProtocol;

@interface ACCSocialStickerEditToolbar : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    BOOL _isLoadingMore;
    BOOL _isFetchingRecommendUser;
    BOOL _didFetchRecommendUserSucceedOnceFlag;
    NSDictionary *_trackInfo;
    unsigned long long _stickerType;
    id /* block */ _onSelectMention;
    id /* block */ _onSelectHashTag;
    NSString *_searchKeyWord;
    ACCSocialStickeMentionBindingModel *_selectMentionBindingModel;
    AWEVideoPublishViewModel *_publishModel;
    id<ACCTextInputUserServiceProtocol> _userService;
    unsigned long long _loadStatus;
    id /* block */ _lastWaitFetchRecommendUserResultHandler;
    NSDictionary *_logPassback;
    NSArray *_users;
    NSArray *_challenges;
    UICollectionView *_collectionView;
    UILabel *_titleLabel;
    NSMutableSet *_videoAtListShowTrackedUser;
    NSMutableArray *_sugTrackedUser;
    NSString *_sugSessionID;
}

@property (copy, nonatomic) NSString *searchKeyWord;
@property (retain, nonatomic) ACCSocialStickeMentionBindingModel *selectMentionBindingModel;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) id<ACCTextInputUserServiceProtocol> userService;
@property (nonatomic) unsigned long long loadStatus;
@property (nonatomic) BOOL isLoadingMore;
@property (nonatomic) BOOL isFetchingRecommendUser;
@property (nonatomic) BOOL didFetchRecommendUserSucceedOnceFlag;
@property (copy, nonatomic) id /* block */ lastWaitFetchRecommendUserResultHandler;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (copy, nonatomic) NSArray *users;
@property (copy, nonatomic) NSArray *challenges;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSMutableSet *videoAtListShowTrackedUser;
@property (retain, nonatomic) NSMutableArray *sugTrackedUser;
@property (retain, nonatomic) NSString *sugSessionID;
@property (copy, nonatomic) NSDictionary *trackInfo;
@property (nonatomic) unsigned long long stickerType;
@property (copy, nonatomic) id /* block */ onSelectMention;
@property (copy, nonatomic) id /* block */ onSelectHashTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)defaulBarHeight;

- (id)logPassback;
- (void)setLogPassback:(id)arg0;
- (void)setStickerType:(unsigned long long)arg0;
- (BOOL)isLoadingMore;
- (void)setIsLoadingMore:(BOOL)arg0;
- (id)publishModel;
- (void)setPublishModel:(id)arg0;
- (id)searchKeyWord;
- (void)setSearchKeyWord:(id)arg0;
- (void)searchWithKeyword:(id)arg0;
- (void)p_updateSugSessionID;
- (id)sugSessionID;
- (id)sugTrackedUser;
- (void)setSugSessionID:(id)arg0;
- (void)setSugTrackedUser:(id)arg0;
- (id)userService;
- (void)setUserService:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 publishModel:(id)arg1;
- (id)videoAtListShowTrackedUser;
- (void)p_trackSugTrendingShowWithWordsNum:(long long)arg0;
- (void)setVideoAtListShowTrackedUser:(id)arg0;
- (BOOL)didFetchRecommendUserSucceedOnceFlag;
- (void)setDidFetchRecommendUserSucceedOnceFlag:(BOOL)arg0;
- (void)updateLoadStatus:(unsigned long long)arg0;
- (BOOL)isSelectedUserWithTargetUserModel:(id)arg0;
- (void)remakeLayout;
- (void)cleanFetchedData;
- (void)fetchRecommendUsersThen:(id /* block */)arg0;
- (void)handleHashTagFetchSucceed:(id)arg0 keyword:(id)arg1;
- (void)setLastWaitFetchRecommendUserResultHandler:(id /* block */)arg0;
- (id /* block */)lastWaitFetchRecommendUserResultHandler;
- (BOOL)isFetchingRecommendUser;
- (void)setIsFetchingRecommendUser:(BOOL)arg0;
- (BOOL)needHandleDataCallbackWithKeyword:(id)arg0;
- (void)updateTitleShowStatus;
- (id)selectMentionBindingModel;
- (id /* block */)onSelectMention;
- (id /* block */)onSelectHashTag;
- (void)fetchMoreUser;
- (void)handleUserDataFetchSucceed:(id)arg0 keyword:(id)arg1;
- (void)registerCollectionView;
- (void)updateSelectedMention:(id)arg0;
- (void)setOnSelectMention:(id /* block */)arg0;
- (void)setOnSelectHashTag:(id /* block */)arg0;
- (void)setSelectMentionBindingModel:(id)arg0;
- (BOOL)isMentionSticker;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumInteritemSpacingForSectionAtIndex:(long long)arg2;
- (id)users;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(long long)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (unsigned long long)loadStatus;
- (id)titleLabel;
- (void)setLoadStatus:(unsigned long long)arg0;
- (void)cancelSearch;
- (void)setCollectionView:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (void)setUsers:(id)arg0;
- (void)setupData;
- (id)trackInfo;
- (void)setTrackInfo:(id)arg0;
- (id)challenges;
- (void)setChallenges:(id)arg0;
- (unsigned long long)stickerType;
- (void)reloadView;

@end