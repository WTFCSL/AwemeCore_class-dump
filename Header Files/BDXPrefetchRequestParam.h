//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface BDXPrefetchRequestParam : MTLModel <MTLJSONSerializing> {
    BOOL _enableAppIdIsolation;
    unsigned long long _type;
    id _value;
    NSNumber *_required;
}

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) id value;
@property (retain, nonatomic) NSNumber *required;
@property (nonatomic) BOOL enableAppIdIsolation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)typeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)enableAppIdIsolation;
- (void)setEnableAppIdIsolation:(BOOL)arg0;
- (void).cxx_destruct;
- (id)value;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg0;
- (id)required;
- (void)setRequired:(id)arg0;
- (void)setValue:(id)arg0;

@end
