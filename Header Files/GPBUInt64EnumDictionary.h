//
//     Generated by private class-dump
//

@class GPBMessage, NSMutableDictionary;

@interface GPBUInt64EnumDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying> {
    GPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
    void /* function */ *_validationFunc;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) void /* function */ *validationFunc;

- (void)setGPBGenericValue:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)arg0 forGPBGenericValueKey:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)arg1;
- (void)removeAll;
- (id)init;
- (id)initWithValidationFunction:(void /* function */ *)arg0;
- (void)setRawValue:(int)arg0 forKey:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)initWithValidationFunction:(void /* function */ *)arg0 rawValues:(const int *)arg1 forKeys:(const unsigned long long *)arg2 count:(unsigned long long)arg3;
- (void)writeToCodedOutputStream:(id)arg0 asField:(id)arg1;
- (BOOL)getEnum:(int *)arg0 forKey:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)setEnum:(int)arg0 forKey:(unsigned long long)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg0;
- (id)initWithValidationFunction:(void /* function */ *)arg0 capacity:(unsigned long long)arg1;
- (id)serializedDataForUnknownValue:(int)arg0 forKey:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)arg1 keyDataType:(unsigned char)arg2;
- (void)enumerateKeysAndEnumsUsingBlock:(id /* block */)arg0;
- (id)description;
- (void)dealloc;
- (unsigned long long)computeSerializedSizeAsField:(id)arg0;
- (void /* function */ *)validationFunc;
- (BOOL)getRawValue:(int *)arg0 forKey:(unsigned long long)arg1;
- (void)enumerateForTextFormat:(id /* block */)arg0;
- (void)removeEnumForKey:(unsigned long long)arg0;
- (void)addRawEntriesFromDictionary:(id)arg0;
- (void)enumerateKeysAndRawValuesUsingBlock:(id /* block */)arg0;

@end
