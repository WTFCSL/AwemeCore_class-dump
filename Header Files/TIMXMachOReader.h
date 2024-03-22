//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, TIMXSDKInstance;

@interface TIMXMachOReader : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
    NSMutableDictionary *_dict;
}

@property (retain, nonatomic) NSMutableDictionary *dict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)stringsForType:(id)arg0;
- (id)parseValue:(const void *)arg0 withType:(unsigned long long)arg1;
- (BOOL)readSection:(char *)arg0 inSegment:(char *)arg1 withImageInfo:(struct dl_info { char *x0; void *x1; char *x2; void *x3; })arg2 dataHandler:(id /* block */)arg3;
- (id)functionsForType:(id)arg0;
- (id)stringForKey:(id)arg0;
- (void).cxx_destruct;
- (id)dict;
- (id)objectForKey:(id)arg0;
- (void)setDict:(id)arg0;
- (id)initWithRootObject:(id)arg0;
- (id)functionForKey:(id)arg0;
- (void)p_initialize;

@end
