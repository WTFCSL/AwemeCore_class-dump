//
//     Generated by private class-dump
//

@class NSString;

@interface BDXBridgeCampaignGetAppListAppList : BDXBridgeModel {
    NSString *_packageName;
    NSString *_name;
    NSString *_scheme;
}

@property (copy, nonatomic) NSString *packageName;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *scheme;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setScheme:(id)arg0;
- (void).cxx_destruct;
- (id)scheme;
- (id)packageName;
- (void)setName:(id)arg0;
- (id)name;
- (void)setPackageName:(id)arg0;

@end