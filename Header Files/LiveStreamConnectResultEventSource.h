//
//     Generated by private class-dump
//

@class NSString;

@interface LiveStreamConnectResultEventSource : NSObject {
    long long _scene;
    long long _rtmpCode1;
    long long _rtmpCode2;
    long long _rtmpCode3;
    NSString *_rtmpMsg;
    NSString *_extra;
}

@property (nonatomic) long long scene;
@property (nonatomic) long long rtmpCode1;
@property (nonatomic) long long rtmpCode2;
@property (nonatomic) long long rtmpCode3;
@property (copy, nonatomic) NSString *rtmpMsg;
@property (copy, nonatomic) NSString *extra;

+ (id)sourceWithRtmpCode1:(long long)arg0 code2:(long long)arg1 code3:(long long)arg2 msg:(id)arg3;

- (void)setExtra:(id)arg0;
- (long long)rtmpCode1;
- (long long)rtmpCode2;
- (long long)rtmpCode3;
- (id)rtmpMsg;
- (void)setRtmpCode1:(long long)arg0;
- (void)setRtmpCode2:(long long)arg0;
- (void)setRtmpCode3:(long long)arg0;
- (void)setRtmpMsg:(id)arg0;
- (void)setScene:(long long)arg0;
- (void).cxx_destruct;
- (id)extra;
- (long long)scene;

@end
