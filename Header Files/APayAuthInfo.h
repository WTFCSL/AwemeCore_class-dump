//
//     Generated by private class-dump
//

@class NSString;

@interface APayAuthInfo : NSObject {
    NSString *_appID;
    NSString *_pid;
    NSString *_redirectUri;
}

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *pid;
@property (copy, nonatomic) NSString *redirectUri;

- (id)wapDescription;
- (void)setRedirectUri:(id)arg0;
- (id)redirectUri;
- (id)initWithAppID:(id)arg0 pid:(id)arg1 redirectUri:(id)arg2;
- (void)setAppID:(id)arg0;
- (void).cxx_destruct;
- (id)pid;
- (id)appID;
- (void)setPid:(id)arg0;
- (id)description;

@end