//
//     Generated by private class-dump
//

@class NSString;

@interface BXStrategyModel : NSObject {
    BOOL _isSticky;
    BOOL _isDynamic;
    NSString *_key;
    NSString *_spaceId;
    NSString *_benchId;
    NSString *_dec;
    NSString *_owner;
    id _defaultValue;
    id _strickyValue;
}

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *spaceId;
@property (copy, nonatomic) NSString *benchId;
@property (copy, nonatomic) NSString *dec;
@property (copy, nonatomic) NSString *owner;
@property (retain, nonatomic) id defaultValue;
@property (nonatomic) BOOL isSticky;
@property (nonatomic) BOOL isDynamic;
@property (retain, nonatomic) id strickyValue;

- (id)dec;
- (id)spaceId;
- (void)setSpaceId:(id)arg0;
- (id)benchId;
- (void)setBenchId:(id)arg0;
- (void)setDec:(id)arg0;
- (void)setIsSticky:(BOOL)arg0;
- (id)strickyValue;
- (void)setStrickyValue:(id)arg0;
- (BOOL)isDynamic;
- (id)owner;
- (id)key;
- (void)setDefaultValue:(id)arg0;
- (id)defaultValue;
- (void)setOwner:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setKey:(id)arg0;
- (void)setIsDynamic:(BOOL)arg0;
- (BOOL)isSticky;

@end