//
//     Generated by private class-dump
//

@class NSString, AWEPOIIMPigeonConversation, AWEPOIIMSendMessage, NSDictionary, BDECPigeonMessage, NSNumber;

@interface AWEPOIIMBaseMessageV2 : NSObject <AWEPOIIMBaseMessageProperty> {
    BOOL _isSendMessage;
    AWEPOIIMPigeonConversation *_conversation;
    BDECPigeonMessage *_message;
    AWEPOIIMSendMessage *_sendMessage;
    long long _statusBeObserved;
    id _sendExt;
    NSDictionary *_sendBizExt;
    NSString *_customClientMsgID;
}

@property (retain, nonatomic) BDECPigeonMessage *message;
@property (nonatomic) BOOL isSendMessage;
@property (nonatomic) long long statusBeObserved;
@property (readonly, weak, nonatomic) AWEPOIIMPigeonConversation *conversation;
@property (readonly, nonatomic) AWEPOIIMSendMessage *sendMessage;
@property (retain, nonatomic) id sendExt;
@property (copy, nonatomic) NSDictionary *sendBizExt;
@property (copy, nonatomic) NSString *customClientMsgID;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSNumber *indexInConversation;
@property (readonly, nonatomic) NSNumber *orderInConversation;
@property (readonly, copy, nonatomic) NSString *sender;
@property (readonly, copy, nonatomic) NSString *content;
@property (readonly) NSString *customerHint;
@property (readonly, copy, nonatomic) NSString *pigeonMessageType;
@property (readonly, copy, nonatomic) NSString *createTime;
@property (readonly, nonatomic) long long messageStatus;
@property (readonly, nonatomic) long long senderRoleType;
@property (readonly, copy, nonatomic) NSString *visibilityType;
@property (readonly, copy, nonatomic) NSString *src;
@property (readonly, copy, nonatomic) NSString *source;
@property (readonly, copy, nonatomic) NSString *removeTips;
@property (readonly, copy, nonatomic) NSString *hideUpgrade;
@property (readonly, copy, nonatomic) NSString *hintContent;
@property (readonly, nonatomic) BOOL isRiskControlled;
@property (readonly, copy, nonatomic) NSString *riskControlledContent;
@property (readonly, nonatomic) BOOL isRecalled;
@property (readonly, copy, nonatomic) NSString *pigeonBizType;
@property (readonly, copy, nonatomic) NSString *bizRole;
@property (readonly, copy, nonatomic) NSDictionary *originExt;
@property (readonly, copy, nonatomic) NSDictionary *bizExt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)messageWithPigeonMessage:(id)arg0 inConversation:(id)arg1;
+ (id)messageWithMessageId:(id)arg0 inConversation:(id)arg1;
+ (id)messageWithSendMessage:(id)arg0 inConversation:(id)arg1;

- (id)indexInConversation;
- (id)orderInConversation;
- (id)bizRole;
- (id)pigeonBizType;
- (id)originExt;
- (id)bizExt;
- (id)hintContent;
- (BOOL)isRiskControlled;
- (id)riskControlledContent;
- (BOOL)isRecalled;
- (id)removeTips;
- (id)visibilityType;
- (id)customerHint;
- (id)pigeonMessageType;
- (long long)senderRoleType;
- (id)hideUpgrade;
- (BOOL)isSendMessage;
- (long long)statusBeObserved;
- (id)defaultTrackerParams;
- (void)bindPigeonMessage:(id)arg0;
- (void)setIsSendMessage:(BOOL)arg0;
- (void)p_dataBind;
- (void)setStatusBeObserved:(long long)arg0;
- (void)p_trackMessageSendResult:(BOOL)arg0 duration:(unsigned long long)arg1;
- (void)updatePigeonMessageWithMessage:(id)arg0;
- (id)sendExt;
- (void)setSendExt:(id)arg0;
- (id)sendBizExt;
- (void)setSendBizExt:(id)arg0;
- (id)customClientMsgID;
- (void)setCustomClientMsgID:(id)arg0;
- (void)setMessage:(id)arg0;
- (id)source;
- (void).cxx_destruct;
- (id)sender;
- (id)content;
- (id)message;
- (id)identifier;
- (id)createTime;
- (id)conversation;
- (id)src;
- (id)initWithConversation:(id)arg0;
- (long long)messageStatus;
- (id)sendMessage;

@end
