//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSNumber, UIViewController;

@interface IESECMallChannelEnterModel : MTLModel <MTLJSONSerializing> {
    BOOL _isFirstEnter;
    BOOL _isBubbleShowing;
    BOOL _isRedDotShowing;
    long long _preIndex;
    NSString *_preTabID;
    NSString *_enterFrom;
    NSString *_enterMethod;
    NSDictionary *_landingParams;
    NSString *_themeStyle;
    long long _tabOrder;
    NSString *_previousPage;
    NSString *_btm;
    UIViewController *_hostVc;
    NSNumber *_tabClickTime;
    NSString *_tMallFrameTime;
    long long _totalTabCount;
    NSDictionary *_skinInfo;
    NSDictionary *_fullSkinInfo;
    NSDictionary *_tabExtraInfo;
    id _lastBubbleMsg;
    id _lastRedDotMsg;
}

@property (nonatomic) long long preIndex;
@property (copy, nonatomic) NSString *preTabID;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSDictionary *landingParams;
@property (copy, nonatomic) NSString *themeStyle;
@property (nonatomic) long long tabOrder;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *btm;
@property (weak, nonatomic) UIViewController *hostVc;
@property (nonatomic) BOOL isFirstEnter;
@property (copy, nonatomic) NSNumber *tabClickTime;
@property (copy, nonatomic) NSString *tMallFrameTime;
@property (nonatomic) long long totalTabCount;
@property (copy, nonatomic) NSDictionary *skinInfo;
@property (copy, nonatomic) NSDictionary *fullSkinInfo;
@property (copy, nonatomic) NSDictionary *tabExtraInfo;
@property (nonatomic) BOOL isBubbleShowing;
@property (retain, nonatomic) id lastBubbleMsg;
@property (nonatomic) BOOL isRedDotShowing;
@property (retain, nonatomic) id lastRedDotMsg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (id)enterFrom;
- (void)setThemeStyle:(id)arg0;
- (id)btm;
- (void)setBtm:(id)arg0;
- (void)setLandingParams:(id)arg0;
- (id)landingParams;
- (id)tabClickTime;
- (void)setTabClickTime:(id)arg0;
- (BOOL)isFirstEnter;
- (void)setIsFirstEnter:(BOOL)arg0;
- (id)skinInfo;
- (long long)tabOrder;
- (void)setTabOrder:(long long)arg0;
- (id)fullSkinInfo;
- (void)setPreIndex:(long long)arg0;
- (long long)preIndex;
- (void)setIsBubbleShowing:(BOOL)arg0;
- (BOOL)isBubbleShowing;
- (id)tabExtraInfo;
- (id)preTabID;
- (void)setPreTabID:(id)arg0;
- (id)hostVc;
- (void)setHostVc:(id)arg0;
- (id)tMallFrameTime;
- (void)setTMallFrameTime:(id)arg0;
- (long long)totalTabCount;
- (void)setTotalTabCount:(long long)arg0;
- (void)setSkinInfo:(id)arg0;
- (void)setFullSkinInfo:(id)arg0;
- (void)setTabExtraInfo:(id)arg0;
- (id)lastBubbleMsg;
- (void)setLastBubbleMsg:(id)arg0;
- (BOOL)isRedDotShowing;
- (void)setIsRedDotShowing:(BOOL)arg0;
- (id)lastRedDotMsg;
- (void)setLastRedDotMsg:(id)arg0;
- (void).cxx_destruct;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;
- (id)themeStyle;

@end
