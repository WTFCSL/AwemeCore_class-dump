//
//     Generated by private class-dump
//

@class NSSet;

@protocol TTJSONResponseSerializerProtocol <NSObject>

+ (id)serializer;

@property (copy, nonatomic) NSSet *acceptableContentTypes;

- (void)setAcceptableContentTypes:(id)arg0;
- (id)acceptableContentTypes;
- (id)responseObjectForResponse:(id)arg0 jsonObj:(id)arg1 responseError:(id)arg2 resultError:(id *)arg3;

@end
