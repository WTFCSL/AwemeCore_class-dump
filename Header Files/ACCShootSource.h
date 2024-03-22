//
//     Generated by private class-dump
//

@class UITouch;

@interface ACCShootSource : NSObject <NSCopying> {
    BOOL _enableHold;
    BOOL _holding;
    BOOL _orignalHoldingState;
    BOOL _forceStop;
    long long _sourceFrom;
    long long _subType;
    long long _sourceStage;
    double _holdingThreshold;
    UITouch *_touch;
    long long _completeType;
}

@property (nonatomic) long long sourceFrom;
@property (nonatomic) long long subType;
@property (nonatomic) long long sourceStage;
@property (nonatomic) BOOL enableHold;
@property (nonatomic) double holdingThreshold;
@property (nonatomic) BOOL holding;
@property (nonatomic) BOOL orignalHoldingState;
@property (retain, nonatomic) UITouch *touch;
@property (nonatomic) BOOL forceStop;
@property (nonatomic) long long completeType;

- (long long)sourceFrom;
- (void)setSourceFrom:(long long)arg0;
- (long long)sourceStage;
- (BOOL)enableHold;
- (void)setHoldingThreshold:(double)arg0;
- (void)setEnableHold:(BOOL)arg0;
- (void)setForceStop:(BOOL)arg0;
- (double)holdingThreshold;
- (void)setHolding:(BOOL)arg0;
- (void)setOrignalHoldingState:(BOOL)arg0;
- (void)setCompleteType:(long long)arg0;
- (long long)completeType;
- (void)setSourceStage:(long long)arg0;
- (BOOL)orignalHoldingState;
- (id)touch;
- (void)setTouch:(id)arg0;
- (void).cxx_destruct;
- (void)setSubType:(long long)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (long long)subType;
- (BOOL)forceStop;
- (id)description;
- (BOOL)holding;

@end