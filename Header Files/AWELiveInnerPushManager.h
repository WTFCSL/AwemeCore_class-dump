//
//     Generated by private class-dump
//

@class NSString, NSDate;

@interface AWELiveInnerPushManager : NSObject <AWELiveInnerPushProtocal> {
    unsigned long long _showTimesInThisColdLaunch;
    NSDate *_livePushPrevShowTime;
}

@property (nonatomic) unsigned long long showTimesInThisColdLaunch;
@property (retain, nonatomic) NSDate *livePushPrevShowTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInnerPushManager;

- (id)currentTopPage;
- (void)setLivePushPrevShowTime:(id)arg0;
- (unsigned long long)showTimesInThisColdLaunch;
- (void)setShowTimesInThisColdLaunch:(unsigned long long)arg0;
- (void)trackLivePushAbandonWithRoomID:(id)arg0 anchorID:(id)arg1 abandonReson:(id)arg2;
- (id)livePushPrevShowTime;
- (id)getURLQueryValueWithURL:(id)arg0 queryKey:(id)arg1;
- (BOOL)canShowFollowAnchorPushNotice;
- (id)enterFrom:(id)arg0;
- (id)enterMethod:(id)arg0;
- (id)pushSource:(id)arg0;
- (id)requestPage:(id)arg0;
- (id)pushType:(id)arg0;
- (void).cxx_destruct;

@end