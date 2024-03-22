//
//     Generated by private class-dump
//

@class NSArray, NSString, NSNumber;

@interface AWEIMSpecialEmojiResourceModel : MTLModel <MTLJSONSerializing> {
    BOOL _isActive;
    NSArray *_relation;
    NSString *_resourceUrl;
    NSNumber *_version;
}

@property (retain, nonatomic) NSArray *relation;
@property (retain, nonatomic) NSString *resourceUrl;
@property (retain, nonatomic) NSNumber *version;
@property (nonatomic) BOOL isActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)relationJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setVersion:(id)arg0;
- (void).cxx_destruct;
- (void)setIsActive:(BOOL)arg0;
- (id)relation;
- (void)setRelation:(id)arg0;
- (id)version;
- (BOOL)isActive;
- (id)resourceUrl;
- (void)setResourceUrl:(id)arg0;

@end
