//
//     Generated by private class-dump
//

@class NSString;
@protocol TIMXOConversationFansGroupWelcomeModelProtocol;

@protocol TIMXOConversationGroupManagementModelProtocol <NSObject>

@property (readonly, copy, nonatomic) NSString *belongingConversationIdentifier;
@property (readonly, nonatomic) id<TIMXOConversationFansGroupWelcomeModelProtocol> greetingInfo;
@property (readonly, nonatomic) BOOL allowSelfItemShareStatus;
@property (readonly, nonatomic) BOOL allowAdvUserJoinStatus;
@property (readonly, nonatomic) BOOL allowAskPraiseUserJoinStatus;
@property (readonly, nonatomic) BOOL allowLiveFansSubscriptionAutoRemove;
@property (readonly, nonatomic) BOOL allowLiveWindowTopSellerAutoSync;

- (id)belongingConversationIdentifier;
- (BOOL)allowSelfItemShareStatus;
- (BOOL)allowAdvUserJoinStatus;
- (BOOL)allowAskPraiseUserJoinStatus;
- (BOOL)allowLiveFansSubscriptionAutoRemove;
- (BOOL)allowLiveWindowTopSellerAutoSync;
- (id)greetingInfo;

@end