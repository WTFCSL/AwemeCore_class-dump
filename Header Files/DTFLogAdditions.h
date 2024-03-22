//
//     Generated by private class-dump
//

@class NSString;

@interface DTFLogAdditions : NSObject {
    NSString *_deviceModel;
    NSString *_language;
    NSString *_userID;
}

@property (readonly, nonatomic) NSString *UUID;
@property (readonly, nonatomic) NSString *UTDID;
@property (readonly, nonatomic) NSString *clientID;
@property (retain, nonatomic) NSString *deviceModel;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSString *userID;
@property (retain, nonatomic) NSString *logServerURL;
@property (retain, nonatomic) NSString *configServerURL;
@property (retain, nonatomic) NSString *platformID;

+ (id)sharedInstance;

- (id)UTDID;
- (long long)numberOfSyncLogs;
- (void)logToFile:(id)arg0;
- (id)logServerURL;
- (void)setLogServerURL:(id)arg0;
- (id)configServerURL;
- (void)setConfigServerURL:(id)arg0;
- (id)platformID;
- (void)setPlatformID:(id)arg0;
- (id)defaultUploadLogTypes;
- (id)userID;
- (void)setDeviceModel:(id)arg0;
- (void).cxx_destruct;
- (id)deviceModel;
- (id)language;
- (void)setUserID:(id)arg0;
- (id)UUID;
- (id)clientID;
- (void)setLanguage:(id)arg0;

@end
