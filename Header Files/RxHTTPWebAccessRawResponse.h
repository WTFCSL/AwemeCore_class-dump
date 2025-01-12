//
//     Generated by private class-dump
//

@class NSData, NSURLResponse;

@interface RxHTTPWebAccessRawResponse : NSObject {
    NSURLResponse *_response;
    NSData *_data;
}

@property (readonly, nonatomic) NSURLResponse *response;
@property (readonly, nonatomic) NSData *data;

+ (id)networkResponseWithURLResponse:(id)arg0 data:(id)arg1;

- (id)data;
- (void).cxx_destruct;
- (id)response;
- (id)initWithURLResponse:(id)arg0 data:(id)arg1;

@end
