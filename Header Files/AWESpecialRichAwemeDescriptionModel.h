//
//     Generated by private class-dump
//

@class NSString;

@interface AWESpecialRichAwemeDescriptionModel : AWEBaseApiModel {
    NSString *_title;
    NSString *_descriptionString;
    NSString *_extraDescriptionString;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *descriptionString;
@property (copy, nonatomic) NSString *extraDescriptionString;

+ (id)JSONKeyPathsByPropertyKey;

- (id)extraDescriptionString;
- (void)setExtraDescriptionString:(id)arg0;
- (id)descriptionString;
- (void).cxx_destruct;
- (id)title;
- (void)setDescriptionString:(id)arg0;
- (void)setTitle:(id)arg0;

@end
