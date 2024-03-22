//
//     Generated by private class-dump
//

@class LynxPlatformLength;

@interface LynxTransformRaw : NSObject {
    unsigned long long _p0Unit;
    unsigned long long _p1Unit;
    unsigned long long _p2Unit;
    float _p0;
    float _p1;
    float _p2;
    int _type;
    LynxPlatformLength *_platformLengthP0;
    LynxPlatformLength *_platformLengthP1;
    LynxPlatformLength *_platformLengthP2;
}

@property (nonatomic) float p0;
@property (nonatomic) float p1;
@property (nonatomic) float p2;
@property (retain, nonatomic) LynxPlatformLength *platformLengthP0;
@property (retain, nonatomic) LynxPlatformLength *platformLengthP1;
@property (retain, nonatomic) LynxPlatformLength *platformLengthP2;
@property (nonatomic) int type;

+ (id)toTransformRaw:(id)arg0;
+ (double)getRotateZRad:(id)arg0;
+ (BOOL)hasPercent:(id)arg0;
+ (BOOL)hasScaleOrRotate:(id)arg0;

- (BOOL)isRotate;
- (BOOL)isTranslate;
- (id)platformLengthP0;
- (id)platformLengthP1;
- (id)platformLengthP2;
- (BOOL)isRotateXY;
- (BOOL)isP0Percent;
- (BOOL)isP1Percent;
- (BOOL)isP2Percent;
- (void)setPlatformLengthP0:(id)arg0;
- (void)setPlatformLengthP1:(id)arg0;
- (void)setPlatformLengthP2:(id)arg0;
- (void).cxx_destruct;
- (id)initWithArray:(id)arg0;
- (int)type;
- (void)setType:(int)arg0;
- (float)p1;
- (float)p2;
- (float)p0;
- (void)setP0:(float)arg0;
- (void)setP1:(float)arg0;
- (void)setP2:(float)arg0;

@end