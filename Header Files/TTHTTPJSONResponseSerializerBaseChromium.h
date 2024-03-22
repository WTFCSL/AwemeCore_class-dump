//
//     Generated by private class-dump
//

@class NSSet, NSString, NSMutableIndexSet;

@interface TTHTTPJSONResponseSerializerBaseChromium : NSObject <TTJSONResponseSerializerProtocol> {
    NSSet *_acceptableContentTypeSet;
    NSMutableIndexSet *_acceptableStatusCodes;
}

@property (retain, nonatomic) NSSet *acceptableContentTypeSet;
@property (retain, nonatomic) NSMutableIndexSet *acceptableStatusCodes;
@property (copy, nonatomic) NSSet *acceptableContentTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serializer;

- (void)setAcceptableStatusCodes:(id)arg0;
- (void)setAcceptableContentTypes:(id)arg0;
- (id)acceptableContentTypes;
- (id)acceptableStatusCodes;
- (id)acceptableContentTypeSet;
- (void)setAcceptableContentTypeSet:(id)arg0;
- (id)responseObjectForResponse:(id)arg0 jsonObj:(id)arg1 responseError:(id)arg2 resultError:(id *)arg3;
- (id)init;
- (void).cxx_destruct;

@end