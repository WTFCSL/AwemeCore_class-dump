//
//     Generated by private class-dump
//

@class NSURLSession;
@protocol BUPersistenceProtocol;

@interface CSJURLTracker : NSObject {
    id<BUPersistenceProtocol> _persistence;
    NSURLSession *_uploadSession;
}

@property (retain, nonatomic) id<BUPersistenceProtocol> persistence;
@property (retain, nonatomic) NSURLSession *uploadSession;

+ (id)shareURLTracker;

- (void)trackURLs:(id)arg0 model:(id)arg1;
- (void)receiveWillEnterForegroundNotification:(id)arg0;
- (void)setUploadSession:(id)arg0;
- (void)trackURL:(id)arg0;
- (void)trackURL:(id)arg0 model:(id)arg1;
- (void)cacheFailedURL:(id)arg0 dict:(id)arg1;
- (void)trackURL:(id)arg0 model:(id)arg1 isNormal:(BOOL)arg2;
- (id)urlCachedKey:(id)arg0 dataDict:(id)arg1;
- (id)adIdCachedKey:(id)arg0 dataDict:(id)arg1;
- (long long)timesCachedKey:(id)arg0 dataDict:(id)arg1;
- (void)removeURLFromCacheWithKey:(id)arg0;
- (void)addTimesCachedKey:(id)arg0 dataDict:(id)arg1;
- (void)trackURLs:(id)arg0;
- (id)init;
- (id)persistence;
- (void).cxx_destruct;
- (void)setPersistence:(id)arg0;
- (void)dealloc;
- (id)uploadSession;

@end
