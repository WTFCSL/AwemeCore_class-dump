//
//     Generated by private class-dump
//

@class NSString, AWEURLModel;

@interface AWEChallengeBannerModel : MTLModel <MTLJSONSerializing> {
    AWEURLModel *_icon;
    NSString *_webURL;
    NSString *_openURL;
    NSString *_complianceData;
}

@property (retain, nonatomic) AWEURLModel *icon;
@property (copy, nonatomic) NSString *webURL;
@property (copy, nonatomic) NSString *openURL;
@property (copy, nonatomic) NSString *complianceData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setOpenURL:(id)arg0;
- (id)complianceData;
- (void)setComplianceData:(id)arg0;
- (id)icon;
- (void).cxx_destruct;
- (id)webURL;
- (void)setWebURL:(id)arg0;
- (void)setIcon:(id)arg0;
- (id)openURL;

@end