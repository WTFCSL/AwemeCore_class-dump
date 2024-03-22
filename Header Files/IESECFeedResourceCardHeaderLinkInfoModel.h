//
//     Generated by private class-dump
//

@class NSString, IESECURLModel, IESECFeedResourceCardMarginModel;

@interface IESECFeedResourceCardHeaderLinkInfoModel : MTLModel <MTLJSONSerializing> {
    IESECURLModel *_icon;
    NSString *_text;
    NSString *_link;
    NSString *_textColor;
    long long _textSize;
    IESECFeedResourceCardMarginModel *_textMargin;
    IESECFeedResourceCardMarginModel *_iconMargin;
}

@property (retain, nonatomic) IESECURLModel *icon;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) long long textSize;
@property (retain, nonatomic) IESECFeedResourceCardMarginModel *textMargin;
@property (retain, nonatomic) IESECFeedResourceCardMarginModel *iconMargin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textMarginJSONTransformer;
+ (id)iconMarginJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)textMargin;
- (void)setTextMargin:(id)arg0;
- (void)setIconMargin:(id)arg0;
- (id)icon;
- (void)setLink:(id)arg0;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (void)setIcon:(id)arg0;
- (id)text;
- (id)link;
- (void)setTextColor:(id)arg0;
- (id)textColor;
- (long long)textSize;
- (id)iconMargin;
- (void)setTextSize:(long long)arg0;

@end
