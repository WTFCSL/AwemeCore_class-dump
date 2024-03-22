//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AFDGuideButtonModel : AWEBaseApiModel {
    NSString *_settingsConfigKey;
    NSArray *_buttons;
}

@property (copy, nonatomic) NSString *settingsConfigKey;
@property (copy, nonatomic) NSArray *buttons;

+ (id)buttonsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setSettingsConfigKey:(id)arg0;
- (id)settingsConfigKey;
- (void).cxx_destruct;
- (void)setButtons:(id)arg0;
- (id)buttons;

@end