//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface AWEStudioPublishQuickShareService : HTSService <AWEQuickShareEnterEditPageMessage, AWEStudioPublishQuickShareService> {
    NSMutableDictionary *_quickShareCreationIds;
    long long _feedType;
}

@property (retain, nonatomic) NSMutableDictionary *quickShareCreationIds;
@property (nonatomic) long long feedType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (BOOL)isValidFeedType;
- (long long)getFeedType;
- (void)resetFeedType;
- (BOOL)isExistEditingQuickShare;
- (BOOL)shouldShowToastForFirstQuickShareAsNormal:(id)arg0;
- (void)creationID:(id)arg0 didEnterEditPage:(BOOL)arg1;
- (void)setQuickShareCreationIds:(id)arg0;
- (id)quickShareCreationIds;
- (void)clearEditingQuickShare;
- (long long)feedType;
- (void)setFeedType:(long long)arg0;
- (void).cxx_destruct;

@end
