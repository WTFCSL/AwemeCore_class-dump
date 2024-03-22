//
//     Generated by private class-dump
//

@class NSDictionary;

@interface HMDOTConfig : HMDModuleConfig {
    NSDictionary *_allowServiceList;
    NSDictionary *_allowErrorList;
}

@property (retain, nonatomic) NSDictionary *allowServiceList;
@property (retain, nonatomic) NSDictionary *allowErrorList;

+ (id)hmd_attributeMapDictionary;
+ (id)configKey;

- (id)getModule;
- (id)allowServiceList;
- (void)setAllowServiceList:(id)arg0;
- (id)allowErrorList;
- (void)setAllowErrorList:(id)arg0;
- (void).cxx_destruct;

@end