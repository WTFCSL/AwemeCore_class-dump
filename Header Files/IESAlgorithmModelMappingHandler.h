//
//     Generated by private class-dump
//

@class NSDictionary, NSMutableDictionary;

@interface IESAlgorithmModelMappingHandler : NSObject {
    NSMutableDictionary *_originModelNameMap;
    NSMutableDictionary *_mixModelNameMap;
    NSDictionary *_mixFromStringMap;
    NSDictionary *_mixToStringMap;
}

@property (retain, nonatomic) NSMutableDictionary *originModelNameMap;
@property (retain, nonatomic) NSMutableDictionary *mixModelNameMap;
@property (retain, nonatomic) NSDictionary *mixFromStringMap;
@property (retain, nonatomic) NSDictionary *mixToStringMap;

+ (id)defaultHandler;

- (void)buildMixStringMap;
- (void)setMixFromStringMap:(id)arg0;
- (void)setMixToStringMap:(id)arg0;
- (id)mixModelNameMap;
- (id)mixToStringMap;
- (id)originModelNameMap;
- (id)mixFromStringMap;
- (BOOL)makeMappingWithOriginModelName:(id)arg0;
- (BOOL)makeMappingWithMapModelName:(id)arg0;
- (id)getMapModelNameWithModelName:(id)arg0;
- (void)setOriginModelNameMap:(id)arg0;
- (void)setMixModelNameMap:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end