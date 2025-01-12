//
//     Generated by private class-dump
//

@class NSString, AWEInteractModularizationHotsoonFlameModel;

@interface AWEIMFlameSendViewModel : NSObject {
    AWEInteractModularizationHotsoonFlameModel *_flameModel;
    NSString *_userID;
    NSString *_secUserID;
}

@property (retain, nonatomic) AWEInteractModularizationHotsoonFlameModel *flameModel;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;

+ (Class)aAWENoticeModuleServiceDOUYINHTSAdaperClass;

- (id)secUserID;
- (void)setSecUserID:(id)arg0;
- (BOOL)hasReply;
- (void)trackButtonShowWithHasReply:(BOOL)arg0;
- (id)initWithFlameModel:(id)arg0 userID:(id)arg1 secUserID:(id)arg2;
- (id)sendText;
- (void)updateHasReply:(BOOL)arg0;
- (void)clickFlameReplyWithCompletion:(id /* block */)arg0;
- (void)clickFlameSendWithCompletion:(id /* block */)arg0;
- (void)trackWithButtonEvent:(id)arg0 actionType:(id)arg1;
- (id)flameModel;
- (id)aAWENoticeModuleServiceDOUYINHTSAdaper;
- (void)setFlameModel:(id)arg0;
- (id)userID;
- (void).cxx_destruct;
- (void)setUserID:(id)arg0;
- (id)replyText;

@end
