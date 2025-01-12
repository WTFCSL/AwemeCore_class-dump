//
//     Generated by private class-dump
//

@class NSError;

@interface LynxResourceResponse : NSObject {
    id _data;
    NSError *_error;
    long long _code;
}

@property (readonly, nonatomic) id data;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) long long code;

- (id)initWithError:(id)arg0 code:(long long)arg1;
- (id)data;
- (long long)code;
- (void).cxx_destruct;
- (BOOL)success;
- (id)initWithData:(id)arg0;
- (id)error;

@end
