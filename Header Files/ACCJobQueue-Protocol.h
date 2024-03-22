//
//     Generated by private class-dump
//

@protocol ACCJobQueue <NSObject>

- (id)allJobs:(id)arg0;
- (long long)intensiveType;
- (id)cancelAll:(id)arg0;
- (void)enqueue:(id)arg0;
- (id)context;
- (unsigned long long)count:(id)arg0;
- (id)initWith:(long long)arg0;
- (BOOL)isEmpty:(id)arg0;

@optional

- (id)takeJobs:(id)arg0;
- (BOOL)canDequeue:(id)arg0;
- (id)takeAll:(id)arg0;
- (id)allGroupNamesOfJob;
- (id)dequeue:(id)arg0;
- (id)peek:(id)arg0;

@end
