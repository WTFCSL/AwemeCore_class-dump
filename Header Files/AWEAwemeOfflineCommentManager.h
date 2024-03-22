//
//     Generated by private class-dump
//

@class NSRecursiveLock, NSMutableDictionary, NSTimer, NSString, NSMutableArray;

@interface AWEAwemeOfflineCommentManager : NSObject <AWEOfflineCommentCacheProtocol> {
    BOOL _commentReadCompleted;
    NSRecursiveLock *_commentLock;
    NSMutableDictionary *_downloadedDict;
    NSMutableArray *_commentNoCachedArr;
    NSTimer *_offLineCommentCheckTimer;
    long long _commentAccumulateCacheCount;
    long long _commentAccumulateCount;
}

@property (retain, nonatomic) NSRecursiveLock *commentLock;
@property (retain, nonatomic) NSMutableDictionary *downloadedDict;
@property (retain, nonatomic) NSMutableArray *commentNoCachedArr;
@property (retain, nonatomic) NSTimer *offLineCommentCheckTimer;
@property (nonatomic) long long commentAccumulateCacheCount;
@property (nonatomic) long long commentAccumulateCount;
@property (nonatomic) BOOL commentReadCompleted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)getCommentModelWithModelItemID:(id)arg0;
- (BOOL)enableOfflineCommentCache;
- (long long)commentAccumulateCacheCount;
- (id)commentLock;
- (void)setDownloadedDict:(id)arg0;
- (id)downloadedDict;
- (void)setCommentReadCompleted:(BOOL)arg0;
- (void)getCommentCachedDictFromFileWithCompletion:(id /* block */)arg0;
- (void)checkAndUpdateComment;
- (BOOL)commentReadCompleted;
- (void)commentImageRequestWith:(id)arg0;
- (long long)commentAccumulateCount;
- (void)setCommentAccumulateCount:(long long)arg0;
- (void)saveCommentData;
- (void)verifyCommentsID:(id)arg0;
- (id)commentNoCachedArr;
- (void)storageToFlieWithCommentList:(id)arg0 key:(id)arg1 completion:(id /* block */)arg2;
- (void)setCommentNoCachedArr:(id)arg0;
- (void)preloadCommentWithItemID:(id)arg0;
- (void)removeCommentWithItemID:(id)arg0 onlyComment:(BOOL)arg1;
- (id)offLineCommentCheckTimer;
- (void)setOffLineCommentCheckTimer:(id)arg0;
- (void)invalidateCommentCheckTimer;
- (void)cleanAllCommentCache;
- (void)continueDownloadNoCachedComments;
- (long long)downloadedCommentCount;
- (void)setCommentLock:(id)arg0;
- (void)setCommentAccumulateCacheCount:(long long)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)applicationWillTerminate;
- (void)appDidEnterBackground;

@end
