//
//     Generated by private class-dump
//

@interface AWELiveShelfCacheItem : NSObject {
    BOOL _isValid;
    id _cacheData;
    double _cacheTime;
}

@property (retain, nonatomic) id cacheData;
@property (nonatomic) double cacheTime;
@property (nonatomic) BOOL isValid;

- (double)cacheTime;
- (void)setCacheTime:(double)arg0;
- (id)cacheData;
- (void)setCacheData:(id)arg0;
- (void)setIsValid:(BOOL)arg0;
- (void).cxx_destruct;
- (BOOL)isValid;

@end
