//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface YataFeatureModel : MTLModel <MTLJSONSerializing> {
    BOOL _extendBlock;
    BOOL _hasMore;
    BOOL _submit;
    BOOL _cardGroup;
    BOOL _isAsyncHost;
    BOOL _isPassiveChange;
    NSString *_identifier;
    NSString *_nodeName;
    NSString *_parentNodeName;
    NSString *_parentID;
    NSString *_type;
    NSString *_position;
    NSString *_ref;
    NSString *_collectionsJSONString;
    NSDictionary *_dynamicFeatures;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL extendBlock;
@property (copy, nonatomic) NSString *nodeName;
@property (copy, nonatomic) NSString *parentNodeName;
@property (copy, nonatomic) NSString *parentID;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *position;
@property (copy, nonatomic) NSString *ref;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL submit;
@property (nonatomic) BOOL cardGroup;
@property (nonatomic) BOOL isAsyncHost;
@property (nonatomic) BOOL isPassiveChange;
@property (copy, nonatomic) NSString *collectionsJSONString;
@property (copy, nonatomic) NSDictionary *dynamicFeatures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setSubmit:(BOOL)arg0;
- (id)dynamicFeatures;
- (BOOL)isPassiveChange;
- (id)collectionsJSONString;
- (BOOL)extendBlock;
- (id)parentNodeName;
- (void)setParentNodeName:(id)arg0;
- (void)setExtendBlock:(BOOL)arg0;
- (BOOL)cardGroup;
- (void)setCardGroup:(BOOL)arg0;
- (void)setDynamicFeatures:(id)arg0;
- (BOOL)isAsyncHost;
- (void)setIsAsyncHost:(BOOL)arg0;
- (void)setIsPassiveChange:(BOOL)arg0;
- (void)setCollectionsJSONString:(id)arg0;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (id)position;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)type;
- (void)setPosition:(id)arg0;
- (id)identifier;
- (void)setParentID:(id)arg0;
- (BOOL)submit;
- (void)setType:(id)arg0;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg0;
- (id)parentID;
- (void)setIdentifier:(id)arg0;
- (id)ref;
- (void)setRef:(id)arg0;
- (id)nodeName;
- (void)setNodeName:(id)arg0;

@end
