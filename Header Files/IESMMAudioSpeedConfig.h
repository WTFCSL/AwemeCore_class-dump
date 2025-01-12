//
//     Generated by private class-dump
//

@interface IESMMAudioSpeedConfig : IESMMAudioEffectConfig {
    BOOL _reservePitch;
    double _speedRate;
}

@property (nonatomic) double speedRate;
@property (nonatomic) BOOL reservePitch;

- (void)setSpeedRate:(double)arg0;
- (void)setReservePitch:(BOOL)arg0;
- (id)toDicInfo;
- (void)setupDefaultValues;
- (BOOL)reservePitch;
- (double)speedRate;
- (id)copyWithZone:(struct _NSZone { } *)arg0;

@end
