//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSTimer;
@protocol AWEHttpTask;

@interface AFDNewFriendWorkCountManager : NSObject <AWEUserMessage> {
    BOOL _enableNewNotice;
    BOOL _enableNextNotice;
    BOOL _needShowNextFriendWorkNoticeAfterLoadMore;
    BOOL _needUpdateAfterSocialCountResponse;
    BOOL _isRequestOnAir;
    NSMutableDictionary *_eventParamDic;
    long long _source;
    NSString *_insertUserID;
    long long _familiarCount;
    id<AWEHttpTask> _httpTask;
    NSTimer *_nextFriendWorkNoticeTimer;
}

@property (retain, nonatomic) NSMutableDictionary *eventParamDic;
@property (nonatomic) long long source;
@property (nonatomic) BOOL needUpdateAfterSocialCountResponse;
@property (nonatomic) BOOL isRequestOnAir;
@property (retain, nonatomic) NSString *insertUserID;
@property (nonatomic) long long familiarCount;
@property (retain, nonatomic) id<AWEHttpTask> httpTask;
@property (nonatomic) BOOL enableNewNotice;
@property (nonatomic) BOOL enableNextNotice;
@property (retain, nonatomic) NSTimer *nextFriendWorkNoticeTimer;
@property (nonatomic) BOOL needShowNextFriendWorkNoticeAfterLoadMore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLogout;
- (BOOL)isRequestOnAir;
- (void)setIsRequestOnAir:(BOOL)arg0;
- (void)reupdateFriendWorkNoticeWithIsComboRequestResult:(BOOL)arg0;
- (void)setHttpTask:(id)arg0;
- (id)httpTask;
- (long long)familiarCount;
- (void)setFamiliarCount:(long long)arg0;
- (void)setInsertUserID:(id)arg0;
- (id)insertUserID;
- (void)fetchAvatarAndToastWithCompletion:(id /* block */)arg0;
- (BOOL)enableNewNotice;
- (BOOL)enableNextNotice;
- (BOOL)shouldShowNotice;
- (void)updateNewFriendWorkCountIfNeeded:(long long)arg0;
- (void)recordNewFriendWorkCountMonitorParamsWithDic:(id)arg0;
- (void)trackNewFriendWorkNoticeEvent:(id)arg0;
- (void)updateShowedNoticeStorage;
- (void)trackNextFriendWorkNoticeEvent:(id)arg0;
- (id)noticeStorageKey;
- (void)setNeedUpdateAfterSocialCountResponse:(BOOL)arg0;
- (BOOL)needUpdateAfterSocialCountResponse;
- (void)setEventParamDic:(id)arg0;
- (id)eventParamDic;
- (void)cancelNextFriendWorkNotice;
- (void)p_preloadAuthorAvatarForNextFriendWorkNotice:(long long)arg0 dataController:(id)arg1;
- (void)dismissNextFriendWorkNoticeIfNeeded;
- (id)nextFriendWorkNoticeTimer;
- (void)showNextFriendWorkNotice:(long long)arg0 dataController:(id)arg1;
- (void)setNextFriendWorkNoticeTimer:(id)arg0;
- (BOOL)needShowNextFriendWorkNoticeAfterLoadMore;
- (void)setNeedShowNextFriendWorkNoticeAfterLoadMore:(BOOL)arg0;
- (void)triggerShowNextFriendWorkNotice:(long long)arg0 dataController:(id)arg1;
- (void)setEnableNewNotice:(BOOL)arg0;
- (void)setEnableNextNotice:(BOOL)arg0;
- (id)init;
- (long long)source;
- (void).cxx_destruct;
- (void)setSource:(long long)arg0;
- (void)dealloc;
- (void)fetchWithCompletion:(id /* block */)arg0;

@end
