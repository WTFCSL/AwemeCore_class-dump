//
//     Generated by private class-dump
//

@class NSString;

@interface BDXBridgeGetSessionMethodParamModel : BDXBridgeModel {
    NSString *_rootId;
    NSString *_sessionId;
    NSString *_type;
    NSString *_key;
}

@property (copy, nonatomic) NSString *rootId;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *key;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (id)rootId;
- (void)setRootId:(id)arg0;
- (id)key;
- (void)setSessionId:(id)arg0;
- (void).cxx_destruct;
- (id)sessionId;
- (id)type;
- (void)setKey:(id)arg0;
- (void)setType:(id)arg0;

@end
