//
//     Generated by private class-dump
//

@class NSMapTable;

@interface LSServiceKit : NSObject {
    NSMapTable *_clazzs;
    NSMapTable *_objects;
}

@property (retain, nonatomic) NSMapTable *clazzs;
@property (retain, nonatomic) NSMapTable *objects;

+ (id)shared;

- (id)objectForProtocol:(id)arg0;
- (BOOL)setObject:(id)arg0 forProtocol:(id)arg1;
- (BOOL)registerClass:(Class)arg0 forProtocol:(id)arg1;
- (Class)classForProtocol:(id)arg0;
- (id)removeObjectForProtocol:(id)arg0;
- (id)multiObjectForProtocol:(id)arg0;
- (Class)unRegisterClassForProtocol:(id)arg0;
- (id)clazzs;
- (void)setClazzs:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)objects;
- (void)setObjects:(id)arg0;

@end
