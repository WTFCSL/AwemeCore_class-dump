//
//     Generated by private class-dump
//

@class NSString, NSDictionary, IESECTracker, NSNumber, NSMutableArray;
@protocol IESECLiveContextInterface;

@interface IESECLiveStoreViewModel : NSObject {
    BOOL _isRequestOnAir;
    BOOL _loadmoreHasMore;
    NSMutableArray *_sortTypes;
    long long _selectedSortIndex;
    long long _currentSortType;
    NSMutableArray *_goods;
    NSString *_titleLabel;
    NSString *_countLabel;
    long long _goodsCount;
    id<IESECLiveContextInterface> _liveContext;
    NSDictionary *_storeInfoDict;
    IESECTracker *_tracker;
    NSNumber *_totalCount;
    long long _cursor;
}

@property (retain, nonatomic) NSNumber *totalCount;
@property (nonatomic) long long cursor;
@property (retain, nonatomic) NSMutableArray *sortTypes;
@property (nonatomic) long long selectedSortIndex;
@property (nonatomic) long long currentSortType;
@property (retain, nonatomic) NSMutableArray *goods;
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) BOOL loadmoreHasMore;
@property (retain, nonatomic) NSString *titleLabel;
@property (retain, nonatomic) NSString *countLabel;
@property (nonatomic) long long goodsCount;
@property (retain, nonatomic) id<IESECLiveContextInterface> liveContext;
@property (copy, nonatomic) NSDictionary *storeInfoDict;
@property (retain, nonatomic) IESECTracker *tracker;

- (void)setLoadmoreHasMore:(BOOL)arg0;
- (BOOL)loadmoreHasMore;
- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (BOOL)isRequestOnAir;
- (void)setIsRequestOnAir:(BOOL)arg0;
- (id)goods;
- (void)setGoods:(id)arg0;
- (void)fetchDataWithCompletion:(id /* block */)arg0;
- (long long)goodsCount;
- (void)setGoodsCount:(long long)arg0;
- (void)requestWithCompletion:(id /* block */)arg0;
- (void)setLiveContext:(id)arg0;
- (id)liveContext;
- (id)initWithContext:(id)arg0 StoreInfo:(id)arg1;
- (id)sortTypes;
- (id)storeInfoDict;
- (void)setSortTypes:(id)arg0;
- (void)setStoreInfoDict:(id)arg0;
- (long long)cursor;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)totalCount;
- (void)reset;
- (void)setTitleLabel:(id)arg0;
- (void)setCursor:(long long)arg0;
- (long long)selectedSortIndex;
- (id)countLabel;
- (void)setCountLabel:(id)arg0;
- (void)setTotalCount:(id)arg0;
- (void)setSelectedSortIndex:(long long)arg0;
- (void)setCurrentSortType:(long long)arg0;
- (long long)currentSortType;

@end
