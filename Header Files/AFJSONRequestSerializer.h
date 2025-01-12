//
//     Generated by private class-dump
//

@interface AFJSONRequestSerializer : AFHTTPRequestSerializer {
    unsigned long long _writingOptions;
}

@property (nonatomic) unsigned long long writingOptions;

+ (id)serializerWithWritingOptions:(unsigned long long)arg0;
+ (id)serializer;

- (id)requestBySerializingRequest:(id)arg0 withParameters:(id)arg1 error:(id *)arg2;
- (unsigned long long)writingOptions;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (void)setWritingOptions:(unsigned long long)arg0;

@end
