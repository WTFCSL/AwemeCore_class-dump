//
//     Generated by private class-dump
//

@class NSHashTable;

@interface AWEDiscoverDPlayletNetworkService : NSObject {
    NSHashTable *_hashTable;
}

@property (retain, nonatomic) NSHashTable *hashTable;

+ (void)requestPlayletDetailInfo:(id)arg0 completeBlock:(id /* block */)arg1;
+ (void)savePlayletID:(id)arg0 playCurrentEpisode:(id)arg1;
+ (void)requestPaymentMixVideoWithAwemeID:(id)arg0 uploadTrack:(BOOL)arg1;
+ (void)requestPaymentVideoWithAwemeID:(id)arg0 referString:(id)arg1 playProgress:(double)arg2 uploadTrack:(BOOL)arg3;
+ (void)requestIAAPaymentVideoWithAwemeID:(id)arg0 uploadTrack:(BOOL)arg1 afterLogin:(BOOL)arg2;
+ (void)requestIAAPaymentVideoWithAwemeID:(id)arg0 referString:(id)arg1 playProgress:(double)arg2 uploadTrack:(BOOL)arg3 completion:(id /* block */)arg4;
+ (void)requestPlayletCollectWithID:(id)arg0 action:(unsigned long long)arg1 completeBlock:(id /* block */)arg2;
+ (void)requestLoginBeforePlayletCollectWithCompleteBlcok:(id /* block */)arg0;
+ (void)uploadPaymentVideoWatchRecord:(id)arg0 completion:(id /* block */)arg1;
+ (void)requestPlayletVideoList:(id)arg0 cursor:(id)arg1 count:(id)arg2 pullDown:(BOOL)arg3 completeBlock:(id /* block */)arg4;
+ (void)requestPlayletRecommendListWithPlayletIDs:(id)arg0 completeBlock:(id /* block */)arg1;
+ (id)lastReadEpisodeForPlayletID:(id)arg0;
+ (void)requestPlayletUserList:(id)arg0 cursor:(id)arg1 count:(id)arg2 completeBlock:(id /* block */)arg3;
+ (void)requestPlayletUserProfileTabList:(id)arg0 cursor:(id)arg1 count:(id)arg2 completeBlock:(id /* block */)arg3;
+ (void)savePlayletHistoryWithID:(id)arg0 playCurrentEpisode:(id)arg1 awemeID:(id)arg2;
+ (void)requestPlayletOrderWithParams:(id)arg0 completeBlock:(id /* block */)arg1;
+ (void)requestPlayletPaymetVideosWithPlayletID:(id)arg0 completeBlock:(id /* block */)arg1;
+ (void)registerObserver:(id)arg0;
+ (id)shareInstance;

- (id)hashTable;
- (void)setHashTable:(id)arg0;
- (void).cxx_destruct;

@end