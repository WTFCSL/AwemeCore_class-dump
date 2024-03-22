//
//     Generated by private class-dump
//

@protocol NSCoding;

@interface BDECIMCacheBoxObject : NSObject <NSCoding> {
    double _validityPeriod;
    double _cacheTime;
    id<NSCoding> _cacheObject;
}

@property (nonatomic) double validityPeriod;
@property (nonatomic) double cacheTime;
@property (retain, nonatomic) id<NSCoding> cacheObject;

- (double)cacheTime;
- (void)setCacheTime:(double)arg0;
- (void)setCacheObject:(id)arg0;
- (void)setValidityPeriod:(double)arg0;
- (double)validityPeriod;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (id)cacheObject;

@end
