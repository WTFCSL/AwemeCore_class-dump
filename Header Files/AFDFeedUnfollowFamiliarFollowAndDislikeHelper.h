//
//     Generated by private class-dump
//

@class NSString, NSMutableSet, NSMutableDictionary;

@interface AFDFeedUnfollowFamiliarFollowAndDislikeHelper : NSObject <AWEUserMessage, AFDFeedUnfollowFamiliarFollowAndDislikeHelperProtocol> {
    BOOL _greetAlertShowing;
    NSMutableDictionary *_followBtnTriggerResetDict;
    NSMutableDictionary *_currentAwemeIdDict;
    NSMutableDictionary *_familiarUsers;
    NSMutableSet *_unfollowedUsers;
}

@property (retain, nonatomic) NSMutableSet *unfollowedUsers;
@property (retain, nonatomic) NSMutableDictionary *followBtnTriggerResetDict;
@property (retain, nonatomic) NSMutableDictionary *currentAwemeIdDict;
@property (retain, nonatomic) NSMutableDictionary *familiarUsers;
@property (nonatomic) BOOL greetAlertShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)p_precheckShowGreetBtnOnFamiliarItem:(id)arg0;
+ (unsigned long long)greetBtnStyleOnFamiliarItem:(id)arg0;
+ (id)followBtnColorModel;
+ (BOOL)canShowGreetBtnOnFamiliarItem:(id)arg0;
+ (BOOL)canShowRelativeUserAvatarsOnAweme:(id)arg0;
+ (id)shareInstance;

- (void)didFinishLogin;
- (void)didFinishLogout;
- (void)didFinishUnFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didTriggerFollowBtnGuideWithMethod:(unsigned long long)arg0 awemeModel:(id)arg1;
- (void)resetFollowBtnTriggerStatusWithAwemeModel:(id)arg0 referString:(id)arg1;
- (BOOL)greetAlertShowing;
- (void)setFollowBtnTriggerResetDict:(id)arg0;
- (void)setCurrentAwemeIdDict:(id)arg0;
- (void)setFamiliarUsers:(id)arg0;
- (void)setUnfollowedUsers:(id)arg0;
- (id)currentAwemeIdDict;
- (id)followBtnTriggerResetDict;
- (id)unfollowedUsers;
- (id)familiarUsers;
- (BOOL)hasUnfollowedUser:(id)arg0;
- (void)setGreetAlertShowing:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
