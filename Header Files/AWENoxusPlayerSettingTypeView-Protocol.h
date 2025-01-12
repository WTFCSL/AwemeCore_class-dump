//
//     Generated by private class-dump
//

@class NSString, AWELVideoXiguaGuideModel, NSArray, AWENoxusPlayerSettingTypeModel, NSMutableArray;
@protocol AWENoxusPlayerSettingTypeViewDelegate;

@protocol AWENoxusPlayerSettingTypeView <NSObject>

+ (id)titleFromSpeedType:(unsigned long long)arg0;
+ (id)shortTitleFromPixelType:(unsigned long long)arg0;
+ (id)titleNewFromLandscapePixelType:(unsigned long long)arg0;
+ (double)valueFromSpeedType:(unsigned long long)arg0;
+ (id)landScapeTitleFromSpeedType:(unsigned long long)arg0;
+ (id)landScapeTitleFromNewSpeedType:(long long)arg0;
+ (id)titleFromPixelType:(unsigned long long)arg0;
+ (id)titleFromLandscapePixelType:(unsigned long long)arg0;
+ (double)valueFromPixelType:(unsigned long long)arg0;

@property (weak, nonatomic) id<AWENoxusPlayerSettingTypeViewDelegate> delegate;
@property (readonly, nonatomic) NSMutableArray *resolutionArray;
@property (readonly, nonatomic) AWENoxusPlayerSettingTypeModel *selectModel;
@property (nonatomic) BOOL resetSpeed;
@property (nonatomic) BOOL isLandScape;
@property (retain, nonatomic) AWELVideoXiguaGuideModel *videoModel;
@property (copy, nonatomic) NSString *eid;
@property (nonatomic) BOOL isRemotePlay;
@property (nonatomic) BOOL showingGuideXigua;
@property (nonatomic) BOOL isLongPressSpeedOptimize;
@property (retain, nonatomic) NSArray *longPressSpeedSettingArray;

- (BOOL)isRemotePlay;
- (void)setIsRemotePlay:(BOOL)arg0;
- (id)videoModel;
- (void)setVideoModel:(id)arg0;
- (void)setIsLandScape:(BOOL)arg0;
- (BOOL)isLandScape;
- (void)setUpPixelType:(id)arg0;
- (void)showViewWithDataType:(unsigned long long)arg0;
- (void)focusSelectModel:(id)arg0;
- (id)selectModel;
- (void)dismissAnimate:(BOOL)arg0;
- (id)resolutionArray;
- (BOOL)isLongPressSpeedOptimize;
- (id)longPressSpeedSettingArray;
- (void)setShowingGuideXigua:(BOOL)arg0;
- (void)setupLandscapeResolutionList:(id)arg0 currentResolutionType:(unsigned long long)arg1;
- (void)showLandscapeSpeedSettingViewWithNewSpeedType:(long long)arg0;
- (BOOL)resetSpeed;
- (void)setResetSpeed:(BOOL)arg0;
- (BOOL)showingGuideXigua;
- (void)setIsLongPressSpeedOptimize:(BOOL)arg0;
- (void)setLongPressSpeedSettingArray:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)eid;
- (void)setEid:(id)arg0;

@end
