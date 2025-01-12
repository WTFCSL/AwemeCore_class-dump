//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSArray;

@interface YataFacadeModel : MTLModel <MTLJSONSerializing> {
    NSMutableDictionary *_structure;
    NSString *_root;
    NSArray *_popupRootList;
}

@property (copy, nonatomic) NSString *root;
@property (retain, nonatomic) NSMutableDictionary *structure;
@property (copy, nonatomic) NSArray *popupRootList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)structureJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)popupRootList;
- (void)setPopupRootList:(id)arg0;
- (id)root;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setRoot:(id)arg0;
- (id)structure;
- (void)setStructure:(id)arg0;

@end
