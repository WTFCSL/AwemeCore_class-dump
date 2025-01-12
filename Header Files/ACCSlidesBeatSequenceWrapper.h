//
//     Generated by private class-dump
//

@class ACCSlidesBeatSequenceGenerator;

@interface ACCSlidesBeatSequenceWrapper : NSObject {
    ACCSlidesBeatSequenceGenerator *_generator;
}

@property (retain, nonatomic) ACCSlidesBeatSequenceGenerator *generator;

- (double)genertateBeatWithTime:(double)arg0 mediaDuration:(double)arg1 mediaType:(unsigned long long)arg2;
- (double)matchBeatWithTime:(double)arg0 mediaDuration:(double)arg1 elasticDuration:(double)arg2 mediaType:(unsigned long long)arg3;
- (void).cxx_destruct;
- (id)generator;
- (void)setGenerator:(id)arg0;
- (id)initWithGenerator:(id)arg0;

@end
