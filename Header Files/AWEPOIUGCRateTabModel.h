//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPOIUGCRateTabModel : MTLModel <MTLJSONSerializing> {
    NSString *_title;
    NSString *_moduleType;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *moduleType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)title;
- (id)moduleType;
- (void)setTitle:(id)arg0;
- (void)setModuleType:(id)arg0;

@end