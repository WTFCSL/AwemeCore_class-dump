//
//     Generated by private class-dump
//

@interface VEAudioDetectorResult : IESMMObject {
    unsigned long long _type;
    double _peak;
    double _loudness;
}

@property (nonatomic) unsigned long long type;
@property (nonatomic) double peak;
@property (nonatomic) double loudness;

- (id)init;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg0;
- (double)loudness;
- (void)setLoudness:(double)arg0;
- (double)peak;
- (void)setPeak:(double)arg0;

@end
