//
//     Generated by private class-dump
//

@class NSString, AWEActivityControllerManager;

@interface AWEActivityConfigManager : NSObject <AWEDigitalWellbeingMessage, AWEUserMessage, AWEActivityConfigManagerProtocol> {
    AWEActivityControllerManager *_feedContainManager;
    AWEActivityControllerManager *_detailManager;
    AWEActivityControllerManager *_nearby2TabManager;
}

@property (retain, nonatomic) AWEActivityControllerManager *feedContainManager;
@property (retain, nonatomic) AWEActivityControllerManager *detailManager;
@property (retain, nonatomic) AWEActivityControllerManager *nearby2TabManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLogin;
- (void)didFinishLogout;
- (void)teenModeDidChange:(BOOL)arg0 isLogout:(BOOL)arg1;
- (void)setupObservation;
- (void)setupPendantBaseView:(id)arg0 type:(unsigned long long)arg1;
- (void)cleanActivityPendantData;
- (id)feedContainManager;
- (id)nearby2TabManager;
- (id)detailManager;
- (void)enableLottieAnimation:(BOOL)arg0 baseView:(unsigned long long)arg1;
- (void)updateDataAndDownloadResourceWithSetting:(id)arg0;
- (void)setFeedContainManager:(id)arg0;
- (void)setDetailManager:(id)arg0;
- (void)setNearby2TabManager:(id)arg0;
- (void).cxx_destruct;
- (void)dealloc;

@end
