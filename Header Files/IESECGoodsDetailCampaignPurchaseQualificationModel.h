//
//     Generated by private class-dump
//

@class NSString;

@interface IESECGoodsDetailCampaignPurchaseQualificationModel : MTLModel <MTLJSONSerializing> {
    BOOL _havePurchaseQualification;
    NSString *_notifyEventName;
    NSString *_notifyEventData;
}

@property (nonatomic) BOOL havePurchaseQualification;
@property (copy, nonatomic) NSString *notifyEventName;
@property (copy, nonatomic) NSString *notifyEventData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)notifyEventName;
- (id)notifyEventData;
- (BOOL)havePurchaseQualification;
- (void)setHavePurchaseQualification:(BOOL)arg0;
- (void)setNotifyEventName:(id)arg0;
- (void)setNotifyEventData:(id)arg0;
- (void).cxx_destruct;

@end
