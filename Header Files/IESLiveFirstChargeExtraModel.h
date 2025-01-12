//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary, IESLiveImage, IESLiveFlexImage;

@interface IESLiveFirstChargeExtraModel : IESLiveDynamicMTLModel <MTLJSONSerializing> {
    NSString *_giftPanelTopLynxURL;
}

@property (retain, nonatomic) NSString *givingDesc;
@property (retain, nonatomic) IESLiveImage *giftImg;
@property (retain, nonatomic) NSArray *panelBottomDesc;
@property (retain, nonatomic) IESLiveImage *panelTopImg;
@property (retain, nonatomic) NSArray *rule;
@property (retain, nonatomic) IESLiveFlexImage *panelBottomBGImg;
@property (retain, nonatomic) IESLiveFlexImage *panelTopBGImg;
@property (retain, nonatomic) NSArray *panelTopDesc;
@property (retain, nonatomic) IESLiveFlexImage *giftPanelViewBottomBGImg;
@property (retain, nonatomic) IESLiveImage *roomChargeBtnImg;
@property (retain, nonatomic) NSString *introChargeBtnText;
@property (retain, nonatomic) IESLiveImage *introBgImg;
@property (copy, nonatomic) NSString *panelBottomSchema;
@property (copy, nonatomic) NSArray *giftPanelTopDesc;
@property (copy, nonatomic) NSString *giftPanelTopSchemeURL;
@property (copy, nonatomic) NSString *giftPanelTopLynxURL;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)giftImgJSONTransformer;
+ (id)panelTopImgJSONTransformer;
+ (id)panelBottomBGImgJSONTransformer;
+ (id)panelTopBGImgJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)giftPanelTopLynxURL;
- (void)setGiftPanelTopLynxURL:(id)arg0;
- (void).cxx_destruct;

@end
