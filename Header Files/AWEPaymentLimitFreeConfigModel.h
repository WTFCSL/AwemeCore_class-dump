//
//     Generated by private class-dump
//

@interface AWEPaymentLimitFreeConfigModel : AWEBaseApiModel {
    BOOL _isInLimitFree;
    double _startTime;
    double _endTime;
}

@property (nonatomic) BOOL isInLimitFree;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isInLimitFree;
- (void)setIsInLimitFree:(BOOL)arg0;
- (void)setStartTime:(double)arg0;
- (double)endTime;
- (double)startTime;
- (void)setEndTime:(double)arg0;

@end
