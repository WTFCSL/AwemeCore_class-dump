//
//     Generated by private class-dump
//

@class NSString, AWEURLModel;

@interface AWEDoubleColumnSearchMerchandiseTextTagModel : MTLModel <MTLJSONSerializing> {
    BOOL _hideLeftIcon;
    NSString *_textContent;
    NSString *_textColor;
    NSString *_textTagType;
    AWEURLModel *_textLeftIcon;
    unsigned long long _textStyle;
}

@property (copy, nonatomic) NSString *textContent;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *textTagType;
@property (retain, nonatomic) AWEURLModel *textLeftIcon;
@property (nonatomic) unsigned long long textStyle;
@property (nonatomic) BOOL hideLeftIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)textTagType;
- (void)setTextTagType:(id)arg0;
- (id)textLeftIcon;
- (void)setTextLeftIcon:(id)arg0;
- (BOOL)hideLeftIcon;
- (void)setHideLeftIcon:(BOOL)arg0;
- (unsigned long long)textStyle;
- (void).cxx_destruct;
- (void)setTextStyle:(unsigned long long)arg0;
- (void)setTextColor:(id)arg0;
- (id)textColor;
- (id)textContent;
- (void)setTextContent:(id)arg0;

@end
