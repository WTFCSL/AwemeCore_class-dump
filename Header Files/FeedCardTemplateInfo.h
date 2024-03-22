//
//     Generated by private class-dump
//

@class NSString, FeedCardEventTrackInfo, FeedCardBackgroundInfo, FeedCardGaiYaInfo, FeedCardDislikeButtonInfo, FeedCardActionButtonInfo, FeedCardLynxConfig, FeedCardSubscribeConfig, FeedCardNativeConfig;

@interface FeedCardTemplateInfo : GPBMessage

@property (retain, nonatomic) FeedCardBackgroundInfo *background;
@property (nonatomic) BOOL hasBackground;
@property (retain, nonatomic) FeedCardActionButtonInfo *actionButton;
@property (nonatomic) BOOL hasActionButton;
@property (retain, nonatomic) FeedCardDislikeButtonInfo *dislikeButton;
@property (nonatomic) BOOL hasDislikeButton;
@property (nonatomic) int marginTop;
@property (nonatomic) BOOL hasMarginTop;
@property (copy, nonatomic) NSString *slideColor;
@property (nonatomic) BOOL hasSlideColor;
@property (copy, nonatomic) NSString *serverData;
@property (nonatomic) BOOL hasServerData;
@property (copy, nonatomic) NSString *dynamicURL;
@property (nonatomic) BOOL hasDynamicURL;
@property (copy, nonatomic) NSString *transInfo;
@property (nonatomic) BOOL hasTransInfo;
@property (retain, nonatomic) FeedCardEventTrackInfo *eventTrack;
@property (nonatomic) BOOL hasEventTrack;
@property (nonatomic) BOOL isLynxTemplate;
@property (nonatomic) BOOL hasIsLynxTemplate;
@property (copy, nonatomic) NSString *leftSlideSchema;
@property (nonatomic) BOOL hasLeftSlideSchema;
@property (nonatomic) int leftSlideType;
@property (nonatomic) BOOL hasLeftSlideType;
@property (retain, nonatomic) FeedCardNativeConfig *nativeConfig;
@property (nonatomic) BOOL hasNativeConfig;
@property (retain, nonatomic) FeedCardLynxConfig *lynxConfig;
@property (nonatomic) BOOL hasLynxConfig;
@property (nonatomic) BOOL shouldPrecreateLynx;
@property (nonatomic) BOOL hasShouldPrecreateLynx;
@property (nonatomic) BOOL usePitaya;
@property (nonatomic) BOOL hasUsePitaya;
@property (retain, nonatomic) FeedCardGaiYaInfo *gaiyaInfo;
@property (nonatomic) BOOL hasGaiyaInfo;
@property (retain, nonatomic) FeedCardSubscribeConfig *subscribeCardConfig;
@property (nonatomic) BOOL hasSubscribeCardConfig;
@property (nonatomic) BOOL isGray;
@property (nonatomic) BOOL hasIsGray;

+ (id)descriptor;

@end