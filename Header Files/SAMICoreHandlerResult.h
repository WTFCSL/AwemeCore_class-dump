//
//     Generated by private class-dump
//

@class SAMICore;

@interface SAMICoreHandlerResult : NSObject {
    SAMICore *_coreHandler;
    long long _errorCode;
}

@property (retain, nonatomic) SAMICore *coreHandler;
@property (nonatomic) long long errorCode;

- (id)coreHandler;
- (void)setCoreHandler:(id)arg0;
- (void).cxx_destruct;
- (void)setErrorCode:(long long)arg0;
- (long long)errorCode;

@end