//
//     Generated by private class-dump
//

@class GPBMessage;

@interface GPBDoubleArray : NSObject <NSCopying> {
    GPBMessage *_autocreator;
    double *_values;
    unsigned long long _count;
    unsigned long long _capacity;
}

@property (readonly, nonatomic) unsigned long long count;

+ (id)array;
+ (id)arrayWithCapacity:(unsigned long long)arg0;
+ (id)arrayWithValueArray:(id)arg0;
+ (id)arrayWithValue:(double)arg0;

- (void)removeAll;
- (id)init;
- (void)insertValue:(double)arg0 atIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (double)valueAtIndex:(unsigned long long)arg0;
- (void)replaceValueAtIndex:(unsigned long long)arg0 withValue:(double)arg1;
- (void)enumerateValuesWithOptions:(unsigned long long)arg0 usingBlock:(id /* block */)arg1;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)arg0;
- (void)internalResizeToCapacity:(unsigned long long)arg0;
- (unsigned long long)hash;
- (void)exchangeValueAtIndex:(unsigned long long)arg0 withValueAtIndex:(unsigned long long)arg1;
- (id)initWithValues:(const double *)arg0 count:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg0;
- (void)removeValueAtIndex:(unsigned long long)arg0;
- (void)addValues:(const double *)arg0 count:(unsigned long long)arg1;
- (id)description;
- (void)enumerateValuesWithBlock:(id /* block */)arg0;
- (void)dealloc;
- (void)addValuesFromArray:(id)arg0;
- (id)initWithValueArray:(id)arg0;
- (void)addValue:(double)arg0;

@end
