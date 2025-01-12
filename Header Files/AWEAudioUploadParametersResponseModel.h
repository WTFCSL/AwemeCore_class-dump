//
//     Generated by private class-dump
//

@class NSString, NSNumber, NSDictionary;

@interface AWEAudioUploadParametersResponseModel : MTLModel <MTLJSONSerializing> {
    NSString *_appKey;
    NSString *_fileHostName;
    NSString *_imageHostName;
    NSNumber *_fileRetryCount;
    NSNumber *_rwTimeout;
    NSNumber *_socketNumber;
    NSString *_authorization;
    NSNumber *_maxFailTime;
    NSNumber *_maxFailTimeEnabled;
    NSString *_userStoreRegion;
    NSDictionary *_authorization2;
    NSString *_queryAuth;
    NSNumber *_enableHttps;
    NSString *_vcAppKey;
    NSString *_vcAuthorization;
    NSDictionary *_vcAuthorization2;
}

@property (copy, nonatomic) NSString *appKey;
@property (copy, nonatomic) NSString *fileHostName;
@property (copy, nonatomic) NSString *imageHostName;
@property (retain, nonatomic) NSNumber *fileRetryCount;
@property (retain, nonatomic) NSNumber *rwTimeout;
@property (retain, nonatomic) NSNumber *socketNumber;
@property (copy, nonatomic) NSString *authorization;
@property (retain, nonatomic) NSNumber *maxFailTime;
@property (retain, nonatomic) NSNumber *maxFailTimeEnabled;
@property (copy, nonatomic) NSString *userStoreRegion;
@property (copy, nonatomic) NSDictionary *authorization2;
@property (copy, nonatomic) NSString *queryAuth;
@property (retain, nonatomic) NSNumber *enableHttps;
@property (copy, nonatomic) NSString *vcAppKey;
@property (copy, nonatomic) NSString *vcAuthorization;
@property (copy, nonatomic) NSDictionary *vcAuthorization2;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setImageHostName:(id)arg0;
- (void)setAppKey:(id)arg0;
- (id)appKey;
- (void)setFileRetryCount:(id)arg0;
- (void)setRwTimeout:(id)arg0;
- (void)setSocketNumber:(id)arg0;
- (void)setMaxFailTime:(id)arg0;
- (void)setQueryAuth:(id)arg0;
- (void)setEnableHttps:(id)arg0;
- (id)fileRetryCount;
- (id)rwTimeout;
- (id)enableHttps;
- (id)socketNumber;
- (id)maxFailTime;
- (id)queryAuth;
- (void)setFileHostName:(id)arg0;
- (void)setAuthorization2:(id)arg0;
- (id)imageHostName;
- (id)authorization2;
- (id)fileHostName;
- (id)maxFailTimeEnabled;
- (void)setMaxFailTimeEnabled:(id)arg0;
- (id)userStoreRegion;
- (void)setUserStoreRegion:(id)arg0;
- (id)vcAppKey;
- (void)setVcAppKey:(id)arg0;
- (id)vcAuthorization;
- (void)setVcAuthorization:(id)arg0;
- (id)vcAuthorization2;
- (void)setVcAuthorization2:(id)arg0;
- (id)authorization;
- (void).cxx_destruct;
- (void)setAuthorization:(id)arg0;

@end
