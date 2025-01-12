//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface IESFalconStatModel : NSObject {
    NSString *_resourceURLString;
    NSString *_offlineRule;
    NSString *_mimeType;
    long long _offlineStatus;
    long long _offlineDuration;
    long long _onlineDuration;
    NSString *_accessKey;
    NSString *_channel;
    unsigned long long _packageVersion;
    long long _errorCode;
    NSString *_errorMessage;
    long long _falconDataLength;
    double _readDuration;
    NSArray *_bundles;
}

@property (copy, nonatomic) NSString *resourceURLString;
@property (copy, nonatomic) NSString *offlineRule;
@property (copy, nonatomic) NSString *mimeType;
@property (nonatomic) long long offlineStatus;
@property (nonatomic) long long offlineDuration;
@property (nonatomic) long long onlineDuration;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *channel;
@property (nonatomic) unsigned long long packageVersion;
@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *errorMessage;
@property (nonatomic) long long falconDataLength;
@property (nonatomic) double readDuration;
@property (copy, nonatomic) NSArray *bundles;

- (void)setOfflineStatus:(long long)arg0;
- (void)setFalconDataLength:(long long)arg0;
- (unsigned long long)packageVersion;
- (void)setBundles:(id)arg0;
- (double)readDuration;
- (long long)falconDataLength;
- (void)setPackageVersion:(unsigned long long)arg0;
- (void)setResourceURLString:(id)arg0;
- (id)statDictionary;
- (void)setOfflineDuration:(long long)arg0;
- (void)setOnlineDuration:(long long)arg0;
- (void)setReadDuration:(double)arg0;
- (void)setOfflineRule:(id)arg0;
- (id)resourceURLString;
- (id)offlineRule;
- (long long)offlineStatus;
- (long long)onlineDuration;
- (id)channel;
- (id)mimeType;
- (void).cxx_destruct;
- (void)setChannel:(id)arg0;
- (void)setErrorCode:(long long)arg0;
- (void)setMimeType:(id)arg0;
- (long long)errorCode;
- (id)errorMessage;
- (id)accessKey;
- (void)setAccessKey:(id)arg0;
- (void)setErrorMessage:(id)arg0;
- (id)bundles;
- (long long)offlineDuration;

@end
