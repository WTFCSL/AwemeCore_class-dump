//
//     Generated by private class-dump
//

@class NSArray, IESECURLModel, IESECFeedResourceCardPanelsDecorationInfoModel;

@interface IESECFeedResourceCardPanelsModel : IESECFeedResourceCardBaseNode {
    IESECURLModel *_priceImage;
    IESECURLModel *_textBackgroundImage;
    IESECURLModel *_creditBackgroundImage;
    unsigned long long _style;
    unsigned long long _layout;
    NSArray *_products;
    IESECFeedResourceCardPanelsDecorationInfoModel *_decoration;
    IESECURLModel *_backgroundImage;
}

@property (retain, nonatomic) IESECURLModel *priceImage;
@property (retain, nonatomic) IESECURLModel *textBackgroundImage;
@property (retain, nonatomic) IESECURLModel *creditBackgroundImage;
@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long layout;
@property (retain, nonatomic) NSArray *products;
@property (retain, nonatomic) IESECFeedResourceCardPanelsDecorationInfoModel *decoration;
@property (retain, nonatomic) IESECURLModel *backgroundImage;

+ (id)productsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)priceImage;
- (void)setPriceImage:(id)arg0;
- (id)textBackgroundImage;
- (void)setTextBackgroundImage:(id)arg0;
- (id)creditBackgroundImage;
- (void)setCreditBackgroundImage:(id)arg0;
- (unsigned long long)style;
- (id)backgroundImage;
- (void)setLayout:(unsigned long long)arg0;
- (void).cxx_destruct;
- (id)products;
- (unsigned long long)layout;
- (void)setBackgroundImage:(id)arg0;
- (void)setStyle:(unsigned long long)arg0;
- (void)setProducts:(id)arg0;
- (id)decoration;
- (void)setDecoration:(id)arg0;

@end
