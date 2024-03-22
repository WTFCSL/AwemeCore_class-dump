//
//     Generated by private class-dump
//

@class NSNumber, NSURLSessionDownloadTask;

@interface AWEStudioAwemeDownloadTask : NSObject {
    NSURLSessionDownloadTask *_task;
    unsigned long long _status;
    double _receivedImageCount;
    double _expectedImageCount;
    long long _taskCount;
    NSNumber *_progressValue;
}

@property (nonatomic) double receivedImageCount;
@property (nonatomic) double expectedImageCount;
@property (weak, nonatomic) NSURLSessionDownloadTask *task;
@property unsigned long long status;
@property (nonatomic) long long taskCount;
@property (retain, nonatomic) NSNumber *progressValue;
@property (readonly) double progress;

+ (id)fakeTaskWithStatus:(unsigned long long)arg0;

- (double)receivedImageCount;
- (double)expectedImageCount;
- (void)setTaskCount:(long long)arg0;
- (void)setReceivedImageCount:(double)arg0;
- (void)setExpectedImageCount:(double)arg0;
- (void).cxx_destruct;
- (unsigned long long)status;
- (void)setProgressValue:(id)arg0;
- (void)setStatus:(unsigned long long)arg0;
- (void)setTask:(id)arg0;
- (void)cancel;
- (double)progress;
- (id)progressValue;
- (BOOL)isCancelled;
- (id)task;
- (long long)taskCount;

@end
