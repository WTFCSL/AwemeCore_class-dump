//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface AWEUGXBridgeCampaignPostInteractionMessageMethodResultModel : BDXBridgeModel {
    NSNumber *_errorCode;
    NSString *_msgId;
    NSString *_conversationId;
}

@property (retain, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSString *msgId;
@property (copy, nonatomic) NSString *conversationId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)setErrorCode:(id)arg0;
- (id)errorCode;
- (id)msgId;
- (void)setMsgId:(id)arg0;
- (id)conversationId;
- (void)setConversationId:(id)arg0;

@end