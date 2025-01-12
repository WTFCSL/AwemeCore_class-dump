//
//     Generated by private class-dump
//

@class NSString, NSArray, NSNumber;

@interface AWEProfileLocationSegment : MTLModel <MTLJSONSerializing> {
    NSString *_code;
    NSString *_cnName;
    NSString *_enName;
    NSString *_level;
    NSArray *_children;
    NSNumber *_geoId;
}

@property (readonly, nonatomic) NSString *firstLetter;
@property (retain, nonatomic) NSString *code;
@property (retain, nonatomic) NSString *cnName;
@property (retain, nonatomic) NSString *enName;
@property (readonly, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *level;
@property (retain, nonatomic) NSArray *children;
@property (readonly, nonatomic) BOOL hasChildren;
@property (retain, nonatomic) NSNumber *geoId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)childrenJSONTransformer;

- (id)enName;
- (void)setEnName:(id)arg0;
- (id)firstLetter;
- (void)setCnName:(id)arg0;
- (id)cnName;
- (void)setLevel:(id)arg0;
- (void)setCode:(id)arg0;
- (void)setChildren:(id)arg0;
- (id)level;
- (id)code;
- (void).cxx_destruct;
- (id)displayName;
- (id)children;
- (id)geoId;
- (void)setGeoId:(id)arg0;
- (BOOL)hasChildren;

@end
