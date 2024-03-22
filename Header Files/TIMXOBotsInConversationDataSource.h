//
//     Generated by private class-dump
//

@class NSString, NSArray, TIMXSDKInstance;
@protocol TIMXOBotsInConversationDataSourceDelegate;

@interface TIMXOBotsInConversationDataSource : NSObject <TIMXMessageStoreChangesObserver> {
    NSString *_conversationID;
    NSArray *_bots;
    id<TIMXOBotsInConversationDataSourceDelegate> _delegate;
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSArray *bots;
@property (weak, nonatomic) id<TIMXOBotsInConversationDataSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)bots;
- (void)setBots:(id)arg0;
- (id)initWithRootObject:(id)arg0 conversationID:(id)arg1;
- (void)onBotsInConversationChanged:(id)arg0;
- (void).cxx_destruct;
- (id)conversationID;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setConversationID:(id)arg0;

@end