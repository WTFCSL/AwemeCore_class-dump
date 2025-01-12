//
//     Generated by private class-dump
//

@class NSString;

@interface IESECMallInnerFeedProductBuyButtonBaseInfoModel : MTLModel <MTLJSONSerializing> {
    NSString *_link;
    NSString *_buttonType;
    NSString *_text;
    NSString *_color;
}

@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSString *buttonType;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *color;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)color;
- (id)buttonType;
- (void)setLink:(id)arg0;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)text;
- (void)setButtonType:(id)arg0;
- (id)link;
- (void)setColor:(id)arg0;

@end
