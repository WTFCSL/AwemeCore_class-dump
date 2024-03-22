//
//     Generated by private class-dump
//

@class NSDictionary, AWEUGPendantEnhanceItem, NSString;

@interface AWEUGPendantEnhanceConfig : MTLModel <MTLJSONSerializing> {
    BOOL _enable;
    AWEUGPendantEnhanceItem *_expandConfig;
    AWEUGPendantEnhanceItem *_foldConfig;
}

@property (nonatomic) BOOL enable;
@property (retain, nonatomic) AWEUGPendantEnhanceItem *expandConfig;
@property (retain, nonatomic) AWEUGPendantEnhanceItem *foldConfig;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)foldConfig;
- (id)expandConfig;
- (void)setExpandConfig:(id)arg0;
- (void)setFoldConfig:(id)arg0;
- (BOOL)enable;
- (void).cxx_destruct;
- (void)setEnable:(BOOL)arg0;

@end
