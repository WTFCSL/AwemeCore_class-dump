//
//     Generated by private class-dump
//

@class NSDictionary, IESLiveBackgroundStrategy;

@interface IESLiveBackgroundStrategyFactory : NSObject {
    BOOL _showBlackBgIfNeed;
    BOOL _showMatchRoomLandscapeBg;
    long long _orientation;
    IESLiveBackgroundStrategy *_lastStrategy;
    NSDictionary *_blurImageParams;
}

@property (retain, nonatomic) IESLiveBackgroundStrategy *lastStrategy;
@property (copy, nonatomic) NSDictionary *blurImageParams;
@property (nonatomic) long long orientation;
@property (nonatomic) BOOL showBlackBgIfNeed;
@property (nonatomic) BOOL showMatchRoomLandscapeBg;

+ (id)prepareLocalImgForRoom:(id)arg0 hasBackgroundUrl:(BOOL)arg1;
+ (id)preparePlaceHolderImgForRoom:(id)arg0 hasBackgroundUrl:(BOOL)arg1;

- (id)userService;
- (id)blurImageParams;
- (void)setBlurImageParams:(id)arg0;
- (void)processBlurImageParams:(id)arg0;
- (void)setShowMatchRoomLandscapeBg:(BOOL)arg0;
- (void)setShowBlackBgIfNeed:(BOOL)arg0;
- (id)strategyForRoom:(id)arg0;
- (BOOL)isAnchorForRoom:(id)arg0;
- (BOOL)showBlackBgIfNeed;
- (BOOL)showMatchRoomLandscapeBg;
- (id)lastStrategy;
- (void)setLastStrategy:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (long long)orientation;
- (void)setOrientation:(long long)arg0;

@end