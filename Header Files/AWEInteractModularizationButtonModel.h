//
//     Generated by private class-dump
//

@class NSString, AWEUserModel;

@interface AWEInteractModularizationButtonModel : AWEBaseApiModel {
    unsigned long long _buttonType;
    unsigned long long _buttonColorStyle;
    NSString *_buttonText;
    NSString *_buttonSchema;
    AWEUserModel *_user;
}

@property (nonatomic) unsigned long long buttonType;
@property (nonatomic) unsigned long long buttonColorStyle;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *buttonSchema;
@property (retain, nonatomic) AWEUserModel *user;

+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (unsigned long long)buttonColorStyle;
- (id)buttonSchema;
- (void)setButtonSchema:(id)arg0;
- (void)setButtonColorStyle:(unsigned long long)arg0;
- (void)setUser:(id)arg0;
- (unsigned long long)buttonType;
- (id)user;
- (void).cxx_destruct;
- (id)buttonText;
- (void)setButtonType:(unsigned long long)arg0;
- (void)setButtonText:(id)arg0;

@end