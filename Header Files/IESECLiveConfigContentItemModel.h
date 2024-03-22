//
//     Generated by private class-dump
//

@class IESECLiveConfigCountDownModel, NSString, IESECLiveAvatarsElementModel, IESECLivePriceElementModel, IESECLiveImageURLModel, IESECLiveTextElementModel, IESECLiveCountDownElementModel, IESECLiveBlankElementModel, IESECLiveImageElementModel, IESECLiveRichTextElementModel, NSNumber, IESECLiveCombinationBlockElementModel;

@interface IESECLiveConfigContentItemModel : MTLModel <MTLJSONSerializing> {
    BOOL _needBoldText;
    BOOL _cartAddDestination;
    long long _elementType;
    IESECLiveImageURLModel *_avatars;
    NSString *_text;
    NSString *_textColor;
    double _textFontSize;
    NSNumber *_blankWidth;
    IESECLiveImageURLModel *_image;
    IESECLiveConfigCountDownModel *_countDown;
    long long _position;
    IESECLiveTextElementModel *_textElement;
    IESECLiveBlankElementModel *_blankElement;
    IESECLiveCountDownElementModel *_countDownElement;
    IESECLiveAvatarsElementModel *_avatarsElement;
    IESECLiveImageElementModel *_imageElement;
    IESECLiveCombinationBlockElementModel *_combinationBlockElement;
    IESECLiveRichTextElementModel *_richTextElement;
    IESECLivePriceElementModel *_priceElement;
}

@property (nonatomic) long long elementType;
@property (retain, nonatomic) IESECLiveImageURLModel *avatars;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *textColor;
@property (nonatomic) double textFontSize;
@property (nonatomic) BOOL needBoldText;
@property (retain, nonatomic) NSNumber *blankWidth;
@property (retain, nonatomic) IESECLiveImageURLModel *image;
@property (retain, nonatomic) IESECLiveConfigCountDownModel *countDown;
@property (nonatomic) long long position;
@property (retain, nonatomic) IESECLiveTextElementModel *textElement;
@property (retain, nonatomic) IESECLiveBlankElementModel *blankElement;
@property (retain, nonatomic) IESECLiveCountDownElementModel *countDownElement;
@property (retain, nonatomic) IESECLiveAvatarsElementModel *avatarsElement;
@property (retain, nonatomic) IESECLiveImageElementModel *imageElement;
@property (retain, nonatomic) IESECLiveCombinationBlockElementModel *combinationBlockElement;
@property (retain, nonatomic) IESECLiveRichTextElementModel *richTextElement;
@property (retain, nonatomic) IESECLivePriceElementModel *priceElement;
@property (nonatomic) BOOL cartAddDestination;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setCountDown:(id)arg0;
- (double)textFontSize;
- (void)setAvatars:(id)arg0;
- (id)avatars;
- (id)blankWidth;
- (BOOL)cartAddDestination;
- (BOOL)needBoldText;
- (id)blankElement;
- (id)combinationBlockElement;
- (id)countDownElement;
- (id)avatarsElement;
- (id)richTextElement;
- (id)priceElement;
- (void)setNeedBoldText:(BOOL)arg0;
- (void)setBlankWidth:(id)arg0;
- (void)updateWithContentElementData:(id)arg0;
- (void)setBlankElement:(id)arg0;
- (void)setCountDownElement:(id)arg0;
- (void)setAvatarsElement:(id)arg0;
- (void)setImageElement:(id)arg0;
- (void)setCombinationBlockElement:(id)arg0;
- (void)setRichTextElement:(id)arg0;
- (void)setPriceElement:(id)arg0;
- (void)setCartAddDestination:(BOOL)arg0;
- (void)setTextElement:(id)arg0;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)image;
- (long long)position;
- (id)textElement;
- (void)setPosition:(long long)arg0;
- (void)setImage:(id)arg0;
- (id)text;
- (long long)elementType;
- (void)setTextColor:(id)arg0;
- (id)textColor;
- (void)setElementType:(long long)arg0;
- (id)countDown;
- (id)imageElement;
- (void)setTextFontSize:(double)arg0;

@end