//
//     Generated by private class-dump
//

@class AWEIMChatListServiceRegisterConfigModel, NSString;

@interface AWEFlowIMChatListDataSourceService : NSObject <AWEIMChatListServiceModelOutsideNotifyProtocol> {
    AWEIMChatListServiceRegisterConfigModel *config;
}

@property (retain, nonatomic) AWEIMChatListServiceRegisterConfigModel *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didTriggerCellEventWithAction:(id)arg0;
- (BOOL)enableAddCurrentCellActionWithType:(long long)arg0 serviceModel:(id)arg1;
- (void)getChatListServiceModelsWithRequestModel:(id)arg0 completion:(id /* block */)arg1;
- (void)addUnreadNumObserver;
- (void)addUnreadNumObserverThreadSafe;
- (id)initForThreadSafe;
- (id)init;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (long long)serviceType;

@end
