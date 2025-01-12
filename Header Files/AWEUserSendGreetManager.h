//
//     Generated by private class-dump
//

@class NSString, AWEUserModel;

@interface AWEUserSendGreetManager : NSObject <BDXContainerLifecycleProtocol> {
    BOOL _isFirstGreetShow;
    BOOL _isInProcessing;
    AWEUserModel *_user;
    NSString *_enterFrom;
}

@property (retain, nonatomic) AWEUserModel *user;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL isFirstGreetShow;
@property (nonatomic) BOOL isInProcessing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)sendGreetBtnClickedWithUser:(id)arg0 enterFrom:(id)arg1;
+ (id)defaultManager;

- (void)containerTapOnPopupMask:(id)arg0;
- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)sendGreetBtnClicked;
- (void)trackGreetBtnWithEventName:(id)arg0;
- (id)initWithUser:(id)arg0 enterFrom:(id)arg1;
- (void)setIsFirstGreetShow:(BOOL)arg0;
- (void)requestGreetFrequency;
- (BOOL)isInProcessing;
- (void)setIsInProcessing:(BOOL)arg0;
- (void)handleResponseWithModel:(id)arg0;
- (id)updateSchemaWithSchema:(id)arg0;
- (BOOL)isFirstGreetShow;
- (void)trackGreetingHalfPopupClick;
- (void)setUser:(id)arg0;
- (id)user;
- (void).cxx_destruct;
- (id)requestURL;

@end
