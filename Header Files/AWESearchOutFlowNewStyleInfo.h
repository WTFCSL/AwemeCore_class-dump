//
//     Generated by private class-dump
//

@class NSString, AWESearchOutFlowIconModel, NSArray, AWEAdSearchLiveECommerceProductCardModel, AWETagLabelModel;

@interface AWESearchOutFlowNewStyleInfo : MTLModel <MTLJSONSerializing> {
    BOOL _videoCutType;
    NSString *_title;
    NSString *_buttonText;
    AWESearchOutFlowIconModel *_buttonIcon;
    NSArray *_productInfo;
    NSString *_clickButtonText;
    NSString *_source;
    NSString *_descriptionString;
    AWEAdSearchLiveECommerceProductCardModel *_searchLiveProductCard;
    NSArray *_searchLiveProductCardList;
    AWETagLabelModel *_label;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *buttonText;
@property (retain, nonatomic) AWESearchOutFlowIconModel *buttonIcon;
@property (retain, nonatomic) NSArray *productInfo;
@property (copy, nonatomic) NSString *clickButtonText;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *descriptionString;
@property (nonatomic) BOOL videoCutType;
@property (retain, nonatomic) AWEAdSearchLiveECommerceProductCardModel *searchLiveProductCard;
@property (retain, nonatomic) NSArray *searchLiveProductCardList;
@property (retain, nonatomic) AWETagLabelModel *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)productInfoJSONTransformer;
+ (id)searchLiveProductCardListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)clickButtonText;
- (id)searchLiveProductCard;
- (void)setClickButtonText:(id)arg0;
- (BOOL)videoCutType;
- (void)setVideoCutType:(BOOL)arg0;
- (void)setSearchLiveProductCard:(id)arg0;
- (id)searchLiveProductCardList;
- (void)setSearchLiveProductCardList:(id)arg0;
- (id)descriptionString;
- (id)productInfo;
- (id)source;
- (void).cxx_destruct;
- (void)setLabel:(id)arg0;
- (void)setButtonIcon:(id)arg0;
- (id)title;
- (void)setDescriptionString:(id)arg0;
- (id)buttonText;
- (void)setSource:(id)arg0;
- (id)label;
- (id)buttonIcon;
- (void)setTitle:(id)arg0;
- (void)setButtonText:(id)arg0;
- (void)setProductInfo:(id)arg0;

@end
