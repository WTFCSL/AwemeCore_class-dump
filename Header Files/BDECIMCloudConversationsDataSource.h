//
//     Generated by private class-dump
//

@class NSString, NSArray, BDECIMClientConfig, TIMXOConversationsDataSource, ECOMTIMOConversationsDataSource;
@protocol BDECIMCloudConversationsDataSourceDelegate;

@interface BDECIMCloudConversationsDataSource : NSObject <ECOMTIMOConversationsDataSourceDelegate, TIMXOConversationsDataSourceDelegate, BDECIMCloudConversationsDataSourceInterface> {
    id<BDECIMCloudConversationsDataSourceDelegate> delegate;
    BDECIMClientConfig *_config;
    TIMXOConversationsDataSource *_timxDataSource;
    ECOMTIMOConversationsDataSource *_ecomDataSource;
}

@property (retain, nonatomic) BDECIMClientConfig *config;
@property (retain, nonatomic) TIMXOConversationsDataSource *timxDataSource;
@property (retain, nonatomic) ECOMTIMOConversationsDataSource *ecomDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long totalUnreadNumberForUnmutedConversations;
@property (readonly, nonatomic) unsigned long long totalUnreadNumberForMutedConversations;
@property (readonly, copy, nonatomic) NSArray *currentConversationIdentifiers;
@property (weak, nonatomic) id<BDECIMCloudConversationsDataSourceDelegate> delegate;

+ (void)fetchConversationInfo:(long long)arg0 conversationID:(id)arg1 type:(unsigned long long)arg2 inInbox:(int)arg3 config:(id)arg4 completion:(id /* block */)arg5;

- (id)awe_bindObserverKeyPath:(id)arg0 receiver:(id)arg1 receiverKeyPath:(id)arg2;
- (id)awe_observerKeyPath:(id)arg0;
- (id)initWithIncludeEmpty:(BOOL)arg0 config:(id)arg1;
- (void)deleteConversationsBeforeTime:(id)arg0 minRemain:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)loadSessions;
- (void)setNeedPullMessageInInboxType:(int)arg0;
- (unsigned long long)totalUnreadNumberForUnmutedConversations;
- (unsigned long long)totalUnreadNumberForMutedConversations;
- (id)currentConversationIdentifiers;
- (void)conversationDataSource:(id)arg0 didUpdateWithUpdate:(id)arg1 updateReason:(long long)arg2;
- (void)setTimxDataSource:(id)arg0;
- (void)setEcomDataSource:(id)arg0;
- (id)ecomDataSource;
- (id)timxDataSource;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
