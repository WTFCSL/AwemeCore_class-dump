//
//     Generated by private class-dump
//

@class NSString, RTVVoipFeatures;

@interface RTVVoipSettingsFeature : JSONModel {
    RTVVoipFeatures *_features;
    NSString *_disableToastText;
}

@property (retain, nonatomic) RTVVoipFeatures *features;
@property (copy, nonatomic) NSString *disableToastText;

+ (id)keyMapper;

- (void)setFeaturesWithNSString:(id)arg0;
- (id)disableToastText;
- (void)setDisableToastText:(id)arg0;
- (id)features;
- (void).cxx_destruct;
- (void)setFeatures:(id)arg0;

@end
