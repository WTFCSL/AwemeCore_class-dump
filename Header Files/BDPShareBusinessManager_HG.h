//
//     Generated by private class-dump
//

@class NSString, NSMapTable;

@interface BDPShareBusinessManager_HG : NSObject <BDPWarmBootMessage> {
    NSMapTable *_shareInstanceMaps;
}

@property (retain) NSMapTable *shareInstanceMaps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)onShareBeginWithPrepareModel:(id)arg0 uniqueID:(id)arg1;
+ (void)getShareResultModelForShareChannel:(id)arg0 withUniqueID:(id)arg1 callback:(id /* block */)arg2;
+ (void)eventPublishWithName:(id)arg0 uniqueID:(id)arg1 extra:(id)arg2;
+ (void)onShareDoneWithResult:(long long)arg0 uniqueID:(id)arg1 errMsg:(id)arg2;
+ (id)getShareChannelBlockListWithUniqueID:(id)arg0;
+ (void)onShareDoneWithResultAndExtra:(long long)arg0 extra:(id)arg1 uniqueID:(id)arg2 errMsg:(id)arg3;
+ (void)getPreviewShareResultModelWithUniqueID:(id)arg0 callback:(id /* block */)arg1;
+ (id)getShareInstanceWithUniqueID:(id)arg0;
+ (void)decodeShareAuditToken:(id)arg0 didComplete:(id /* block */)arg1;
+ (void)getShareResultModelForShareChannel:(id)arg0 withUniqueID:(id)arg1 forceCallback:(BOOL)arg2 callback:(id /* block */)arg3;
+ (id)sharedManager;

- (void)cleanWarmCacheWithUniqueID:(id)arg0;
- (void)setShareInstanceMaps:(id)arg0;
- (id)getShareInstanceWithUniqueID:(id)arg0;
- (id)shareInstanceMaps;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
