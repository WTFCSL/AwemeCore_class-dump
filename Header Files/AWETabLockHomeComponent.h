//
//     Generated by private class-dump
//

@class UIImage, NSString;

@interface AWETabLockHomeComponent : AWEUserHomeBaseComponent <AWETabLockProtocol> {
    BOOL _isFirstTimeViewDidLoad;
    UIImage *_lockIconImage;
    long long _collectsTotalStatus;
}

@property (nonatomic) BOOL isFirstTimeViewDidLoad;
@property (retain, nonatomic) UIImage *lockIconImage;
@property (nonatomic) long long collectsTotalStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isFirstTimeViewDidLoad;
- (void)setIsFirstTimeViewDidLoad:(BOOL)arg0;
- (long long)collectsTotalStatus;
- (void)setCollectsTotalStatus:(long long)arg0;
- (void)onDidSelectTabListIndex:(long long)arg0 actionType:(unsigned long long)arg1;
- (void)addLocksToTab;
- (void)updateLikeLock;
- (void)addLocksToTabWithNoti:(id)arg0;
- (BOOL)shouldShowFavoriteTabLock;
- (BOOL)shouldIgnoreInDynamicLock:(long long)arg0;
- (BOOL)canShowLockIconWithIndex:(long long)arg0;
- (void)addLocksToTabWithIndex:(long long)arg0;
- (BOOL)shouldShowMentionTabLock;
- (BOOL)shouldShowEntertainmentTabLock;
- (id)lockIconImage;
- (void)setLockIconImage:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)addObserver;
- (void)viewWillAppear;
- (void)onInit;

@end
