//
//     Generated by private class-dump
//

@class NSString, NSMutableSet;

@interface AWEAdFeedBrowseRecorder : HTSService <AWEAdFeedBrowseRecorder> {
    NSMutableSet *_pendingCreativeIDs;
}

@property (retain, nonatomic) NSMutableSet *pendingCreativeIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onAppDidEnterBackground;
- (id)pendingCreativeIDs;
- (id)discardCreativeIDListString;
- (void)setPendingCreativeIDs:(id)arg0;
- (void).cxx_destruct;
- (void)dealloc;

@end
