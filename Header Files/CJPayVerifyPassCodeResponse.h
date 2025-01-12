//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayVerifyPassCodeResponse : CJPayPassKitBaseResponse {
    int _remainRetryCount;
    int _remainLockTime;
    NSString *_remainLockDesc;
}

@property (nonatomic) int remainRetryCount;
@property (nonatomic) int remainLockTime;
@property (copy, nonatomic) NSString *remainLockDesc;

+ (id)keyMapper;

- (int)remainRetryCount;
- (void)setRemainRetryCount:(int)arg0;
- (id)remainLockDesc;
- (void)setRemainLockDesc:(id)arg0;
- (int)remainLockTime;
- (void)setRemainLockTime:(int)arg0;
- (void).cxx_destruct;

@end
