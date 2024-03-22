//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface TTAVPreloaderItem : NSObject {
    NSArray *_supportedResolutionTypes;
    int _supportedResolutionMask;
    NSString *_vid;
    NSString *_URL;
    NSString *_filePath;
    long long _resolution;
    NSString *_fileKey;
    double _urlGenerateTime;
    long long _taskId;
}

@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) NSString *URL;
@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) long long resolution;
@property (copy, nonatomic) NSString *fileKey;
@property (nonatomic) double urlGenerateTime;
@property (nonatomic) int supportedResolutionMask;
@property (nonatomic) long long taskId;

- (id)supportedResolutionTypes;
- (id)vid;
- (void)setVid:(id)arg0;
- (id)fileKey;
- (void)setFileKey:(id)arg0;
- (double)urlGenerateTime;
- (int)supportedResolutionMask;
- (void)setUrlGenerateTime:(double)arg0;
- (void)setSupportedResolutionMask:(int)arg0;
- (void)setResolution:(long long)arg0;
- (long long)resolution;
- (id)filePath;
- (void).cxx_destruct;
- (void)setFilePath:(id)arg0;
- (void)setURL:(id)arg0;
- (id)URL;
- (long long)taskId;
- (void)setTaskId:(long long)arg0;

@end
