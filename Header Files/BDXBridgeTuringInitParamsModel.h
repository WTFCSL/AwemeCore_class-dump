//
//     Generated by private class-dump
//

@class NSString;

@interface BDXBridgeTuringInitParamsModel : BDXBridgeModel {
    NSString *_app_id;
    NSString *_app_name;
    NSString *_channel;
    NSString *_language;
}

@property (copy, nonatomic) NSString *app_id;
@property (copy, nonatomic) NSString *app_name;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *language;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setApp_name:(id)arg0;
- (id)app_name;
- (id)channel;
- (void).cxx_destruct;
- (void)setChannel:(id)arg0;
- (id)language;
- (void)setLanguage:(id)arg0;
- (id)app_id;
- (void)setApp_id:(id)arg0;

@end
