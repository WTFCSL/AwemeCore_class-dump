//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface YataContainerItemModel : MTLModel <MTLJSONSerializing> {
    NSArray *_typeArray;
    NSString *_containerType;
    NSString *_name;
    NSString *_url;
    NSString *_version;
}

@property (copy, nonatomic) NSArray *typeArray;
@property (copy, nonatomic) NSString *containerType;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)typeArray;
- (void)setTypeArray:(id)arg0;
- (void)setVersion:(id)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setUrl:(id)arg0;
- (id)version;
- (unsigned long long)hash;
- (void)setName:(id)arg0;
- (BOOL)isEqual:(id)arg0;
- (id)url;
- (id)name;
- (id)containerType;
- (void)setContainerType:(id)arg0;

@end
