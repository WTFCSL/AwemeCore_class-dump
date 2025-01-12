//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface IESLiveSportsSmallGiftConfiguration : NSObject <IESLivePublicScreenLayoutSubscriber, IESLiveSmallGiftConfigurationProtocol> {
    BOOL isOnMessageListOptimizationScene;
    BOOL isOnLandspaceContentLiveOptimizationScene;
    BOOL smallGiftViewSingleChannelEnabled;
    BOOL isVSRoom;
    BOOL _isAnchor;
    NSArray *giftViewFrames;
    unsigned long long smallGiftMode;
    unsigned long long smallGiftViewCount;
    double scale;
    double _originY;
    double _previousOriginY;
    double _viewSpacing;
    double _giftWidth;
}

@property (nonatomic) double originY;
@property (nonatomic) double previousOriginY;
@property (nonatomic) double viewSpacing;
@property (nonatomic) double giftWidth;
@property (nonatomic) BOOL isAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long smallGiftViewCount;
@property (nonatomic) unsigned long long smallGiftMode;
@property (copy, nonatomic) NSArray *giftViewFrames;
@property (nonatomic) BOOL isOnMessageListOptimizationScene;
@property (nonatomic) BOOL isOnLandspaceContentLiveOptimizationScene;
@property (nonatomic) BOOL smallGiftViewSingleChannelEnabled;
@property (nonatomic) double scale;
@property (nonatomic) BOOL isVSRoom;

- (void)setIsAnchor:(BOOL)arg0;
- (void)didSetAttachingDIContext;
- (BOOL)isVSRoom;
- (void)setInteractiveScene:(unsigned long long)arg0;
- (void)setIsVSRoom:(BOOL)arg0;
- (void)resetFrame;
- (void)setFrameOriginY:(double)arg0;
- (void)publicScreenLayoutChanged:(id)arg0 forType:(unsigned long long)arg1;
- (void)fragmentOrientationChanged:(long long)arg0 inGame:(BOOL)arg1;
- (BOOL)isOnLandspaceContentLiveOptimizationScene;
- (BOOL)smallGiftViewSingleChannelEnabled;
- (double)viewSpacing;
- (void)setSmallGiftViewCount:(unsigned long long)arg0;
- (void)setViewSpacing:(double)arg0;
- (void)setGiftWidth:(double)arg0;
- (void)setSmallGiftMode:(unsigned long long)arg0;
- (unsigned long long)smallGiftMode;
- (BOOL)isOnMessageListOptimizationScene;
- (double)realGiftViewHeight;
- (double)giftWidth;
- (void)setGiftViewFrames:(id)arg0;
- (double)previousOriginY;
- (void)setPreviousOriginY:(double)arg0;
- (void)checkForLandscape;
- (BOOL)needHideForLandscape;
- (void)adjustMessageListMaskHeightWithCount:(long long)arg0;
- (unsigned long long)smallGiftViewCount;
- (id)giftViewFrames;
- (void)setIsOnMessageListOptimizationScene:(BOOL)arg0;
- (void)setIsOnLandspaceContentLiveOptimizationScene:(BOOL)arg0;
- (void)setSmallGiftViewSingleChannelEnabled:(BOOL)arg0;
- (void).cxx_destruct;
- (BOOL)isAnchor;
- (double)scale;
- (void)setScale:(double)arg0;
- (void)setOriginY:(double)arg0;
- (double)originY;

@end
