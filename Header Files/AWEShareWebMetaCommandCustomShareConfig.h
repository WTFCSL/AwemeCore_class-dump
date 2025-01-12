//
//     Generated by private class-dump
//

@class NSArray, NSString, NSDictionary;

@interface AWEShareWebMetaCommandCustomShareConfig : MTLModel <MTLJSONSerializing> {
    BOOL _useWebChannels;
    NSArray *_itemNames;
    NSString *_itemID;
    NSString *_shareURL;
    NSString *_extraParams;
    unsigned long long _schemaType;
    NSString *_shareScene;
}

@property (nonatomic) BOOL useWebChannels;
@property (copy, nonatomic) NSArray *itemNames;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *shareURL;
@property (copy, nonatomic) NSString *extraParams;
@property (nonatomic) unsigned long long schemaType;
@property (copy, nonatomic) NSString *shareScene;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)integerValueTransformer;
+ (id)schemaTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setSchemaType:(unsigned long long)arg0;
- (id)extraParams;
- (void)setExtraParams:(id)arg0;
- (void)setShareScene:(id)arg0;
- (id)shareScene;
- (BOOL)useWebChannels;
- (void)setUseWebChannels:(BOOL)arg0;
- (void).cxx_destruct;
- (id)itemID;
- (id)shareURL;
- (void)setItemID:(id)arg0;
- (unsigned long long)schemaType;
- (void)setShareURL:(id)arg0;
- (id)itemNames;
- (void)setItemNames:(id)arg0;

@end
