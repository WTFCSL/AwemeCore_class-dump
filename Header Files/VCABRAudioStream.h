//
//     Generated by private class-dump
//

@class NSString;

@interface VCABRAudioStream : NSObject <IVCABRAudioStream> {
    int _segmentDuration;
    int _bandwidth;
    int _sampleRate;
    NSString *_streamId;
    NSString *_codec;
}

@property (copy, nonatomic, getter=getStreamId) NSString *streamId;
@property (copy, nonatomic, getter=getCodec) NSString *codec;
@property (nonatomic, getter=getSegmentDuration) int segmentDuration;
@property (nonatomic, getter=getBandwidth) int bandwidth;
@property (nonatomic, getter=getSampleRate) int sampleRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)getSampleRate;
- (id)getCodec;
- (int)getSegmentDuration;
- (int)getBandwidth;
- (void)setSegmentDuration:(int)arg0;
- (id)getStreamId;
- (void).cxx_destruct;
- (void)setStreamId:(id)arg0;
- (void)setCodec:(id)arg0;
- (void)setSampleRate:(int)arg0;
- (void)setBandwidth:(int)arg0;

@end
