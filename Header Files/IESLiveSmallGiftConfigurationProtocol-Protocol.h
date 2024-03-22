//
//     Generated by private class-dump
//

@class NSArray;

@protocol IESLiveSmallGiftConfigurationProtocol <NSObject>

@property (nonatomic) unsigned long long smallGiftViewCount;
@property (nonatomic) unsigned long long smallGiftMode;
@property (copy, nonatomic) NSArray *giftViewFrames;
@property (nonatomic) BOOL isOnMessageListOptimizationScene;
@property (nonatomic) BOOL isOnLandspaceContentLiveOptimizationScene;
@property (nonatomic) BOOL smallGiftViewSingleChannelEnabled;
@property (nonatomic) double scale;
@property (nonatomic) BOOL isVSRoom;

- (BOOL)isVSRoom;
- (void)setInteractiveScene:(unsigned long long)arg0;
- (void)setIsVSRoom:(BOOL)arg0;
- (void)resetFrame;
- (void)setFrameOriginY:(double)arg0;
- (void)fragmentOrientationChanged:(long long)arg0 inGame:(BOOL)arg1;
- (BOOL)isOnLandspaceContentLiveOptimizationScene;
- (BOOL)smallGiftViewSingleChannelEnabled;
- (void)setSmallGiftViewCount:(unsigned long long)arg0;
- (void)setSmallGiftMode:(unsigned long long)arg0;
- (unsigned long long)smallGiftMode;
- (BOOL)isOnMessageListOptimizationScene;
- (void)setGiftViewFrames:(id)arg0;
- (void)checkForLandscape;
- (BOOL)needHideForLandscape;
- (void)adjustMessageListMaskHeightWithCount:(long long)arg0;
- (unsigned long long)smallGiftViewCount;
- (id)giftViewFrames;
- (void)setIsOnMessageListOptimizationScene:(BOOL)arg0;
- (void)setIsOnLandspaceContentLiveOptimizationScene:(BOOL)arg0;
- (void)setSmallGiftViewSingleChannelEnabled:(BOOL)arg0;
- (double)scale;
- (void)setScale:(double)arg0;

@end
