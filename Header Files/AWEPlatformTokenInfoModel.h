//
//     Generated by private class-dump
//

@class NSDictionary, NSError;

@interface AWEPlatformTokenInfoModel : AWEBaseApiModel {
    double _lastUploadTime;
    unsigned long long _platform;
    NSDictionary *_info;
    NSError *_error;
}

@property (nonatomic) double lastUploadTime;
@property (nonatomic) unsigned long long platform;
@property (retain, nonatomic) NSDictionary *info;
@property (retain, nonatomic) NSError *error;

- (void)setLastUploadTime:(double)arg0;
- (double)lastUploadTime;
- (id)info;
- (void).cxx_destruct;
- (void)setInfo:(id)arg0;
- (void)setPlatform:(unsigned long long)arg0;
- (unsigned long long)platform;
- (void)setError:(id)arg0;
- (id)error;

@end
