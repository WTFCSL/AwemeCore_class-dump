//
//     Generated by private class-dump
//

@class NSLock, AWEMaskPhoneModel, NSString;

@interface AWEPhonePreRequestManager : NSObject {
    BOOL _isRequesting;
    NSString *_currentScene;
    double _lastSuccessPreRequestTime;
    double _preRequestValidEriod;
    double _retryTime;
    NSLock *_recordLock;
    AWEMaskPhoneModel *_maskPhone;
}

@property (nonatomic) double lastSuccessPreRequestTime;
@property (nonatomic) double preRequestValidEriod;
@property (nonatomic) double retryTime;
@property (nonatomic) BOOL isRequesting;
@property (retain, nonatomic) NSLock *recordLock;
@property (retain, nonatomic) AWEMaskPhoneModel *maskPhone;
@property (copy, nonatomic) NSString *currentScene;

+ (id)sharedManager;

- (BOOL)hasAgreedPrivacyAlert;
- (void)startUpPreRequestWhenLaunch;
- (void)setIsRequesting:(BOOL)arg0;
- (BOOL)isRequesting;
- (void)setCurrentScene:(id)arg0;
- (double)lastSuccessPreRequestTime;
- (void)setLastSuccessPreRequestTime:(double)arg0;
- (void)recordMaskPhoneNumber:(id)arg0 carrierType:(long long)arg1;
- (id)recordLock;
- (void)setRecordLock:(id)arg0;
- (void)startUpIfCanPreRequest;
- (BOOL)canPreRequestForScene:(id)arg0;
- (void)setPreRequestValidEriod:(double)arg0;
- (void)startUpPreRequestWhenEnterForeground;
- (BOOL)useStoredMaskPhoneIfNeeded:(long long)arg0;
- (void)preRequestWithScene:(id)arg0 retryCount:(long long)arg1;
- (void)trackEventWithscene:(id)arg0 number:(id)arg1 carrier:(long long)arg2 retryCount:(long long)arg3 error:(id)arg4;
- (void)setMaskPhone:(id)arg0;
- (id)maskPhone;
- (double)preRequestValidEriod;
- (id)maskPhoneModel;
- (id)init;
- (void).cxx_destruct;
- (id)currentScene;
- (void)dealloc;
- (double)retryTime;
- (void)setRetryTime:(double)arg0;

@end
