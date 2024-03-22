//
//     Generated by private class-dump
//

@class NSLock, NSMutableDictionary;

@interface IESLiveLinkRTCInteractCommunicationQosInfo : NSObject {
    long long _send_vencode_fps;
    long long _send_video_loss;
    long long _send_audio_loss;
    long long _rtc_app_cpu;
    long long _rtc_sys_cpu;
    long long _rtc_app_memory;
    long long _rtc_sys_memory;
    NSLock *_remoteUserLock;
    NSMutableDictionary *_remoteUserInfo;
}

@property (retain, nonatomic) NSLock *remoteUserLock;
@property (retain, nonatomic) NSMutableDictionary *remoteUserInfo;
@property (nonatomic) long long send_vencode_fps;
@property (nonatomic) long long send_video_loss;
@property (nonatomic) long long send_audio_loss;
@property (nonatomic) long long rtc_app_cpu;
@property (nonatomic) long long rtc_sys_cpu;
@property (nonatomic) long long rtc_app_memory;
@property (nonatomic) long long rtc_sys_memory;

+ (double)appCpuUsage;
+ (double)systemCpuUsage;
+ (double)appMemoryUsage;
+ (double)systemMemoryUsage;

- (id)getInfoDict;
- (id)remoteUserInfo;
- (void)setRemoteUserInfo:(id)arg0;
- (void)removeAllUser;
- (long long)send_vencode_fps;
- (void)setSend_vencode_fps:(long long)arg0;
- (void)updateRemoteUser:(id)arg0 Values:(id)arg1;
- (void)addRemoteUser:(id)arg0;
- (void)removeRemoteUser:(id)arg0;
- (id)remoteUserInfoJson;
- (void)updateSysInfo;
- (long long)send_video_loss;
- (void)setSend_video_loss:(long long)arg0;
- (long long)send_audio_loss;
- (void)setSend_audio_loss:(long long)arg0;
- (long long)rtc_app_cpu;
- (void)setRtc_app_cpu:(long long)arg0;
- (long long)rtc_sys_cpu;
- (void)setRtc_sys_cpu:(long long)arg0;
- (long long)rtc_app_memory;
- (void)setRtc_app_memory:(long long)arg0;
- (long long)rtc_sys_memory;
- (void)setRtc_sys_memory:(long long)arg0;
- (id)remoteUserLock;
- (void)setRemoteUserLock:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)clearStats;

@end