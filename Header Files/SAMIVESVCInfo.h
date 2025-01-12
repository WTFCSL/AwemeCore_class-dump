//
//     Generated by private class-dump
//

@class NSString, AVURLAsset;

@interface SAMIVESVCInfo : NSObject {
    unsigned long long _curTime;
    unsigned long long _totalTime;
    NSString *_uniqueKey;
    AVURLAsset *_srcAsset;
    NSString *_srcPath;
    NSString *_spkID;
    NSString *_targetPath;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _timeRange;
}

@property (nonatomic) unsigned long long curTime;
@property (nonatomic) unsigned long long totalTime;
@property (retain, nonatomic) NSString *uniqueKey;
@property (retain, nonatomic) AVURLAsset *srcAsset;
@property (retain, nonatomic) NSString *srcPath;
@property (retain, nonatomic) NSString *spkID;
@property (retain, nonatomic) NSString *targetPath;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;

+ (id)infoOfAsset:(id)arg0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg1 targetPath:(id)arg2 spkID:(id)arg3;

- (id)srcPath;
- (void)setSrcPath:(id)arg0;
- (void)setTargetPath:(id)arg0;
- (void)setSrcAsset:(id)arg0;
- (id)srcAsset;
- (unsigned long long)curTime;
- (id)spkID;
- (void)setSpkID:(id)arg0;
- (void)setCurTime:(unsigned long long)arg0;
- (void)setTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg0;
- (id)uniqueKey;
- (unsigned long long)totalTime;
- (void).cxx_destruct;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (void)setTotalTime:(unsigned long long)arg0;
- (void)setUniqueKey:(id)arg0;
- (id)targetPath;

@end
