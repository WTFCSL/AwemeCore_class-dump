//
//     Generated by private class-dump
//

@interface ToygerSensorConfig : NSObject {
    float _static_threshold;
    float _rotation_threshold;
    float _offset;
}

@property (nonatomic) float static_threshold;
@property (nonatomic) float rotation_threshold;
@property (nonatomic) float offset;

- (float)static_threshold;
- (void)setStatic_threshold:(float)arg0;
- (float)rotation_threshold;
- (void)setRotation_threshold:(float)arg0;
- (id)init;
- (void)setOffset:(float)arg0;
- (float)offset;

@end
