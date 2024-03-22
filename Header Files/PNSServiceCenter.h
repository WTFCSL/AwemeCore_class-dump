//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface PNSServiceCenter : NSObject {
    NSMutableDictionary *_instanceProtocolMap;
    NSMutableDictionary *_classProtocolMap;
}

@property (retain, nonatomic) NSMutableDictionary *instanceProtocolMap;
@property (retain, nonatomic) NSMutableDictionary *classProtocolMap;

+ (id)sharedInstance;

- (Class)getClass:(id)arg0;
- (id)getInstance:(id)arg0;
- (void)bindClass:(Class)arg0 toProtocol:(id)arg1;
- (void)setInstanceProtocolMap:(id)arg0;
- (void)setClassProtocolMap:(id)arg0;
- (void)_loadCompileServiceIfNeeded;
- (void)safeSetClass:(Class)arg0 forKey:(id)arg1;
- (void)safeSetInstance:(id)arg0 forKey:(id)arg1;
- (id)safeGetInstanceForKey:(id)arg0;
- (Class)safeGetClassForKey:(id)arg0;
- (void)_parseCompileServicePair:(struct mach_header_64 { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *)arg0;
- (id)classProtocolMap;
- (id)instanceProtocolMap;
- (void)bindInstance:(id)arg0 toProtocol:(id)arg1;
- (id)init;
- (void).cxx_destruct;

@end
