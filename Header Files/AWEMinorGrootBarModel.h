//
//     Generated by private class-dump
//

@class NSString;

@interface AWEMinorGrootBarModel : MTLModel <MTLJSONSerializing> {
    NSString *_speciesID;
    NSString *_speciesDescription;
    NSString *_schema;
    NSString *_speciesName;
}

@property (copy, nonatomic) NSString *speciesID;
@property (copy, nonatomic) NSString *speciesDescription;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *speciesName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)speciesID;
- (void)setSpeciesID:(id)arg0;
- (id)speciesName;
- (id)speciesDescription;
- (void)setSpeciesDescription:(id)arg0;
- (void)setSpeciesName:(id)arg0;
- (void)setSchema:(id)arg0;
- (void).cxx_destruct;
- (id)schema;

@end
