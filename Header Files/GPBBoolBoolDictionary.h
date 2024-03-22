//
//     Generated by private class-dump
//

@class GPBMessage;

@interface GPBBoolBoolDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying> {
    GPBMessage *_autocreator;
    BOOL _values[2];
    BOOL _valueSet[2];
}

@property (readonly, nonatomic) unsigned long long count;

- (void)setGPBGenericValue:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)arg0 forGPBGenericValueKey:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)arg1;
- (void)removeAll;
- (void)setBool:(BOOL)arg0 forKey:(BOOL)arg1;
- (id)init;
- (id)initWithDictionary:(id)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)writeToCodedOutputStream:(id)arg0 asField:(id)arg1;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)arg0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg0;
- (id)description;
- (void)addEntriesFromDictionary:(id)arg0;
- (unsigned long long)computeSerializedSizeAsField:(id)arg0;
- (void)enumerateForTextFormat:(id /* block */)arg0;
- (id)initWithBools:(const BOOL *)arg0 forKeys:(const BOOL *)arg1 count:(unsigned long long)arg2;
- (void)enumerateKeysAndBoolsUsingBlock:(id /* block */)arg0;
- (BOOL)getBool:(BOOL *)arg0 forKey:(BOOL)arg1;
- (void)removeBoolForKey:(BOOL)arg0;

@end
