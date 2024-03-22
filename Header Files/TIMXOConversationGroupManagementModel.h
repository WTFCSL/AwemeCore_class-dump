//
//     Generated by private class-dump
//

@class NSString, TIMXOConversationFansGroupGreetingInfo;

@interface TIMXOConversationGroupManagementModel : TIMXOModel <TIMXOConversationGroupManagementModelProtocol> {
    BOOL _allowSelfItemShareStatus;
    BOOL _allowAdvUserJoinStatus;
    BOOL _allowAskPraiseUserJoinStatus;
    BOOL _allowLiveFansSubscriptionAutoRemove;
    BOOL _allowLiveWindowTopSellerAutoSync;
    NSString *_belongingConversationIdentifier;
    TIMXOConversationFansGroupGreetingInfo *_greetingInfo;
}

@property (copy, nonatomic) NSString *belongingConversationIdentifier;
@property (retain, nonatomic) TIMXOConversationFansGroupGreetingInfo *greetingInfo;
@property (nonatomic) BOOL allowSelfItemShareStatus;
@property (nonatomic) BOOL allowAdvUserJoinStatus;
@property (nonatomic) BOOL allowAskPraiseUserJoinStatus;
@property (nonatomic) BOOL allowLiveFansSubscriptionAutoRemove;
@property (nonatomic) BOOL allowLiveWindowTopSellerAutoSync;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithRootObject:(id)arg0 identifier:(id)arg1;
+ (id)initWithRootObject:(id)arg0 storeModel:(id)arg1;
+ (id)cacheKeyWithCid:(id)arg0;

- (id)belongingConversationIdentifier;
- (void)setBelongingConversationIdentifier:(id)arg0;
- (void)setAllowSelfItemShareStatus:(BOOL)arg0;
- (void)setAllowAdvUserJoinStatus:(BOOL)arg0;
- (void)setAllowAskPraiseUserJoinStatus:(BOOL)arg0;
- (void)setAllowLiveFansSubscriptionAutoRemove:(BOOL)arg0;
- (void)setAllowLiveWindowTopSellerAutoSync:(BOOL)arg0;
- (BOOL)allowSelfItemShareStatus;
- (BOOL)allowAdvUserJoinStatus;
- (BOOL)allowAskPraiseUserJoinStatus;
- (BOOL)allowLiveFansSubscriptionAutoRemove;
- (BOOL)allowLiveWindowTopSellerAutoSync;
- (id)initWithRootObject:(id)arg0 conversationId:(id)arg1;
- (id)greetingInfo;
- (void)setGreetingInfo:(id)arg0;
- (void).cxx_destruct;

@end
