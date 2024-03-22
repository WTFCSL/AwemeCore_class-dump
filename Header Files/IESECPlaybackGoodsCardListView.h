//
//     Generated by private class-dump
//

@class IESECLiveRoomContext, IESECButton, NSArray, IESECPlaybackCardListDataSource, IESECLiveReplayCardModel, NSString, NSMutableArray, IESECQualityInfoV2, UICollectionView, NSNumber;
@protocol IESECPlaybackGoodsCardListViewDelegate;

@interface IESECPlaybackGoodsCardListView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, IESECLiveReplayInteractionProtocol, IESECPlaybackGoodsCardViewDelegate> {
    BOOL _isLiveStreaming;
    BOOL _didScroll;
    BOOL _didClick;
    BOOL _requestOnAir;
    IESECPlaybackCardListDataSource *_dataSource;
    UICollectionView *_collectionView;
    id<IESECPlaybackGoodsCardListViewDelegate> _delegate;
    IESECButton *_shrinkButton;
    IESECLiveReplayCardModel *_currentCardModel;
    long long _currentCardLocalIndex;
    NSArray *_goodsInVisiableCells;
    NSMutableArray *_expandCardPromotionIDArray;
    NSMutableArray *_smallCardPromotionIDArray;
    IESECLiveRoomContext *_roomContext;
    NSNumber *_replayStartTime;
    double _currentTime;
    double _totalDuration;
    IESECQualityInfoV2 *_qualityInfo;
    long long _mode;
}

@property (retain, nonatomic) IESECButton *shrinkButton;
@property (retain, nonatomic) IESECLiveReplayCardModel *currentCardModel;
@property (nonatomic) long long currentCardLocalIndex;
@property (retain, nonatomic) NSArray *goodsInVisiableCells;
@property (retain, nonatomic) NSMutableArray *expandCardPromotionIDArray;
@property (retain, nonatomic) NSMutableArray *smallCardPromotionIDArray;
@property (retain, nonatomic) IESECLiveRoomContext *roomContext;
@property (retain, nonatomic) NSNumber *replayStartTime;
@property (nonatomic) BOOL isLiveStreaming;
@property (nonatomic) double currentTime;
@property (nonatomic) double totalDuration;
@property (nonatomic) BOOL didScroll;
@property (nonatomic) BOOL didClick;
@property (retain, nonatomic) IESECQualityInfoV2 *qualityInfo;
@property (nonatomic) long long mode;
@property (nonatomic) BOOL requestOnAir;
@property (retain, nonatomic) IESECPlaybackCardListDataSource *dataSource;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) id<IESECPlaybackGoodsCardListViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)didClick;
- (void)setDidClick:(BOOL)arg0;
- (void)updateProgress:(double)arg0 totalDuration:(double)arg1;
- (id)ecomEntranceForm;
- (id)currentCardModel;
- (void)setCurrentCardModel:(id)arg0;
- (id)liveContext;
- (void)setIsLiveStreaming:(BOOL)arg0;
- (BOOL)requestOnAir;
- (void)setRequestOnAir:(BOOL)arg0;
- (void)setRoomContext:(id)arg0;
- (id)qualityInfo;
- (void)setQualityInfo:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 context:(id)arg1 params:(id)arg2 mode:(long long)arg3;
- (void)onSeekUpdate:(double)arg0;
- (BOOL)isFromGoodsDetail;
- (id)replayStartTime;
- (void)setReplayStartTime:(id)arg0;
- (void)showViewInParent:(id)arg0;
- (void)infoViewClicked;
- (BOOL)cardUseMultiMode;
- (long long)isFirstLocatedCardWithGoodsIndex:(long long)arg0;
- (void)setExpandCardPromotionIDArray:(id)arg0;
- (void)setSmallCardPromotionIDArray:(id)arg0;
- (void)setGoodsInVisiableCells:(id)arg0;
- (void)reloadDataAfterFetch:(BOOL)arg0;
- (id)shrinkButton;
- (void)setCurrentCardLocalIndex:(long long)arg0;
- (void)shrinkClick;
- (void)updateWithPlayerTime:(double)arg0;
- (long long)getNearestIndexOfCell:(double)arg0;
- (BOOL)haveExpandCard;
- (void)requestNextPageDataIfNeed:(double)arg0;
- (long long)getCurrentPage:(long long)arg0;
- (double)getCurrentCellOffset:(double)arg0;
- (long long)currentCardLocalIndex;
- (void)updateCurrentGoods;
- (BOOL)containValidGoods:(id)arg0;
- (BOOL)isInExplain:(id)arg0;
- (BOOL)shouldTrackShowUsingModel:(id)arg0;
- (void)trackSmallCardShowWithIndex:(long long)arg0 goodsModel:(id)arg1 cell:(id)arg2;
- (void)trackInfoViewCardWithGoodsModel:(id)arg0 cell:(id)arg1;
- (id)expandCardPromotionIDArray;
- (void)cardModeChangeIfNeedReplayUsingIndex:(long long)arg0;
- (double)getCurrentVideoTimeWithCellIndex:(long long)arg0;
- (void)cardModeChangeIfNeedUsingIndex:(long long)arg0;
- (long long)getCurrentPageWithOffset:(double)arg0;
- (id)smallCardPromotionIDArray;
- (id)goodsInVisiableCells;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 liveContext:(id)arg1 params:(id)arg2 mode:(long long)arg3 delegate:(id)arg4;
- (double)getCurrentCellWithScrollOffset:(double)arg0;
- (long long)getNearestLeftIndexOfCell:(double)arg0;
- (void)setShrinkButton:(id)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)reload;
- (double)totalDuration;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)goBack;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setCurrentTime:(double)arg0;
- (long long)mode;
- (void)setCollectionView:(id)arg0;
- (void)setMode:(long long)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)delegate;
- (BOOL)didScroll;
- (double)currentTime;
- (void)setDelegate:(id)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (id)flowLayout;
- (void)loadData;
- (void)setupUI;
- (void)setTotalDuration:(double)arg0;
- (BOOL)isLiveStreaming;
- (id)roomContext;
- (void)setDidScroll:(BOOL)arg0;

@end
