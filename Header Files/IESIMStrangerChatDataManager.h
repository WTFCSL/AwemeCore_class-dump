//
//     Generated by private class-dump
//

@class NSHashTable, NSString, TIMXSDKInstance;
@protocol IESIMSDKStrangerConversationDataSource;

@interface IESIMStrangerChatDataManager : NSObject <TIMXOStrangerConversationDataSourceDelegate, IESIMTIMXLifeMessage, IESIMStrangerChatDataManagerProtocol> {
    BOOL _isRequesting;
    TIMXSDKInstance *_sdkRoot;
    id<IESIMSDKStrangerConversationDataSource> _dataSource;
    NSHashTable *_delegates;
}

@property (weak) TIMXSDKInstance *sdkRoot;
@property (retain) id<IESIMSDKStrangerConversationDataSource> dataSource;
@property (nonatomic) BOOL isRequesting;
@property (retain, nonatomic) NSHashTable *delegates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsRequesting:(BOOL)arg0;
- (BOOL)isRequesting;
- (void)markAllConversationReadWithCompletion:(id /* block */)arg0;
- (void)iesim_timxInstanceMounted:(id)arg0;
- (void)iesim_timxInstanceUnmounted:(id)arg0;
- (void)p_fillPropertyFromCurrentSDKIfNecessary;
- (id)sdkRoot;
- (void)p_clearPropertyOfSDK;
- (void)setSdkRoot:(id)arg0;
- (void)fetchStrangerChatListWithBizInfo:(id)arg0 completion:(id /* block */)arg1;
- (void)loadRemedialyStrangerConversationsWithBizInfo:(id)arg0 completion:(id /* block */)arg1;
- (void)markConversationAsRead:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchMessagesInConversation:(id)arg0 completion:(id /* block */)arg1;
- (void)deleteMessage:(long long)arg0 inConversation:(id)arg1 sendToServer:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)deleteMessageNew:(id)arg0 inConversation:(id)arg1 sendToServer:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)strangerConversationCountAfterDate:(id)arg0 completion:(id /* block */)arg1;
- (void)strangerMessageCountAfterDate:(id)arg0 completion:(id /* block */)arg1;
- (void)strangerConversationDataSourceDidUpdate:(id)arg0 updateConversationIdentifiers:(id)arg1 reason:(long long)arg2;
- (void)removeStrangerChat:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchStrangerChatListWithCompletion:(id /* block */)arg0;
- (id)delegates;
- (void)setDelegates:(id)arg0;
- (void)setDataSource:(id)arg0;
- (id)init;
- (id)dataSource;
- (void)addDelegate:(id)arg0;
- (void).cxx_destruct;
- (void)removeDelegate:(id)arg0;
- (void)dealloc;

@end
