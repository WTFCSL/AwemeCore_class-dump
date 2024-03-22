//
//     Generated by private class-dump
//

@class NSString, IESMMAudioEffectConfig;

@interface IESMMAudioFilter : IESMMObject <NSCopying, KeyFrameOperationDelegate> {
    char *preProcessChunk;
    int chunkMemLength;
    int chunkSize;
    int _type;
    NSString *_filterId;
    IESMMAudioEffectConfig *_config;
    NSString *_audioPath;
    unsigned long long _startPTS;
    unsigned long long _endPTS;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _startTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _attachTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _duration;
}

@property (nonatomic) unsigned long long startPTS;
@property (nonatomic) unsigned long long endPTS;
@property (readonly, nonatomic) NSString *filterId;
@property (nonatomic) int type;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } attachTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (retain, nonatomic) IESMMAudioEffectConfig *config;
@property (retain, nonatomic) NSString *audioPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)infoAudioFilterWithDic:(id)arg0;

- (void)setPreProcessFromChunk:(const void *)arg0 length:(int)arg1;
- (void)setkeyFrameInfo:(id)arg0 withPts:(unsigned long long)arg1;
- (void)removekeyFrameInfo:(unsigned long long)arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })attachTime;
- (void)setAttachTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (BOOL)isRangeFilter;
- (id)toDicInfo;
- (void)removeallKeyFrameInfo;
- (id)getKeyFrameInfo;
- (void)completeUpdateAllkeyFrames;
- (unsigned long long)getKeyFrameNum;
- (BOOL)needRefreshKeyFrame;
- (id)toDicInfo:(BOOL)arg0;
- (double)startTimeI;
- (double)endTimeI;
- (void)setStartPTS:(unsigned long long)arg0;
- (void)setEndPTS:(unsigned long long)arg0;
- (char *)getPreProcessFromChunk:(int *)arg0;
- (unsigned long long)startPTS;
- (unsigned long long)endPTS;
- (void)setAudioPath:(id)arg0;
- (id)audioPath;
- (id)initWithPath:(id)arg0;
- (id)init;
- (void)setConfig:(id)arg0;
- (void)setStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void).cxx_destruct;
- (id)config;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (int)type;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (void)setType:(int)arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })startTime;
- (id)description;
- (void)dealloc;
- (void)setDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (id)filterId;

@end
