//
//     Generated by private class-dump
//

@class NSError;

@interface IESGurdUnzipPackageInfo : NSObject {
    BOOL _successful;
    NSError *_error;
    long long _unzipDuration;
}

@property (nonatomic, getter=isSuccessful) BOOL successful;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long unzipDuration;

- (long long)unzipDuration;
- (void)setUnzipDuration:(long long)arg0;
- (void).cxx_destruct;
- (void)setError:(id)arg0;
- (id)error;
- (void)setSuccessful:(BOOL)arg0;
- (BOOL)isSuccessful;

@end