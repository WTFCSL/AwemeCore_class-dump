//
//     Generated by private class-dump
//

@class NSNumber;

@interface AWEProfileBubbleHomepageBottomToast : AWEUINotificationBarView <AWEProfileBubbleProtocol> {
    BOOL _hasNotClosed;
    long long _priority;
    NSNumber *_currentToastType;
}

@property (retain, nonatomic) NSNumber *currentToastType;
@property (nonatomic) BOOL hasNotClosed;
@property (nonatomic) long long priority;

- (void)setCurrentToastType:(id)arg0;
- (id)currentToastType;
- (BOOL)isUniqueURL:(id)arg0;
- (void)setHasNotClosed:(BOOL)arg0;
- (id)pureURLWithURL:(id)arg0;
- (void)actionOnWechatBindWithURL:(id)arg0;
- (BOOL)hasNotClosed;
- (void).cxx_destruct;
- (void)config;
- (void)setPriority:(long long)arg0;
- (long long)priority;
- (void)didShow;

@end
