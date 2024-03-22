//
//     Generated by private class-dump
//

@class NSString, AWETagLabelModel, AWEURLModel;

@interface AWEAdSearchLiveECommerceProductCardModel : MTLModel <MTLJSONSerializing> {
    NSString *_buttonText;
    NSString *_buttonBackgroundColor;
    NSString *_lightButtonBackgroundColor;
    NSString *_whiteColorText;
    NSString *_colorText;
    NSString *_title;
    AWEURLModel *_imageUrlModel;
    NSString *_imageDesc;
    NSString *_priceDesc;
    NSString *_sellNumDesc;
    AWETagLabelModel *_adLabel;
    NSString *_roomID;
    NSString *_anchorID;
    NSString *_productID;
    long long _jumpType;
}

@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *buttonBackgroundColor;
@property (copy, nonatomic) NSString *lightButtonBackgroundColor;
@property (copy, nonatomic) NSString *whiteColorText;
@property (copy, nonatomic) NSString *colorText;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWEURLModel *imageUrlModel;
@property (copy, nonatomic) NSString *imageDesc;
@property (copy, nonatomic) NSString *priceDesc;
@property (copy, nonatomic) NSString *sellNumDesc;
@property (retain, nonatomic) AWETagLabelModel *adLabel;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *anchorID;
@property (copy, nonatomic) NSString *productID;
@property (nonatomic) long long jumpType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)jumpType;
- (id)anchorID;
- (id)adLabel;
- (void)setAdLabel:(id)arg0;
- (id)colorText;
- (void)setColorText:(id)arg0;
- (void)setAnchorID:(id)arg0;
- (void)setJumpType:(long long)arg0;
- (id)imageUrlModel;
- (id)priceDesc;
- (id)imageDesc;
- (id)lightButtonBackgroundColor;
- (id)sellNumDesc;
- (void)setLightButtonBackgroundColor:(id)arg0;
- (id)whiteColorText;
- (void)setWhiteColorText:(id)arg0;
- (void)setImageUrlModel:(id)arg0;
- (void)setImageDesc:(id)arg0;
- (void)setPriceDesc:(id)arg0;
- (void)setSellNumDesc:(id)arg0;
- (id)productID;
- (void).cxx_destruct;
- (void)setProductID:(id)arg0;
- (id)title;
- (id)buttonText;
- (void)setTitle:(id)arg0;
- (void)setButtonText:(id)arg0;
- (id)roomID;
- (void)setRoomID:(id)arg0;
- (id)buttonBackgroundColor;
- (void)setButtonBackgroundColor:(id)arg0;

@end