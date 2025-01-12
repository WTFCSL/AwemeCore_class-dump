//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSString, AWEPOINearbyHotPrefetcher, AWERxProperty;

@interface AWEPOINearbyHotListDataController : AWEListDataController {
    AWERxProperty *_isRequesting;
    AWERxProperty *_feedList;
    AWERxProperty *_hasMoreData;
    NSString *_poiId;
    double _longitude;
    double _latitude;
    AWEPOINearbyHotPrefetcher *_prefetcher;
    long long _page;
    long long _pageSize;
    NSMutableDictionary *_rawToFiltered;
}

@property (nonatomic) long long page;
@property (nonatomic) long long pageSize;
@property (retain, nonatomic) NSMutableDictionary *rawToFiltered;
@property (retain, nonatomic) AWERxProperty *isRequesting;
@property (retain, nonatomic) AWERxProperty *feedList;
@property (retain, nonatomic) AWERxProperty *hasMoreData;
@property (copy, nonatomic) NSString *poiId;
@property (nonatomic) double longitude;
@property (nonatomic) double latitude;
@property (retain, nonatomic) AWEPOINearbyHotPrefetcher *prefetcher;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (long long)filteredDataSourceIndexFromIndex:(long long)arg0;
- (void)setIsRequesting:(id)arg0;
- (id)isRequesting;
- (id)rawToFiltered;
- (void)setRawToFiltered:(id)arg0;
- (id)feedList;
- (void)setFeedList:(id)arg0;
- (void)setPrefetcher:(id)arg0;
- (id)prefetcher;
- (void)p_handleResponse:(id)arg0 error:(id)arg1 completion:(id /* block */)arg2;
- (void)p_fetchData:(id /* block */)arg0;
- (id)distanceByLongitude:(double)arg0 latitude:(double)arg1 longitude:(double)arg2 latitude:(double)arg3;
- (void)setLongitude:(double)arg0;
- (id)init;
- (double)longitude;
- (double)latitude;
- (long long)page;
- (void)setLatitude:(double)arg0;
- (void).cxx_destruct;
- (void)setPage:(long long)arg0;
- (id)hasMoreData;
- (void)refreshWithCompletion:(id /* block */)arg0;
- (id)poiId;
- (void)setPoiId:(id)arg0;
- (long long)pageSize;
- (void)setPageSize:(long long)arg0;
- (void)setHasMoreData:(id)arg0;

@end
