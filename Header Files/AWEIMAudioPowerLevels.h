//
//     Generated by private class-dump
//

@interface AWEIMAudioPowerLevels : NSObject {
    float _average;
    float _peak;
}

@property (nonatomic) float average;
@property (nonatomic) float peak;

+ (id)levelsWithAverage:(float)arg0 peak:(float)arg1;

- (float)average;
- (void)setAverage:(float)arg0;
- (float)peak;
- (void)setPeak:(float)arg0;

@end
