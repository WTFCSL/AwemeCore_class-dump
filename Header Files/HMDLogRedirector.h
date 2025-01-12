//
//     Generated by private class-dump
//

@class NSString, NSFileHandle, NSPipe;

@interface HMDLogRedirector : NSObject {
    int _originalStd;
    int _stdFd;
    NSString *_tag;
    NSPipe *_pipe;
    NSFileHandle *_readHandle;
    id /* block */ _callback;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _log_mutex;
}

@property (nonatomic) int originalStd;
@property (nonatomic) int stdFd;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } log_mutex;
@property (copy, nonatomic) NSString *tag;
@property (retain) NSPipe *pipe;
@property (retain) NSFileHandle *readHandle;
@property (copy, nonatomic) id /* block */ callback;

- (id)initWithOriginalStd:(int)arg0 AndTag:(id)arg1;
- (id)readHandle;
- (int)originalStd;
- (void)setStdFd:(int)arg0;
- (int)stdFd;
- (void)setReadHandle:(id)arg0;
- (void)redirectNotificationHandle:(id)arg0;
- (void)redirectToAlog:(BOOL)arg0 withCallback:(id /* block */)arg1;
- (void)setOriginalStd:(int)arg0;
- (struct _opaque_pthread_mutex_t { long long x0; char x1[56]; })log_mutex;
- (void)setLog_mutex:(struct _opaque_pthread_mutex_t { long long x0; char x1[56]; })arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setCallback:(id /* block */)arg0;
- (id /* block */)callback;
- (id)pipe;
- (void)setTag:(id)arg0;
- (id)tag;
- (void)setPipe:(id)arg0;

@end
