//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEEnterpriseMarketingToolsCheckResponseModel : AWEBaseApiModel {
    BOOL _eMarketingTools;
    NSString *_desc;
    NSArray *_marketingTools;
    NSString *_linkToasts;
}

@property (nonatomic) BOOL eMarketingTools;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSArray *marketingTools;
@property (copy, nonatomic) NSString *linkToasts;

+ (id)marketingToolsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)eMarketingTools;
- (void)setEMarketingTools:(BOOL)arg0;
- (id)marketingTools;
- (void)setMarketingTools:(id)arg0;
- (id)linkToasts;
- (void)setLinkToasts:(id)arg0;
- (id)desc;
- (void).cxx_destruct;
- (void)setDesc:(id)arg0;

@end