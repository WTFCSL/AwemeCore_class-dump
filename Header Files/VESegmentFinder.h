//
//     Generated by private class-dump
//

@class IESQueue;

@interface VESegmentFinder : NSObject {
    IESQueue *_audioSegmentFinderQueue;
}

@property (retain, nonatomic) IESQueue *audioSegmentFinderQueue;

- (id)generateTempWavUrl:(id)arg0;
- (void)calcSegmentStartTimeWavSync:(id)arg0 originAudio:(id)arg1 completeCallback:(id /* block */)arg2;
- (void)calcSegmentStartTime:(id)arg0 originAudio:(id)arg1 completeCallback:(id /* block */)arg2;
- (void)calcSegmentStartTimeWavAsync:(id)arg0 originAudio:(id)arg1 completeCallback:(id /* block */)arg2;
- (id)audioSegmentFinderQueue;
- (void)setAudioSegmentFinderQueue:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)doInit;

@end
