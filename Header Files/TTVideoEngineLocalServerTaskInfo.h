//
//     Generated by private class-dump
//

@class NSString, TTVideoEngineURLInfo;

@interface TTVideoEngineLocalServerTaskInfo : NSObject {
    NSString *_key;
    NSString *_videoId;
    unsigned long long _resolution;
    NSString *_localFilePath;
    long long _mediaSize;
    long long _cacheSizeFromZero;
    NSString *_decryptionKey;
    long long _preloadSize;
    long long _taskType;
    TTVideoEngineURLInfo *_urlInfo;
}

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *videoId;
@property (nonatomic) unsigned long long resolution;
@property (copy, nonatomic) NSString *localFilePath;
@property (nonatomic) long long mediaSize;
@property (nonatomic) long long cacheSizeFromZero;
@property (copy, nonatomic) NSString *decryptionKey;
@property (nonatomic) long long preloadSize;
@property (nonatomic) long long taskType;
@property (retain, nonatomic) TTVideoEngineURLInfo *urlInfo;

- (long long)preloadSize;
- (void)setPreloadSize:(long long)arg0;
- (long long)cacheSizeFromZero;
- (void)setCacheSizeFromZero:(long long)arg0;
- (id)urlInfo;
- (void)setUrlInfo:(id)arg0;
- (id)key;
- (long long)taskType;
- (void)setResolution:(unsigned long long)arg0;
- (void)setVideoId:(id)arg0;
- (unsigned long long)resolution;
- (void).cxx_destruct;
- (void)setKey:(id)arg0;
- (id)videoId;
- (id)decryptionKey;
- (void)setDecryptionKey:(id)arg0;
- (void)setTaskType:(long long)arg0;
- (long long)mediaSize;
- (void)setMediaSize:(long long)arg0;
- (id)localFilePath;
- (void)setLocalFilePath:(id)arg0;

@end
