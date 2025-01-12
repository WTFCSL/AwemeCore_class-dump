//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWEMayDayBridgeOpenMethodParamModel : BDXBridgeModel {
    BOOL _replace;
    BOOL _disableAnimation;
    BOOL _useSysBrowser;
    BOOL _isRoot;
    BOOL _firstClose;
    NSString *_schema;
    NSDictionary *_state;
    NSString *_memoryLevel;
    NSString *_backToSchema;
    NSString *_enterFrom;
}

@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) NSDictionary *state;
@property (nonatomic) BOOL replace;
@property (nonatomic) BOOL disableAnimation;
@property (nonatomic) BOOL useSysBrowser;
@property (copy, nonatomic) NSString *memoryLevel;
@property (copy, nonatomic) NSString *backToSchema;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL isRoot;
@property (nonatomic) BOOL firstClose;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (id)backToSchema;
- (void)setBackToSchema:(id)arg0;
- (BOOL)replace;
- (void)setReplace:(BOOL)arg0;
- (BOOL)useSysBrowser;
- (void)setUseSysBrowser:(BOOL)arg0;
- (BOOL)firstClose;
- (void)setFirstClose:(BOOL)arg0;
- (void)setSchema:(id)arg0;
- (void).cxx_destruct;
- (id)state;
- (void)setState:(id)arg0;
- (BOOL)isRoot;
- (id)schema;
- (BOOL)disableAnimation;
- (void)setIsRoot:(BOOL)arg0;
- (id)memoryLevel;
- (void)setMemoryLevel:(id)arg0;
- (void)setDisableAnimation:(BOOL)arg0;

@end
