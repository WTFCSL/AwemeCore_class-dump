//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface ECOMTIMMachOReader : NSObject {
    NSMutableDictionary *_dict;
}

@property (retain, nonatomic) NSMutableDictionary *dict;

+ (id)sharedInstance;

- (id)stringsForType:(id)arg0;
- (void)lazilyInitialize;
- (id)parseValue:(const void *)arg0 withType:(unsigned long long)arg1;
- (BOOL)readSection:(char *)arg0 inSegment:(char *)arg1 withImageInfo:(struct dl_info { char *x0; void *x1; char *x2; void *x3; })arg2 dataHandler:(id /* block */)arg3;
- (id)functionsForType:(id)arg0;
- (id)stringForKey:(id)arg0;
- (void).cxx_destruct;
- (id)dict;
- (id)objectForKey:(id)arg0;
- (void)setDict:(id)arg0;
- (id)functionForKey:(id)arg0;

@end
