//
//     Generated by private class-dump
//

@interface VEAIMomentFaceFeature : NSObject <WCTColumnCoding, NSCoding> {
    float _yaw;
    float _pitch;
    float _roll;
    float _realFaceProb;
    float _quailty;
    float _boyProb;
    float _age;
    float _happyScore;
    long long _faceId;
    struct VEEffectRectF { float left; float top; float right; float bottom; } _rect;
    struct VEEffectBoxI { int lu_x; int lu_y; int ru_x; int ru_y; int ld_x; int ld_y; int rd_x; int rd_y; } _box;
}

@property (nonatomic) long long faceId;
@property (nonatomic) struct VEEffectRectF { float left; float top; float right; float bottom; } rect;
@property (nonatomic) struct VEEffectBoxI { int lu_x; int lu_y; int ru_x; int ru_y; int ld_x; int ld_y; int rd_x; int rd_y; } box;
@property (nonatomic) float yaw;
@property (nonatomic) float pitch;
@property (nonatomic) float roll;
@property (nonatomic) float realFaceProb;
@property (nonatomic) float quailty;
@property (nonatomic) float boyProb;
@property (nonatomic) float age;
@property (nonatomic) float happyScore;

+ (int)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg0;

- (void)setBoyProb:(float)arg0;
- (void)setHappyScore:(float)arg0;
- (id)archivedWCTValue;
- (float)happyScore;
- (float)realFaceProb;
- (void)setRealFaceProb:(float)arg0;
- (float)boyProb;
- (id)acc_faceInfoDict;
- (float)quailty;
- (void)setQuailty:(float)arg0;
- (id)acc_bboxInfo;
- (id)acc_rect;
- (float)yaw;
- (float)roll;
- (void)setPitch:(float)arg0;
- (void)setRect:(struct VEEffectRectF { float x0; float x1; float x2; float x3; })arg0;
- (float)age;
- (float)pitch;
- (struct VEEffectRectF { float x0; float x1; float x2; float x3; })rect;
- (void)setAge:(float)arg0;
- (id)initWithCoder:(id)arg0;
- (id)description;
- (void)encodeWithCoder:(id)arg0;
- (void)setYaw:(float)arg0;
- (void)setRoll:(float)arg0;
- (long long)faceId;
- (void)setFaceId:(long long)arg0;
- (struct VEEffectBoxI { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; })box;
- (void)setBox:(struct VEEffectBoxI { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; })arg0;

@end
