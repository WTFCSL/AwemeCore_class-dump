//
//     Generated by private class-dump
//

@class NSString, NSDictionary, UICollectionView, NSMutableArray;

@protocol IESECTrendGoodsDataService <NSObject>

@property (weak, nonatomic) UICollectionView *mainCollection;
@property (copy, nonatomic) NSDictionary *extraDictionary;
@property (nonatomic) BOOL loadmoreHasMore;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (readonly, copy, nonatomic) NSString *requestID;

- (void)setLoadmoreHasMore:(BOOL)arg0;
- (BOOL)loadmoreHasMore;
- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (id)extraDictionary;
- (void)setExtraDictionary:(id)arg0;
- (void)addFeedBackParams:(id)arg0 index:(long long)arg1;
- (void)firstLoadWithCompletionHandler:(id /* block */)arg0;
- (id)mainCollection;
- (void)enterVideoFeedWithAwemeID:(id)arg0 index:(long long)arg1;
- (void)setMainCollection:(id)arg0;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (id)requestID;

@end
