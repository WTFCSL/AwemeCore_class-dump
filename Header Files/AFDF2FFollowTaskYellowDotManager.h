//
//     Generated by private class-dump
//

@class AFDPromotionYellowDotConfig, NSString;
@protocol AFDF2FFollowTaskRadarManagerProtocol, AWEFriendsYellowDotManagerProtocol;

@interface AFDF2FFollowTaskYellowDotManager : NSObject <AFDF2FFollowTaskRadarMessage, AFDF2FFollowTaskYellowDotManagerProtocol> {
    AFDPromotionYellowDotConfig *_config;
    id<AWEFriendsYellowDotManagerProtocol> _friendsYellowDotManager;
    id<AFDF2FFollowTaskRadarManagerProtocol> _f2FFollowTaskRadarManager;
}

@property (retain, nonatomic) id<AWEFriendsYellowDotManagerProtocol> friendsYellowDotManager;
@property (retain, nonatomic) id<AFDF2FFollowTaskRadarManagerProtocol> f2FFollowTaskRadarManager;
@property (retain, nonatomic) AFDPromotionYellowDotConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)friendsYellowDotManager;
- (id)f2FFollowTaskRadarManager;
- (void)didChangeRadarYellowDotFromStatus:(long long)arg0 toStatus:(long long)arg1;
- (id)redEnvelopeText;
- (id)redEnvelopeLottieFilePath;
- (id)p_defaultRedEnvelopeLottieFilePath;
- (BOOL)p_canShowYellowDotForRadar;
- (BOOL)p_showYellowDotForRadar;
- (void)p_hideYellowDotForRadar;
- (BOOL)p_settingsForCanShowYellowDot;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })redEnvelopeLottieFrameWithButton:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })redEnvelopeTextFrameWithButton:(id)arg0;
- (BOOL)canShowYellowDotForRadar;
- (void)prepareYellowDotForRadar;
- (void)cleanupYellowDotForRadar;
- (void)setFriendsYellowDotManager:(id)arg0;
- (void)setF2FFollowTaskRadarManager:(id)arg0;
- (id)init;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (void)dealloc;

@end
