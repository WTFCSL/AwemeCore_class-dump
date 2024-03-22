//
//     Generated by private class-dump
//

@class TIMXOMessagesInConversationDataSource, NSString, NSArray, BDECIMClientConfig, ECOMTIMORemedialMessagesInConversationDataSource, ECOMMessagesInConversationDataSource, TIMXECOMRemedialMessagesInConversationDataSource;

@interface BDECIMCloudMessagesInConversationDataSource : NSObject <ECOMTIMOMessagesDataSourceDelegate, TIMXOMessagesDataSourceDelegate, BDECIMCloudMessagesInConversationDataSourceInterface> {
    id /* block */ messageDataSourceUpdated;
    BDECIMClientConfig *_config;
    TIMXOMessagesInConversationDataSource *_timxDataSource;
    TIMXECOMRemedialMessagesInConversationDataSource *_timxRemedialDataSource;
    ECOMMessagesInConversationDataSource *_ecomDataSource;
    ECOMTIMORemedialMessagesInConversationDataSource *_ecomRemedialDataSource;
}

@property (retain, nonatomic) BDECIMClientConfig *config;
@property (retain, nonatomic) TIMXOMessagesInConversationDataSource *timxDataSource;
@property (retain, nonatomic) TIMXECOMRemedialMessagesInConversationDataSource *timxRemedialDataSource;
@property (retain, nonatomic) ECOMMessagesInConversationDataSource *ecomDataSource;
@property (retain, nonatomic) ECOMTIMORemedialMessagesInConversationDataSource *ecomRemedialDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasOlderMessages;
@property (readonly, copy, nonatomic) NSArray *currentMessageIDs;
@property (copy, nonatomic) id /* block */ messageDataSourceUpdated;

- (id)initWithInitialLocationLatestMessageForConversationID:(id)arg0 options:(id)arg1 config:(id)arg2;
- (void)loadOlderMessagesRemedialyWithLoadFirstPage:(BOOL)arg0 completionBlock:(id /* block */)arg1;
- (void)loadOlderMessagesWithCompletionBlock:(id /* block */)arg0;
- (void)firstLoadOlderMessagesWithCompletionBlock:(id /* block */)arg0;
- (BOOL)hasOlderMessages;
- (id)currentMessageIDs;
- (id /* block */)messageDataSourceUpdated;
- (void)setMessageDataSourceUpdated:(id /* block */)arg0;
- (void)setTimxRemedialDataSource:(id)arg0;
- (id)timxRemedialDataSource;
- (void)setTimxDataSource:(id)arg0;
- (void)setEcomRemedialDataSource:(id)arg0;
- (id)ecomRemedialDataSource;
- (void)setEcomDataSource:(id)arg0;
- (id)ecomDataSource;
- (id)timxDataSource;
- (void)messageDataSource:(id)arg0 didUpdateWithUpdate:(id)arg1 completion:(id /* block */)arg2;
- (void)messageDataSource:(id)arg0 didUpdateWithUpdate:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;

@end
