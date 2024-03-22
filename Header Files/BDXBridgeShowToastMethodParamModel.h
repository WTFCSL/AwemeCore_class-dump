//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface BDXBridgeShowToastMethodParamModel : BDXBridgeModel {
    NSString *_message;
    NSNumber *_duration;
    NSString *_customIcon;
    long long _type;
    long long _icon;
}

@property (copy, nonatomic) NSString *message;
@property (retain, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSString *customIcon;
@property (nonatomic) long long type;
@property (nonatomic) long long icon;

+ (id)requiredKeyPaths;
+ (id)requiredKeyPaths;
+ (id)iconJSONTransformer;
+ (id)typeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)customIcon;
- (void)setCustomIcon:(id)arg0;
- (void)setMessage:(id)arg0;
- (long long)icon;
- (void).cxx_destruct;
- (long long)type;
- (id)message;
- (id)duration;
- (void)setType:(long long)arg0;
- (void)setIcon:(long long)arg0;
- (void)setDuration:(id)arg0;

@end