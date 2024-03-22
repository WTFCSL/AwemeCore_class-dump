//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary;

@interface TTKNaviInspirationModel : MTLModel <MTLJSONSerializing, AWENaviFeatureDataProtocol> {
    NSString *_inspirationKey;
    NSString *_thumbnailURL;
    NSString *_icon;
    NSString *_name;
    NSArray *_whiteListUidArray;
}

@property (readonly, copy, nonatomic) NSString *inspirationKey;
@property (readonly, copy, nonatomic) NSString *thumbnailURL;
@property (readonly, copy, nonatomic) NSString *icon;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *whiteListUidArray;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)inspirationKey;
- (unsigned long long)featureDataType;
- (id)whiteListUidArray;
- (id)icon;
- (void).cxx_destruct;
- (id)name;
- (id)thumbnailURL;

@end