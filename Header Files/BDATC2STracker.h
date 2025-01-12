//
//     Generated by private class-dump
//

@class BDATC2SConfig, NSURLSession, NSString, BDATCache;
@protocol BDATC2STrackerDelegate;

@interface BDATC2STracker : NSObject <NSURLSessionTaskDelegate, BDATC2STracker> {
    BDATC2SConfig *_config;
    BDATCache *_cache;
    id<BDATC2STrackerDelegate> _delegate;
    NSURLSession *_uploadSession;
}

@property (retain, nonatomic) NSURLSession *uploadSession;
@property (retain, nonatomic) BDATC2SConfig *config;
@property (retain, nonatomic) BDATCache *cache;
@property (weak, nonatomic) id<BDATC2STrackerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *trackerNamme;

+ (id)sessionConfiguration:(id)arg0;

- (void)setupTracker;
- (void)setUploadSession:(id)arg0;
- (void)trackURL:(id)arg0;
- (void)trackURLs:(id)arg0;
- (void)applicationWillResignActiveNotification:(id)arg0;
- (void)didReceivedNetworkChange:(id)arg0;
- (void)trackURL:(id)arg0 model:(id)arg1 tokens:(id)arg2;
- (void)resumeTrack:(id)arg0;
- (void)trackModel:(id)arg0;
- (id)trackerNamme;
- (void)setCache:(id)arg0;
- (id)cache;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)initWithConfig:(id)arg0;
- (id)delegate;
- (void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)applicationWillEnterForegroundNotification:(id)arg0;
- (id)uploadSession;

@end
