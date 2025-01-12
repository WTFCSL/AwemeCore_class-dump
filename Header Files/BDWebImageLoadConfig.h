//
//     Generated by private class-dump
//

@class NSString;

@interface BDWebImageLoadConfig : NSObject <BDModelCustom> {
    unsigned long long _failedRetryCount;
    double _timeoutInterval;
    unsigned long long _maxDownloadTaskCount;
}

@property (nonatomic) unsigned long long failedRetryCount;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) unsigned long long maxDownloadTaskCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;

- (unsigned long long)maxDownloadTaskCount;
- (void)setMaxDownloadTaskCount:(unsigned long long)arg0;
- (void)setTimeoutInterval:(double)arg0;
- (void)setFailedRetryCount:(unsigned long long)arg0;
- (double)timeoutInterval;
- (unsigned long long)failedRetryCount;

@end
