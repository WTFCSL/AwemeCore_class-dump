//
//     Generated by private class-dump
//

@class TIMXECOMSubConversation, NSArray, NSDictionary, BDECIMClientConfig, ECOMTIMOSubConversation, NSString;

@interface BDECIMCloudSubConversation : NSObject <BDECIMCloudSubConversationInterface> {
    BDECIMClientConfig *_config;
    ECOMTIMOSubConversation *_ecomSubConversation;
    TIMXECOMSubConversation *_timxSubConversation;
}

@property (retain, nonatomic) BDECIMClientConfig *config;
@property (retain, nonatomic) ECOMTIMOSubConversation *ecomSubConversation;
@property (retain, nonatomic) TIMXECOMSubConversation *timxSubConversation;
@property (readonly) long long subConversationShortID;
@property (readonly) int status;
@property (readonly, copy) NSDictionary *extra;
@property (readonly, copy) NSArray *participants;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifier:(id)arg0 config:(id)arg1;
- (long long)getCurrentServerIDFromSubConversation;
- (long long)subConversationShortID;
- (void)setTimxSubConversation:(id)arg0;
- (void)setEcomSubConversation:(id)arg0;
- (id)timxSubConversation;
- (id)ecomSubConversation;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)participants;
- (int)status;
- (id)config;
- (id)extra;

@end
