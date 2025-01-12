//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface AWENearbyVCStackRollBackManager : NSObject {
    NSMutableDictionary *_rollBackStatusInfo;
}

@property (retain, nonatomic) NSMutableDictionary *rollBackStatusInfo;

+ (void)presentVCStack:(id)arg0 byPresentingVC:(id)arg1;
+ (id)allocWithZone:(struct _NSZone { } *)arg0;
+ (id)sharedInstance;

- (void)setLiveRoomMute:(BOOL)arg0;
- (void)clearViewControllerStackWithPageType:(long long)arg0;
- (BOOL)stashViewControllerStackWithPageType:(long long)arg0;
- (BOOL)popViewControllerStackWithPageType:(long long)arg0;
- (void)p_clearViewControllerStackWithPageType:(long long)arg0;
- (id)rollBackStatusModelWithPageTypeID:(long long)arg0;
- (id)removeLastUnStashVCWithVCStack:(id)arg0;
- (void)dealtStackAndPresentedWithPageType:(long long)arg0 trackParams:(id)arg1;
- (id)rollBackStatusInfo;
- (void)setRollBackStatusInfo:(id)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)arg0;

@end
