//
//     Generated by private class-dump
//

@interface IESECGoodsDetailMemoryCacheItem : NSObject {
    double _timeout;
    double _cacheTime;
    id _object;
}

@property (nonatomic) double timeout;
@property (nonatomic) double cacheTime;
@property (retain, nonatomic) id object;
@property (readonly, nonatomic) BOOL expired;

- (double)cacheTime;
- (void)setCacheTime:(double)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)object;
- (double)timeout;
- (void)setObject:(id)arg0;
- (void)setTimeout:(double)arg0;
- (BOOL)expired;

@end
