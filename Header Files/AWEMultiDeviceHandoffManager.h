//
//     Generated by private class-dump
//

@class NSString, NSUserActivity;

@interface AWEMultiDeviceHandoffManager : NSObject <NSUserActivityDelegate> {
    NSUserActivity *_userActivity;
    NSString *_timerIdentify;
    NSString *_scene;
}

@property (retain, nonatomic) NSUserActivity *userActivity;
@property (retain, nonatomic) NSString *timerIdentify;
@property (retain, nonatomic) NSString *scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)timerIdentify;
- (void)cancelHandoffWithTimeout;
- (void)setTimerIdentify:(id)arg0;
- (void)beginHandoffWithUrl:(id)arg0;
- (id)userActivity;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (void)userActivityWillSave:(id)arg0;
- (id)scene;
- (void)userActivityWasContinued:(id)arg0;
- (void)setUserActivity:(id)arg0;

@end