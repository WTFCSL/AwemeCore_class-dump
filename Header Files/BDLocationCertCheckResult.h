//
//     Generated by private class-dump
//

@class NSError, NSDictionary;

@interface BDLocationCertCheckResult : NSObject {
    BOOL _isValid;
    BOOL _isEmptyCert;
    NSError *_error;
    NSDictionary *_params;
}

@property (nonatomic) BOOL isValid;
@property (copy, nonatomic) NSError *error;
@property (nonatomic) BOOL isEmptyCert;
@property (copy, nonatomic) NSDictionary *params;

- (BOOL)isEmptyCert;
- (void)setIsEmptyCert:(BOOL)arg0;
- (void)setIsValid:(BOOL)arg0;
- (void).cxx_destruct;
- (BOOL)isValid;
- (void)setError:(id)arg0;
- (id)params;
- (id)error;
- (void)setParams:(id)arg0;

@end