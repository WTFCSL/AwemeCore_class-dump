//
//     Generated by private class-dump
//

@class NSString, NSDate;

@interface BDSecureLinkErrModel : NSObject {
    NSDate *_occurDate;
    unsigned long long _errorType;
    long long _errorCode;
    NSString *_errorMsg;
}

@property (retain, nonatomic) NSDate *occurDate;
@property (nonatomic) unsigned long long errorType;
@property (nonatomic) long long errorCode;
@property (retain, nonatomic) NSString *errorMsg;

- (void)setErrorMsg:(id)arg0;
- (id)errorMsg;
- (id)occurDate;
- (void)setOccurDate:(id)arg0;
- (void).cxx_destruct;
- (void)setErrorCode:(long long)arg0;
- (long long)errorCode;
- (unsigned long long)errorType;
- (void)setErrorType:(unsigned long long)arg0;

@end