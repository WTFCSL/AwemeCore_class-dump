//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWEECOMIMProductSkuConsultInfoModel : NSObject {
    NSString *_productId;
    NSString *_skuId;
    NSDictionary *_channelParams;
    NSString *_uuid;
    NSString *_actionType;
    NSString *_sceneType;
    NSString *_skuSessionId;
    NSString *_hierarchicalDimension;
    NSString *_serverMessageId;
    NSString *_cardType;
    NSString *_senderRole;
}

@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *skuId;
@property (copy, nonatomic) NSDictionary *channelParams;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSString *sceneType;
@property (copy, nonatomic) NSString *skuSessionId;
@property (copy, nonatomic) NSString *hierarchicalDimension;
@property (copy, nonatomic) NSString *serverMessageId;
@property (copy, nonatomic) NSString *cardType;
@property (copy, nonatomic) NSString *senderRole;

- (id)skuId;
- (void)setSkuId:(id)arg0;
- (id)serverMessageId;
- (void)setServerMessageId:(id)arg0;
- (id)channelParams;
- (id)skuSessionId;
- (id)senderRole;
- (id)hierarchicalDimension;
- (void)setSkuSessionId:(id)arg0;
- (void)setHierarchicalDimension:(id)arg0;
- (void)setSenderRole:(id)arg0;
- (void)setChannelParams:(id)arg0;
- (void)setActionType:(id)arg0;
- (id)actionType;
- (void).cxx_destruct;
- (void)setUuid:(id)arg0;
- (id)uuid;
- (id)productId;
- (id)sceneType;
- (void)setSceneType:(id)arg0;
- (id)cardType;
- (void)setCardType:(id)arg0;
- (void)setProductId:(id)arg0;

@end