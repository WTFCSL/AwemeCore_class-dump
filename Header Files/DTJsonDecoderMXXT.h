//
//     Generated by private class-dump
//

@interface DTJsonDecoderMXXT : NSObject

+ (id)decoder;

- (id)decodeWithClass:(Class)arg0 elementClass:(Class)arg1 fromJSONObject:(id)arg2;
- (id)decodeDictionaryWithElementClass:(Class)arg0 fromJSONObject:(id)arg1;
- (id)decodeArrayWithElementClass:(Class)arg0 fromJSONObject:(id)arg1;
- (id)decodeObjectOfClass:(Class)arg0 fromJSONObject:(id)arg1;
- (void)setupObject:(id)arg0 ofClass:(Class)arg1 lookupDictionary:(id)arg2;
- (void)setProperty:(struct objc_property { } *)arg0 ofObject:(id)arg1 lookupDictionary:(id)arg2;
- (id)decodeWithClass:(Class)arg0 elementClass:(Class)arg1 fromJSONString:(id)arg2;
- (void)setNumberValue:(id)arg0 toProperty:(id)arg1 ofObject:(id)arg2 convertSelector:(SEL)arg3;
- (void)setStringValue:(id)arg0 toProperty:(id)arg1 ofObject:(id)arg2;
- (void)setDateValue:(id)arg0 toProperty:(id)arg1 ofObject:(id)arg2;
- (id)decodeWithClassName:(id)arg0 elementClass:(Class)arg1 fromJSONObject:(id)arg2;

@end
