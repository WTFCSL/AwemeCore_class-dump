//
//     Generated by private class-dump
//

@interface AWELiveAsyncAuthData : AWEBaseApiModel {
    long long _asyncAuthenticationOperate;
    long long _asyncAuthenticationAbType;
    long long _keepAliveTimeStamp;
    long long _buffer;
}

@property (nonatomic) long long asyncAuthenticationOperate;
@property (nonatomic) long long asyncAuthenticationAbType;
@property (nonatomic) long long keepAliveTimeStamp;
@property (nonatomic) long long buffer;

- (long long)asyncAuthenticationOperate;
- (long long)keepAliveTimeStamp;
- (void)setKeepAliveTimeStamp:(long long)arg0;
- (void)setAsyncAuthenticationOperate:(long long)arg0;
- (long long)asyncAuthenticationAbType;
- (void)setAsyncAuthenticationAbType:(long long)arg0;
- (void)setBuffer:(long long)arg0;
- (long long)buffer;

@end