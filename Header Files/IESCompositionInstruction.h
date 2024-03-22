//
//     Generated by private class-dump
//

@class NSString, NSArray, NSMutableDictionary, IESMediaInfo, HTSGLFilter, NSMutableArray, IESMediaFilterInfo, HTSGLFilterTwoInput, HTSRawDataOutputRender, NSObject;
@protocol OS_dispatch_semaphore, HTSGLInput;

@interface IESCompositionInstruction : HTSFilterInterface <AVVideoCompositionInstruction> {
    BOOL _enablePostProcessing;
    BOOL _containsTweening;
    int _passthroughTrackID;
    int _trackId;
    NSArray *_requiredSourceTrackIDs;
    IESMediaInfo *_mediaInfo;
    NSArray *_inputInfos;
    NSMutableDictionary *_inputFilters;
    id<HTSGLInput> _outputFilter;
    NSMutableArray *_fillFilter;
    HTSGLFilterTwoInput *_mixFilter;
    HTSGLFilterTwoInput *_picMovieFilter;
    HTSGLFilter *_currentEffectTwoInputFilter;
    IESMediaFilterInfo *_currentEffectMediaFilterInfo;
    NSMutableDictionary *_currentEffectOneInputFilter;
    NSArray *_currentEffectTrackIDs;
    HTSRawDataOutputRender *_rawDataOutput;
    id /* block */ _easingFunction;
    NSObject<OS_dispatch_semaphore> *_sem_lock;
    struct CGSize { double width; double height; } _outputSize;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastFrameTime;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _timeRange;
}

@property (retain, nonatomic) IESMediaInfo *mediaInfo;
@property (retain, nonatomic) NSArray *inputInfos;
@property (retain, nonatomic) NSMutableDictionary *inputFilters;
@property (retain, nonatomic) id<HTSGLInput> outputFilter;
@property (retain, nonatomic) NSMutableArray *fillFilter;
@property (retain, nonatomic) HTSGLFilterTwoInput *mixFilter;
@property (retain, nonatomic) HTSGLFilterTwoInput *picMovieFilter;
@property (nonatomic) struct CGSize { double width; double height; } outputSize;
@property (retain, nonatomic) HTSGLFilter *currentEffectTwoInputFilter;
@property (retain, nonatomic) IESMediaFilterInfo *currentEffectMediaFilterInfo;
@property (retain, nonatomic) NSMutableDictionary *currentEffectOneInputFilter;
@property (retain, nonatomic) NSArray *currentEffectTrackIDs;
@property (retain, nonatomic) HTSRawDataOutputRender *rawDataOutput;
@property (copy, nonatomic) id /* block */ easingFunction;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastFrameTime;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem_lock;
@property (nonatomic) int trackId;
@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (readonly, nonatomic) BOOL enablePostProcessing;
@property (readonly, nonatomic) BOOL containsTweening;
@property (readonly, nonatomic) NSArray *requiredSourceTrackIDs;
@property (readonly, nonatomic) int passthroughTrackID;
@property (readonly, nonatomic) NSArray *requiredSourceSampleDataTrackIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fixOrientation:(id)arg0;

- (void)setOutputFilter:(id)arg0;
- (void)setFillFilter:(id)arg0;
- (id)buildFilter:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (id)currentEffectMediaFilterInfo;
- (id)currentEffectTwoInputFilter;
- (id)getPicKey:(id)arg0 resourceID:(id)arg1;
- (id)currentEffectTrackIDs;
- (void)setCurrentEffectTrackIDs:(id)arg0;
- (void)setCurrentEffectTwoInputFilter:(id)arg0;
- (void)setCurrentEffectMediaFilterInfo:(id)arg0;
- (id)initWithTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg0 inputInfos:(id)arg1 mediaInfo:(id)arg2 context:(id)arg3;
- (void)buildFilters;
- (id)fillFilter;
- (void)setMixFilter:(id)arg0;
- (id)picMovieFilter;
- (void)setPicMovieFilter:(id)arg0;
- (id /* block */)easingFunction;
- (void)setEasingFunction:(id /* block */)arg0;
- (void)renderWith:(id)arg0 pixelBuffer:(struct __CVBuffer { } *)arg1;
- (void)setCurrentEffectOneInputFilter:(id)arg0;
- (void)setRawDataOutput:(id)arg0;
- (id)rawDataOutput;
- (id)currentEffectOneInputFilter;
- (id)buildInputFilter:(id)arg0;
- (id)sem_lock;
- (void)setSem_lock:(id)arg0;
- (void)setInputInfos:(id)arg0;
- (id)getDeleteTrackID:(id)arg0 newTrackID:(id)arg1;
- (id)getAddTrackID:(id)arg0 newTrackID:(id)arg1;
- (id)inputInfos;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })outputSize;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (void)dealloc;
- (id)mixFilter;
- (BOOL)enablePostProcessing;
- (BOOL)containsTweening;
- (id)requiredSourceTrackIDs;
- (int)passthroughTrackID;
- (void)setOutputSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setTrackId:(int)arg0;
- (id)outputFilter;
- (int)trackId;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })lastFrameTime;
- (void)setLastFrameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (id)mediaInfo;
- (void)setMediaInfo:(id)arg0;
- (id)inputFilters;
- (void)setInputFilters:(id)arg0;

@end