//
//     Generated by private class-dump
//

@class NSString, NSError, VEVideoConfig, VEffmpegReader;
@protocol VEVideoProcessDelegate;

@interface VEFFmpegReaderUnit : NSObject <VEVideoProcessDelegate> {
    id<VEVideoProcessDelegate> _videoDownstream;
    NSError *_error;
    VEVideoConfig *_configData;
    VEffmpegReader *_ffmepgeReader;
}

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) VEVideoConfig *configData;
@property (retain, nonatomic) VEffmpegReader *ffmepgeReader;
@property (weak, nonatomic) id<VEVideoProcessDelegate> videoDownstream;
@property (readonly, nonatomic) const struct opaqueCMFormatDescription { } *vtDesc;
@property (readonly, nonatomic) int maxRefFrames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setConfigData:(id)arg0;
- (id)configData;
- (id)getReaderError;
- (void)cancelReader;
- (id)videoDownstream;
- (BOOL)processSampleData:(id)arg0;
- (int)maxRefFrames;
- (void)seektoTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)setVideoDownstream:(id)arg0;
- (id)ffmepgeReader;
- (void)setFfmepgeReader:(id)arg0;
- (const struct opaqueCMFormatDescription { } *)vtDesc;
- (long long)getNeighborKeyTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 flags:(int)arg1;
- (id)getAllIFrameTimeStamp;
- (double)getAvgFrameRate;
- (id)init;
- (BOOL)setConfig:(id)arg0;
- (void).cxx_destruct;
- (void)setError:(id)arg0;
- (void)dealloc;
- (id)error;
- (BOOL)startReader;
- (void)stopReader;

@end
