//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface AWEFeedQuickFlashPanelStyleConfig : MTLModel <MTLJSONSerializing> {
    BOOL _bottomTransparent;
    BOOL _showFlashIcon;
    BOOL _useModernTitle;
    BOOL _showCloseBtn;
    BOOL _showRankListBtn;
    BOOL _showMoreTopicIcon;
    BOOL _showItemFlashAvatar;
    BOOL _showItemFlashTag;
    double _panelHeightRatio;
    NSDictionary *_rankListStyle;
    long long _numberOfTopicRows;
}

@property (nonatomic) BOOL bottomTransparent;
@property (nonatomic) double panelHeightRatio;
@property (nonatomic) BOOL showFlashIcon;
@property (nonatomic) BOOL useModernTitle;
@property (nonatomic) BOOL showCloseBtn;
@property (nonatomic) BOOL showRankListBtn;
@property (copy, nonatomic) NSDictionary *rankListStyle;
@property (nonatomic) long long numberOfTopicRows;
@property (nonatomic) BOOL showMoreTopicIcon;
@property (nonatomic) BOOL showItemFlashAvatar;
@property (nonatomic) BOOL showItemFlashTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)colorWithARGBString:(id)arg0;
+ (id)defaultConfig;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)showCloseBtn;
- (void)setShowCloseBtn:(BOOL)arg0;
- (long long)numberOfTopicRows;
- (BOOL)showItemFlashTag;
- (void)setShowItemFlashTag:(BOOL)arg0;
- (BOOL)showItemFlashAvatar;
- (BOOL)showFlashIcon;
- (double)panelHeightRatio;
- (void)setPanelHeightRatio:(double)arg0;
- (void)setShowRankListBtn:(BOOL)arg0;
- (void)setShowMoreTopicIcon:(BOOL)arg0;
- (void)setShowItemFlashAvatar:(BOOL)arg0;
- (id)rankListStyle;
- (BOOL)useModernRankListStyle;
- (BOOL)bottomTransparent;
- (void)setBottomTransparent:(BOOL)arg0;
- (void)setShowFlashIcon:(BOOL)arg0;
- (BOOL)useModernTitle;
- (void)setUseModernTitle:(BOOL)arg0;
- (BOOL)showRankListBtn;
- (void)setRankListStyle:(id)arg0;
- (void)setNumberOfTopicRows:(long long)arg0;
- (BOOL)showMoreTopicIcon;
- (void).cxx_destruct;

@end
