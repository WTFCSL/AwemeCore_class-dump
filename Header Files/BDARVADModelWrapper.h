//
//     Generated by private class-dump
//

@class BDARVADModel;

@interface BDARVADModelWrapper : NSObject {
    BDARVADModel *_adModel;
    double _savaTimestamp;
    long long _expiredTimestamp;
}

@property (retain, nonatomic) BDARVADModel *adModel;
@property (nonatomic) double savaTimestamp;
@property (nonatomic) long long expiredTimestamp;

+ (id)modelWrapperWithAD:(id)arg0 enableExpire:(BOOL)arg1;

- (id)adModel;
- (void)setAdModel:(id)arg0;
- (void)setSavaTimestamp:(double)arg0;
- (void)setExpiredTimestamp:(long long)arg0;
- (long long)expiredTimestamp;
- (double)savaTimestamp;
- (BOOL)isExpired;
- (void).cxx_destruct;

@end
