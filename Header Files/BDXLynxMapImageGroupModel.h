//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface BDXLynxMapImageGroupModel : MTLModel <MTLJSONSerializing> {
    NSArray *_loadParams;
    unsigned long long _mode;
}

@property (copy, nonatomic) NSArray *loadParams;
@property (nonatomic) unsigned long long mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)loadParams;
- (void)setLoadParams:(id)arg0;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (unsigned long long)mode;
- (void)setMode:(unsigned long long)arg0;

@end
