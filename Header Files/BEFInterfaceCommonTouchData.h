//
//     Generated by private class-dump
//

@interface BEFInterfaceCommonTouchData : NSObject {
    unsigned long long _identify;
    unsigned long long _actionType;
    double _pressureForce;
    double _majorRadius;
    double _timestamp;
    struct CGPoint { double x; double y; } _pos;
}

@property (nonatomic) unsigned long long identify;
@property (nonatomic) unsigned long long actionType;
@property (nonatomic) struct CGPoint { double x; double y; } pos;
@property (nonatomic) double pressureForce;
@property (nonatomic) double majorRadius;
@property (nonatomic) double timestamp;

- (void)setPressureForce:(double)arg0;
- (double)pressureForce;
- (void)setActionType:(unsigned long long)arg0;
- (struct CGPoint { double x0; double x1; })pos;
- (double)timestamp;
- (unsigned long long)actionType;
- (void)setPos:(struct CGPoint { double x0; double x1; })arg0;
- (double)majorRadius;
- (void)setTimestamp:(double)arg0;
- (void)setMajorRadius:(double)arg0;
- (id)initWithTouch:(id)arg0;
- (unsigned long long)identify;
- (void)setIdentify:(unsigned long long)arg0;

@end
