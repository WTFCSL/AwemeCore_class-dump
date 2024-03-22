//
//     Generated by private class-dump
//

@class NSString;
@protocol RxInjector;

@interface __RTVIMConversationService : NSObject <RTVIMConversationServiceInterface> {
    id<RxInjector> _injector;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getSingleChatConversationIDFromUserID:(id)arg0;
- (id)createGroupWithOtherParticipants:(id)arg0 bizExtension:(id)arg1;
- (void).cxx_destruct;
- (id)injector;

@end