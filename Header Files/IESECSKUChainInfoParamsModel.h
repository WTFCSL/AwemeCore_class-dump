//
//     Generated by private class-dump
//

@class NSString;

@interface IESECSKUChainInfoParamsModel : MTLModel <MTLJSONSerializing> {
    NSString *_marketingChannel;
    NSString *_channelId;
    NSString *_channelType;
    NSString *_enterFrom;
    NSString *_ecomEntranceForm;
    NSString *_productSourcePage;
}

@property (copy, nonatomic) NSString *marketingChannel;
@property (copy, nonatomic) NSString *channelId;
@property (copy, nonatomic) NSString *channelType;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *ecomEntranceForm;
@property (copy, nonatomic) NSString *productSourcePage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (id)marketingChannel;
- (void)setMarketingChannel:(id)arg0;
- (id)ecomEntranceForm;
- (void)setEcomEntranceForm:(id)arg0;
- (id)productSourcePage;
- (void)setProductSourcePage:(id)arg0;
- (id)channelType;
- (void).cxx_destruct;
- (id)channelId;
- (void)setChannelId:(id)arg0;
- (void)setChannelType:(id)arg0;

@end