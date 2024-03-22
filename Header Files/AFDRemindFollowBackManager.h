//
//     Generated by private class-dump
//

@class NSString, AWEUserModel, NSNumber;

@interface AFDRemindFollowBackManager : NSObject <AFDRemindFollowBackManagerProtocol> {
    BOOL _isFirstLevelPage;
    AWEUserModel *_user;
    NSString *_enterFrom;
    NSNumber *_from;
    NSNumber *_fromPre;
}

@property (retain, nonatomic) AWEUserModel *user;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL isFirstLevelPage;
@property (retain, nonatomic) NSNumber *from;
@property (retain, nonatomic) NSNumber *fromPre;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)updateDefaultMsg:(id)arg0;
+ (id)defaultMsgText;
+ (id)defaultMsgTextKey;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (BOOL)isFirstLevelPage;
- (void)setFromPre:(id)arg0;
- (id)fromPre;
- (void)setIsFirstLevelPage:(BOOL)arg0;
- (void)sendRemindFollowBackNoticeWithPostscript:(id)arg0 needToast:(BOOL)arg1 needPostToast:(BOOL)arg2;
- (void)alertViewWithAction:(id)arg0;
- (id)leaveMsgAlertView;
- (void)trackFollowBackRemindPost:(id)arg0;
- (void)showLeaveMsgAlertFromFamiliarList;
- (void)setUser:(id)arg0;
- (id)user;
- (void).cxx_destruct;
- (id)initWithUser:(id)arg0;
- (id)from;
- (void)setFrom:(id)arg0;

@end
