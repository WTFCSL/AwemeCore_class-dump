//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface BUADServiceBaseModule : NSObject {
    NSMutableDictionary *_bindings;
}

@property (readonly, nonatomic) NSMutableDictionary *bindings;

- (void)ensureInstance:(id)arg0 conformsTo:(id)arg1;
- (void)bindProvider:(id)arg0 toProtocol:(id)arg1 name:(id)arg2;
- (void)bind:(id)arg0 toProtocol:(id)arg1;
- (void)bindProvider:(id)arg0 toProtocol:(id)arg1;
- (void)bind:(id)arg0 toProtocol:(id)arg1 name:(id)arg2;
- (void)configure;
- (id)init;
- (void).cxx_destruct;
- (id)bindings;

@end