//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEIMNoticeConfigModel : AWEBaseApiModel {
    NSString *_key;
    NSString *_title;
    long long _selectValue;
    NSArray *_optionList;
}

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long selectValue;
@property (copy, nonatomic) NSArray *optionList;

+ (id)optionListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)selectValue;
- (id)optionList;
- (void)setSelectValue:(long long)arg0;
- (void)setOptionList:(id)arg0;
- (id)key;
- (void).cxx_destruct;
- (id)title;
- (void)setKey:(id)arg0;
- (void)setTitle:(id)arg0;

@end