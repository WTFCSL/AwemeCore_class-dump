//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveAnchorUploadBandwidthResultModel : NSObject {
    NSString *_preScheduleKey;
    double _expireTime;
    NSString *_recommendKey;
}

@property (retain, nonatomic) NSString *preScheduleKey;
@property (nonatomic) double expireTime;
@property (retain, nonatomic) NSString *recommendKey;

- (id)recommendKey;
- (id)initWithPreScheduleKey:(id)arg0 expireTime:(double)arg1 recommendKey:(id)arg2;
- (id)preScheduleKey;
- (void)setPreScheduleKey:(id)arg0;
- (void)setRecommendKey:(id)arg0;
- (void).cxx_destruct;
- (double)expireTime;
- (void)setExpireTime:(double)arg0;

@end