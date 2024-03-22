//
//     Generated by private class-dump
//

@class TTHttpTask, NSString;

@interface AWEOfflineHttpTaskWrapper : NSObject <AWEHttpTask> {
    TTHttpTask *_httpTask;
}

@property (retain, nonatomic) TTHttpTask *httpTask;
@property (readonly) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHttpTask:(id)arg0;
- (id)httpTask;
- (void)continueNetworkTaskBlock:(id /* block */)arg0;
- (void)resume;
- (void).cxx_destruct;
- (long long)state;
- (void)suspend;
- (void)setPriority:(float)arg0;
- (void)cancel;

@end
