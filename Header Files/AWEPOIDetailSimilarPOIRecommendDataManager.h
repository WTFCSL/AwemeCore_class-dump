//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEPOIDetailSimilarPOIRecommendDataManager : AWEListDataController {
    NSString *_poiID;
    NSArray *_recommendData;
    long long _cursor;
}

@property (copy, nonatomic) NSArray *recommendData;
@property (nonatomic) long long cursor;
@property (copy, nonatomic) NSString *poiID;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (id)poiID;
- (void)setPoiID:(id)arg0;
- (id)recommendData;
- (void)setRecommendData:(id)arg0;
- (long long)cursor;
- (id)init;
- (void).cxx_destruct;
- (void)setCursor:(long long)arg0;
- (void)refreshWithCompletion:(id /* block */)arg0;

@end
