//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface IESECGoodsDetailSkuSpecInfo : MTLModel <MTLJSONSerializing> {
    NSString *_specDefaultName;
    NSArray *_specIDs;
    NSArray *_specNames;
    NSString *_selectSpecId;
}

@property (copy, nonatomic) NSString *specDefaultName;
@property (retain, nonatomic) NSArray *specIDs;
@property (retain, nonatomic) NSArray *specNames;
@property (copy, nonatomic) NSString *selectSpecId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setSelectSpecId:(id)arg0;
- (id)selectSpecId;
- (id)specDefaultName;
- (void)setSpecDefaultName:(id)arg0;
- (id)specIDs;
- (void)setSpecIDs:(id)arg0;
- (id)specNames;
- (void)setSpecNames:(id)arg0;
- (void).cxx_destruct;

@end
