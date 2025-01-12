//
//     Generated by private class-dump
//

@protocol AWEOpenShareService <HTSService>

+ (void)startShareWithResp:(id)arg0 params:(id)arg1 completion:(id /* block */)arg2;
+ (void)registerShareServiceWithShareDelegate:(id)arg0;
+ (id)getShareDelegate;
+ (BOOL)requireLoginBeforeStart;
+ (void)getInvokeGameInfoWithSecUid:(id)arg0 roomId:(id)arg1 gameId:(id)arg2 completion:(id /* block */)arg3;
+ (void)reportShareWithID:(id)arg0 when:(long long)arg1 params:(id)arg2;
+ (void)addShareTrackInfo:(id)arg0 toPublishModel:(id)arg1;
+ (id)sharedInstance;

@optional

- (void)getPasteboardItemsWithCert:(id)arg0 completion:(id /* block */)arg1;
- (void)handleAwemeShareWithDict:(id)arg0;

@end
