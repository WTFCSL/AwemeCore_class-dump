//
//     Generated by private class-dump
//

@class NSURL, NSString, NSArray;

@interface IESSCExportConfiguration : NSObject {
    BOOL _shouldOptimizeForNetworkUse;
    NSString *_fileType;
    NSURL *_outputURL;
    NSURL *_temporaryOutputURL;
    NSArray *_metadata;
    unsigned long long _exportMode;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _timeRange;
}

@property (retain, nonatomic) NSURL *temporaryOutputURL;
@property (retain, nonatomic) NSString *fileType;
@property (retain, nonatomic) NSURL *outputURL;
@property (nonatomic) BOOL shouldOptimizeForNetworkUse;
@property (copy, nonatomic) NSArray *metadata;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (nonatomic) unsigned long long exportMode;

- (id)createTemporaryURLWithExtension:(id)arg0;
- (void)setTemporaryOutputURL:(id)arg0;
- (unsigned long long)exportMode;
- (void)setExportMode:(unsigned long long)arg0;
- (id)outputURL;
- (void)setTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg0;
- (id)init;
- (void).cxx_destruct;
- (id)fileType;
- (void)setFileType:(id)arg0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (void)setShouldOptimizeForNetworkUse:(BOOL)arg0;
- (BOOL)shouldOptimizeForNetworkUse;
- (void)setMetadata:(id)arg0;
- (id)metadata;
- (void)setOutputURL:(id)arg0;
- (id)temporaryOutputURL;

@end
