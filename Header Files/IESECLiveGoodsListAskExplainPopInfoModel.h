//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface IESECLiveGoodsListAskExplainPopInfoModel : MTLModel <MTLJSONSerializing> {
    NSString *_title;
    NSArray *_textList;
    NSString *_buttonTitle;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *textList;
@property (copy, nonatomic) NSString *buttonTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setTextList:(id)arg0;
- (void).cxx_destruct;
- (id)title;
- (id)buttonTitle;
- (void)setTitle:(id)arg0;
- (id)textList;
- (void)setButtonTitle:(id)arg0;

@end
