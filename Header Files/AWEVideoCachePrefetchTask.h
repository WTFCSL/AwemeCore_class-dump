//
//     Generated by private class-dump
//

@interface AWEVideoCachePrefetchTask : AWEVideoCacheRequestTask

+ (id)taskWithURL:(id)arg0 queue:(id)arg1;
+ (id)taskWithURL:(id)arg0 cacheURL:(id)arg1 queue:(id)arg2;

- (void)setUpPrefetchTask;
- (id)initWithURL:(id)arg0 cacheURL:(id)arg1 queue:(id)arg2;
- (BOOL)startWithSize:(unsigned long long)arg0;
- (id)initWithURL:(id)arg0 queue:(id)arg1;

@end