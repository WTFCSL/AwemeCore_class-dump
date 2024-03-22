//
//     Generated by private class-dump
//

@class NSString;

@interface RTVHTTPErrorMessage : NSObject <RxHTTPErrorMessage> {
    NSString *_message;
    long long _code;
    NSString *_actionSchema;
}

@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, nonatomic) long long code;
@property (readonly, copy, nonatomic) NSString *actionSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)actionSchema;
- (id)initWithMessage:(id)arg0 code:(long long)arg1 actionSchema:(id)arg2;
- (long long)code;
- (void).cxx_destruct;
- (id)message;

@end