//
//     Generated by private class-dump
//

@class NSMutableArray, NSMutableDictionary;
@protocol IESMMAudioProcessorExProtocol;

@interface IESMMAudioSourceProvider : IESMMObject {
    struct opaqueMTAudioProcessingTap { } *_tap;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _asbd;
    NSMutableArray *_filters;
    NSMutableDictionary *_filterRangeInfo;
    id<IESMMAudioProcessorExProtocol> _audioProcess;
    long long _tapProcessStatus;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _effectiveRange;
}

@property (retain, nonatomic) NSMutableArray *filters;
@property (retain, nonatomic) NSMutableDictionary *filterRangeInfo;
@property (retain, nonatomic) id<IESMMAudioProcessorExProtocol> audioProcess;
@property (nonatomic) long long tapProcessStatus;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } effectiveRange;
@property (readonly, nonatomic) const struct opaqueMTAudioProcessingTap { } *tap;

+ (id)sharedExportInstance;
+ (id)sharedInstance;

- (id)filterRangeInfo;
- (void)processProc:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg0 withTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg1;
- (void)setTapProcessStatus:(long long)arg0;
- (void)setAudioProcess:(id)arg0;
- (void)addFilter:(id)arg0 forRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg1;
- (void)addFiltersArray:(id)arg0 forRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg1;
- (id)allFilters;
- (void)process:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg0 withTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg1;
- (void)changAudioEffectProcess:(id)arg0;
- (long long)tapProcessStatus;
- (id)audioProcess;
- (void)setEffectiveRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg0;
- (void)setFilterRangeInfo:(id)arg0;
- (void)resetStatus;
- (id)init;
- (void)setFilters:(id)arg0;
- (void)removeFilter:(id)arg0;
- (void).cxx_destruct;
- (id)filters;
- (void)dealloc;
- (const struct opaqueMTAudioProcessingTap { } *)tap;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })effectiveRange;

@end
