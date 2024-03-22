//
//     Generated by private class-dump
//

@class TTVideoEngineDownloader, NSString, NSArray, NSDictionary, NSError, NSMutableDictionary;

@interface TTVideoEngineDownloadTask : NSObject {
    BOOL _finished;
    BOOL _canceled;
    NSString *_taskDescription;
    long long _countOfBytesReceived;
    long long _countOfBytesExpectedToReceive;
    long long _state;
    NSError *_error;
    long long _taskIdentifier;
    NSString *_taskType;
    NSString *_availableLocalFilePath;
    NSArray *_mediaKeys;
    NSDictionary *_usingUrls;
    NSMutableDictionary *_bytesReceivedMap;
    NSMutableDictionary *_bytesExpectedToReceiveMap;
    NSString *_videoId;
    TTVideoEngineDownloader *_downloader;
    double _updateTs;
    long long _updateBytesReceived;
}

@property (nonatomic) long long taskIdentifier;
@property (copy, nonatomic) NSString *taskType;
@property (nonatomic) long long countOfBytesReceived;
@property (nonatomic) long long countOfBytesExpectedToReceive;
@property (nonatomic) long long state;
@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *availableLocalFilePath;
@property (copy, nonatomic) NSArray *mediaKeys;
@property (copy, nonatomic) NSDictionary *usingUrls;
@property (nonatomic) BOOL finished;
@property (nonatomic) BOOL canceled;
@property (retain, nonatomic) NSMutableDictionary *bytesReceivedMap;
@property (retain, nonatomic) NSMutableDictionary *bytesExpectedToReceiveMap;
@property (copy, nonatomic) NSString *videoId;
@property (weak, nonatomic) TTVideoEngineDownloader *downloader;
@property (nonatomic) double updateTs;
@property (nonatomic) long long updateBytesReceived;
@property (copy) NSString *taskDescription;

+ (id)taskItem;

- (void)setupBaseFiled;
- (id)mediaKeys;
- (void)setUpdateTs:(double)arg0;
- (BOOL)_shouldRetry:(id)arg0;
- (id)_debugInfoString;
- (void)receiveError:(id)arg0;
- (void)downloadEnd;
- (id)availableLocalFilePath;
- (void)assignWithDict:(id)arg0;
- (void)setAvailableLocalFilePath:(id)arg0;
- (void)setMediaKeys:(id)arg0;
- (id)usingUrls;
- (void)setUsingUrls:(id)arg0;
- (id)bytesReceivedMap;
- (void)setBytesReceivedMap:(id)arg0;
- (id)bytesExpectedToReceiveMap;
- (void)setBytesExpectedToReceiveMap:(id)arg0;
- (void)setDownloader:(id)arg0;
- (double)updateTs;
- (long long)updateBytesReceived;
- (void)setUpdateBytesReceived:(long long)arg0;
- (void)setFinished:(BOOL)arg0;
- (id)taskType;
- (void)invalidateAndCancel;
- (void)setVideoId:(id)arg0;
- (void)resume;
- (void).cxx_destruct;
- (long long)state;
- (long long)countOfBytesExpectedToReceive;
- (void)setState:(long long)arg0;
- (id)jsonDict;
- (void)suspend;
- (void)setTaskDescription:(id)arg0;
- (id)taskDescription;
- (BOOL)canceled;
- (id)videoId;
- (long long)taskIdentifier;
- (long long)countOfBytesReceived;
- (void)setCanceled:(BOOL)arg0;
- (void)setError:(id)arg0;
- (id)description;
- (id)downloader;
- (BOOL)finished;
- (id)error;
- (void)setTaskType:(id)arg0;
- (void)setCountOfBytesReceived:(long long)arg0;
- (void)setCountOfBytesExpectedToReceive:(long long)arg0;
- (void)setTaskIdentifier:(long long)arg0;

@end
