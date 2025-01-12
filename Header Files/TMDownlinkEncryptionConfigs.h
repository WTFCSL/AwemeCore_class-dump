//
//     Generated by private class-dump
//

@interface TMDownlinkEncryptionConfigs : NSObject {
    BOOL _enable;
    double _decryptTimeoutPeriod;
    unsigned long long _failedDowngradeNumber;
}

@property (nonatomic) BOOL enable;
@property (nonatomic) double decryptTimeoutPeriod;
@property (nonatomic) unsigned long long failedDowngradeNumber;

- (void)setDecryptTimeoutPeriod:(double)arg0;
- (void)setFailedDowngradeNumber:(unsigned long long)arg0;
- (double)decryptTimeoutPeriod;
- (unsigned long long)failedDowngradeNumber;
- (BOOL)enable;
- (id)initWithConfig:(id)arg0;
- (void)setEnable:(BOOL)arg0;

@end
