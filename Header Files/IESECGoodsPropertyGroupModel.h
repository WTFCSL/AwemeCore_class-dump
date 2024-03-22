//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface IESECGoodsPropertyGroupModel : MTLModel <MTLJSONSerializing> {
    NSString *_groupName;
    NSArray *_propertyItems;
}

@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSArray *propertyItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)propertyItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)groupName;
- (void)setGroupName:(id)arg0;
- (id)propertyItems;
- (void)setPropertyItems:(id)arg0;

@end