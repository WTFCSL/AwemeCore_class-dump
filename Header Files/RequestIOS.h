//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSURL, NSData;

@interface RequestIOS : NSObject {
    NSURL *_url;
    NSString *_method;
    NSData *_body;
    NSDictionary *_headers;
}

@property (copy) NSURL *url;
@property (copy) NSString *method;
@property (copy) NSData *body;
@property (copy) NSDictionary *headers;

- (id)init:(id)arg0 method:(id)arg1 headers:(id)arg2 body:(id)arg3;
- (id)init:(id)arg0 method:(id)arg1;
- (id)init:(id)arg0 method:(id)arg1 headers:(id)arg2;
- (void)setBody:(id)arg0;
- (id)body;
- (void)setHeaders:(id)arg0;
- (void).cxx_destruct;
- (id)method;
- (id)headers;
- (void)setMethod:(id)arg0;
- (void)setUrl:(id)arg0;
- (id)init:(id)arg0;
- (id)url;

@end