//
//     Generated by private class-dump
//

@class NSString, NSError;

@interface BDTGCSRResult : NSObject {
    int _attemptCount;
    NSString *_csr;
    NSError *_error;
}

@property (copy, nonatomic) NSString *csr;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) int attemptCount;

- (void).cxx_destruct;
- (void)setAttemptCount:(int)arg0;
- (void)setError:(id)arg0;
- (int)attemptCount;
- (id)error;
- (id)csr;
- (void)setCsr:(id)arg0;

@end
