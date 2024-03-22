//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWELocationGroupModel : MTLModel <MTLJSONSerializing> {
    BOOL _hideLocation;
    NSString *_index;
    NSArray *_cities;
}

@property (retain, nonatomic) NSString *index;
@property (retain, nonatomic) NSArray *cities;
@property (nonatomic) BOOL hideLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)hideLocation;
- (void)setHideLocation:(BOOL)arg0;
- (void)setIndex:(id)arg0;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (id)cities;
- (id)index;
- (void)setCities:(id)arg0;

@end
