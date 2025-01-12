//
//     Generated by private class-dump
//

@class NSArray;

@interface AFCompoundResponseSerializer : AFHTTPResponseSerializer {
    NSArray *_responseSerializers;
}

@property (copy, nonatomic) NSArray *responseSerializers;

+ (id)compoundSerializerWithResponseSerializers:(id)arg0;

- (id)responseObjectForResponse:(id)arg0 data:(id)arg1 error:(id *)arg2;
- (void)setResponseSerializers:(id)arg0;
- (id)responseSerializers;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;

@end
