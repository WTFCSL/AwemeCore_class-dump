//
//     Generated by private class-dump
//

@class NSString, NSNumber, IESECLiveImageURLModel;

@interface IESECLiveTextElementModel : MTLModel <MTLJSONSerializing> {
    BOOL _needBoldText;
    NSString *_text;
    NSString *_textColor;
    double _textFontSize;
    IESECLiveImageURLModel *_textBgImage;
    NSNumber *_maxWidth;
}

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *textColor;
@property (nonatomic) double textFontSize;
@property (nonatomic) BOOL needBoldText;
@property (retain, nonatomic) IESECLiveImageURLModel *textBgImage;
@property (retain, nonatomic) NSNumber *maxWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (double)textFontSize;
- (BOOL)needBoldText;
- (id)textBgImage;
- (void)setNeedBoldText:(BOOL)arg0;
- (void)setTextBgImage:(id)arg0;
- (void).cxx_destruct;
- (void)setMaxWidth:(id)arg0;
- (void)setText:(id)arg0;
- (id)maxWidth;
- (id)text;
- (void)setTextColor:(id)arg0;
- (id)textColor;
- (void)setTextFontSize:(double)arg0;

@end