//
//     Generated by private class-dump
//

@class NSMapTable;

@interface AWEAppContext : NSObject {
    NSMapTable *_objectRegistry;
    NSMapTable *_classRegistry;
    NSMapTable *_providerRegistry;
}

@property (class, readonly, nonatomic) AWEAppContext *appContext;

@property (retain, nonatomic) NSMapTable *objectRegistry;
@property (retain, nonatomic) NSMapTable *classRegistry;
@property (retain, nonatomic) NSMapTable *providerRegistry;

+ (id)appContext;

- (id)objectForProtocol:(id)arg0;
- (BOOL)bindProvider:(id /* block */)arg0 forProtocol:(id)arg1;
- (BOOL)bindClass:(Class)arg0 forProtocol:(id)arg1;
- (id)providerRegistry;
- (id)objectRegistry;
- (BOOL)bind:(id)arg0 forProtocol:(id)arg1;
- (void)setObjectRegistry:(id)arg0;
- (void)setClassRegistry:(id)arg0;
- (void)setProviderRegistry:(id)arg0;
- (id)init;
- (id)classRegistry;
- (void).cxx_destruct;

@end
