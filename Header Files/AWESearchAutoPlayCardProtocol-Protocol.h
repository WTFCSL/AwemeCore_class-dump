//
//     Generated by private class-dump
//

@class AWESearchAutoPlayHandler;

@protocol AWESearchAutoPlayCardProtocol <NSObject>

@property (nonatomic) BOOL isActive;
@property (weak, nonatomic) AWESearchAutoPlayHandler *autoPlayHandler;

- (void)setAutoPlayHandler:(id)arg0;
- (id)autoPlayHandler;
- (void)didBecomeActive;
- (void)setIsActive:(BOOL)arg0;
- (void)didResignActive;
- (BOOL)isActive;
- (id)activeView;

@optional

- (BOOL)shouldNotActive;
- (void)resetLivePlayer;
- (unsigned long long)suitableRuleType;
- (void)addTouchPlayGuide;
- (void)removeTouchPlayGuide;
- (BOOL)hasVideo;
- (id)livePlayer;

@end
