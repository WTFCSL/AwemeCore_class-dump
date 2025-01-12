//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface IESECLiveToggleModel : MTLModel <MTLJSONSerializing> {
    unsigned long long _type;
    NSArray *_elements;
}

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSArray *elements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)elementsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setElements:(id)arg0;
- (void).cxx_destruct;
- (id)elements;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg0;

@end
