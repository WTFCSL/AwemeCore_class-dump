//
//     Generated by private class-dump
//

@class NSString, IESECURLModel;

@interface IESECLogisticItem : MTLModel <MTLJSONSerializing> {
    NSString *_fontName;
    unsigned long long _itemType;
    IESECURLModel *_pic;
    NSString *_text;
    NSString *_fontColor;
    unsigned long long _fontType;
}

@property (nonatomic) unsigned long long itemType;
@property (retain, nonatomic) IESECURLModel *pic;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *fontColor;
@property (nonatomic) unsigned long long fontType;
@property (readonly, copy, nonatomic) NSString *fontName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setPic:(id)arg0;
- (id)pic;
- (void)setFontType:(unsigned long long)arg0;
- (unsigned long long)itemType;
- (void)setItemType:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)fontName;
- (id)text;
- (unsigned long long)fontType;
- (id)fontColor;
- (void)setFontColor:(id)arg0;

@end
