//
//     Generated by private class-dump
//

@class NSDictionary;

@protocol BDWebImageDownloaderInfo <NSObject>

@property (nonatomic) long long maxConcurrentTaskCount;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) double timeoutIntervalForResource;
@property (copy, nonatomic) NSDictionary *defaultHeaders;
@property (nonatomic) BOOL enableLog;
@property (nonatomic) BOOL checkMimeType;
@property (nonatomic) BOOL checkDataLength;
@property (nonatomic) BOOL isCocurrentCallback;

- (BOOL)enableLog;
- (void)setEnableLog:(BOOL)arg0;
- (id)defaultHeaders;
- (BOOL)isCocurrentCallback;
- (void)setDefaultHeaders:(id)arg0;
- (long long)maxConcurrentTaskCount;
- (void)setMaxConcurrentTaskCount:(long long)arg0;
- (BOOL)checkMimeType;
- (void)setCheckMimeType:(BOOL)arg0;
- (BOOL)checkDataLength;
- (void)setCheckDataLength:(BOOL)arg0;
- (void)setIsCocurrentCallback:(BOOL)arg0;
- (void)setTimeoutInterval:(double)arg0;
- (double)timeoutIntervalForResource;
- (double)timeoutInterval;
- (void)setTimeoutIntervalForResource:(double)arg0;

@end