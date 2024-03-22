//
//     Generated by private class-dump
//

@class NSString, NSDictionary, AWEHotSpotListModel, AWEAwemeModel;

@interface AWEFeedRelatedReadingJumpManager : NSObject <DUXSheetDelegate, AWEFeedBottomTipProtocol> {
    NSString *_referString;
    AWEAwemeModel *_awemeModel;
    AWEHotSpotListModel *_hotSpotListModel;
    NSDictionary *_textAttributes;
    long long _type;
    long long _currentScene;
    NSString *_realDiversionType;
}

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEHotSpotListModel *hotSpotListModel;
@property (retain, nonatomic) NSDictionary *textAttributes;
@property (nonatomic) long long type;
@property (nonatomic) long long currentScene;
@property (copy, nonatomic) NSString *realDiversionType;
@property (copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)showFeedBottomArticleBarSuperiorToHotSearch:(id)arg0 otherParams:(id)arg1;
+ (BOOL)showFeedBottomArticleBarInferiorToHotSearch:(id)arg0 otherParams:(id)arg1;
+ (id)separateGroupIDFromSchema:(id)arg0;
+ (id)addParams:(id)arg0 toString:(id)arg1;
+ (id)relatedArticleParamsWithModel:(id)arg0 enterFrom:(id)arg1;
+ (void)setCheckBoxStatus:(BOOL)arg0 forAction:(id)arg1;
+ (id)separateParamFromBdpLog:(id)arg0 param:(id)arg1;
+ (id)mpGuideSwitchWithModel:(id)arg0;

- (id)awemeModel;
- (id)referString;
- (void)sheetDidClickCloseButton:(id)arg0;
- (void)sheetDidClickMaskArea:(id)arg0;
- (void)setAwemeModel:(id)arg0;
- (void)setReferString:(id)arg0;
- (id)hotSpotListModel;
- (void)configureWithModel:(id)arg0 referString:(id)arg1;
- (void)jumpAction;
- (void)configureWithModel:(id)arg0 type:(long long)arg1;
- (void)setHotSpotListModel:(id)arg0;
- (void)tryOpenMpWithScheme:(id)arg0;
- (void)clearOpenAppDialogAction:(id)arg0;
- (BOOL)showFeedBottomArticleBarSuperiorToHotSearch;
- (BOOL)showFeedBottomArticleBarInferiorToHotSearch;
- (void)setCurrentScene:(long long)arg0;
- (long long)viewTypeForString:(id)arg0 model:(id)arg1;
- (long long)sceneForType:(long long)arg0;
- (void)jumpUsingSchema;
- (BOOL)canOpenApp;
- (unsigned long long)openAppType;
- (BOOL)isRelatedArticle;
- (id)relatedArticleAppendParamDict;
- (void)tryOpenAppWithURL:(id)arg0 mpSchema:(id)arg1;
- (void)setRealDiversionType:(id)arg0;
- (id)realDiversionType;
- (id)mpTrackerDict;
- (void)showOpenAppNewDialog:(id)arg0 mpSchema:(id)arg1;
- (void)openApp;
- (void)showOpenAppOldDialog:(id)arg0 mpSchema:(id)arg1;
- (void)trackOpenAppDialogShow;
- (id)openAppDialogTitle;
- (void)trackOpenAppDialogClick:(id)arg0 checked:(BOOL)arg1;
- (id)commonTrackParams;
- (id)openAppConfig;
- (void)showSheetWithViewController:(id)arg0 sheetHeight:(double)arg1 openAppURL:(id)arg2 mpSchema:(id)arg3;
- (id)init;
- (void).cxx_destruct;
- (long long)type;
- (long long)currentScene;
- (id)textAttributes;
- (void)setType:(long long)arg0;
- (void)dealloc;
- (void)setTextAttributes:(id)arg0;

@end