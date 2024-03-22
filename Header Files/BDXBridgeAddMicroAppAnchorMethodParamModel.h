//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface BDXBridgeAddMicroAppAnchorMethodParamModel : BDXBridgeModel {
    NSString *_appUrl;
    NSString *_appId;
    NSString *_appTitle;
    NSString *_desc;
    NSString *_schema;
    NSDictionary *_extra;
}

@property (copy, nonatomic) NSString *appUrl;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *appTitle;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtra:(id)arg0;
- (id)appUrl;
- (void)setAppUrl:(id)arg0;
- (void)setSchema:(id)arg0;
- (id)desc;
- (void)setAppId:(id)arg0;
- (void).cxx_destruct;
- (id)extra;
- (id)appId;
- (id)schema;
- (void)setDesc:(id)arg0;
- (id)appTitle;
- (void)setAppTitle:(id)arg0;

@end
