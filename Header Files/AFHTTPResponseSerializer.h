//
//     Generated by private class-dump
//

@class NSIndexSet, NSSet, NSString;

@interface AFHTTPResponseSerializer : NSObject <AFURLResponseSerialization> {
    unsigned long long _stringEncoding;
    NSIndexSet *_acceptableStatusCodes;
    NSSet *_acceptableContentTypes;
}

@property (nonatomic) unsigned long long stringEncoding;
@property (copy, nonatomic) NSIndexSet *acceptableStatusCodes;
@property (copy, nonatomic) NSSet *acceptableContentTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serializer;
+ (BOOL)supportsSecureCoding;

- (id)responseObjectForResponse:(id)arg0 data:(id)arg1 error:(id *)arg2;
- (void)setAcceptableStatusCodes:(id)arg0;
- (void)setAcceptableContentTypes:(id)arg0;
- (id)acceptableContentTypes;
- (id)acceptableStatusCodes;
- (BOOL)validateResponse:(id)arg0 data:(id)arg1 error:(id *)arg2;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (unsigned long long)stringEncoding;
- (void)setStringEncoding:(unsigned long long)arg0;

@end