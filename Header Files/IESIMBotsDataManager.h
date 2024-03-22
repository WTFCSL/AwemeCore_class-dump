//
//     Generated by private class-dump
//

@class NSString, NSArray;
@protocol IESIMSDKBotsInConversationDataSource, IESIMBotsDataManagerDelegate;

@interface IESIMBotsDataManager : NSObject <IESIMTIMXLifeMessage, TIMXOBotsInConversationDataSourceDelegate, IESIMBotsDataManagerProtocol> {
    NSString *_conversationId;
    NSArray *_bots;
    id<IESIMBotsDataManagerDelegate> _delegate;
    id<IESIMSDKBotsInConversationDataSource> _dataSource;
}

@property (retain) id<IESIMSDKBotsInConversationDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *conversationId;
@property (readonly, copy, nonatomic) NSArray *bots;
@property (weak, nonatomic) id<IESIMBotsDataManagerDelegate> delegate;

- (id)bots;
- (void)iesim_timxInstanceMounted:(id)arg0;
- (void)iesim_timxInstanceUnmounted:(id)arg0;
- (void)reloadBots;
- (void)botsDataSourceDidUpdate:(id)arg0;
- (id)initWithConversationId:(id)arg0;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)conversationId;
- (void)setConversationId:(id)arg0;

@end
