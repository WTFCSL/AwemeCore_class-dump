//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEProfileFilterPanelModel : MTLModel <MTLJSONSerializing> {
    NSArray *_sectionModels;
}

@property (retain, nonatomic) NSArray *sectionModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sectionModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)setSectionModels:(id)arg0;
- (id)sectionModels;

@end
