//
//     Generated by private class-dump
//

@class NSString, AWEPOIGoodsDetailShareCouponIconModel, NSDictionary;

@interface AWEPOIGoodsDetailShareCouponBubbleModel : MTLModel <MTLJSONSerializing> {
    AWEPOIGoodsDetailShareCouponIconModel *_bubbleIcon;
    NSString *_bubbleText;
    NSDictionary *_bubbleStatusTextMap;
}

@property (retain, nonatomic) AWEPOIGoodsDetailShareCouponIconModel *bubbleIcon;
@property (copy, nonatomic) NSString *bubbleText;
@property (copy, nonatomic) NSDictionary *bubbleStatusTextMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setBubbleIcon:(id)arg0;
- (id)bubbleIcon;
- (id)statusTextWithPlayStatus:(long long)arg0;
- (id)bubbleStatusTextMap;
- (void)setBubbleStatusTextMap:(id)arg0;
- (void).cxx_destruct;
- (id)bubbleText;
- (void)setBubbleText:(id)arg0;

@end