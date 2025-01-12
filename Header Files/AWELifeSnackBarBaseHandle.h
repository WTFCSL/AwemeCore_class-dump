//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSTimer, AWENearbyPageContext, NSString;

@interface AWELifeSnackBarBaseHandle : NSObject <AWELifeSnackBarHandleProtocol> {
    BOOL _enable;
    NSMutableDictionary *_actionTimesRecord;
    NSMutableDictionary *_inTabActionTimesRecord;
    NSMutableDictionary *_inTabActionSettings;
    AWENearbyPageContext *_pageContext;
    long long _actionStatus;
    NSTimer *_enterTabTimer;
}

@property (retain, nonatomic) AWENearbyPageContext *pageContext;
@property (nonatomic) long long actionStatus;
@property (retain, nonatomic) NSTimer *enterTabTimer;
@property (nonatomic) BOOL enable;
@property (retain, nonatomic) NSMutableDictionary *actionTimesRecord;
@property (retain, nonatomic) NSMutableDictionary *inTabActionTimesRecord;
@property (retain, nonatomic) NSMutableDictionary *inTabActionSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)actionStatus;
- (void)setActionStatus:(long long)arg0;
- (void)recordAction:(long long)arg0;
- (id)initWithPageType:(long long)arg0;
- (void)handleVideoPlayFinish:(id)arg0;
- (void)handleLifeAnchorClick:(id)arg0;
- (id)makeLifeDealText;
- (id)favoritePOIText;
- (id)favoriteGoodsText;
- (id)videoDefaultText;
- (id)snackSettings;
- (long long)videoDigLeastTimes;
- (long long)videoFavoriteLeastTimes;
- (long long)clickPOILeastTimes;
- (long long)favoritePOITimes;
- (long long)favoriteGoodsTimes;
- (long long)makeLifeDealTimes;
- (long long)videoPlayFinishTimes;
- (id)inTabActionSettings;
- (long long)sceneStringToActionType:(id)arg0;
- (void)recordAction:(long long)arg0 aweme:(id)arg1;
- (id)inTabActionTimesRecord;
- (id)trackActionString:(long long)arg0;
- (id)checkActionCanShowBarWithAction:(long long)arg0 aweme:(id)arg1;
- (void)showLifeSnackBarToast:(id)arg0;
- (void)transformActionStatus:(long long)arg0 aweme:(id)arg1;
- (void)triggerTrackWithActionType:(long long)arg0;
- (id)tabPinTopShowImp;
- (BOOL)inCurrentTab;
- (id)enterTabTimer;
- (void)showNearbyPinTopForDuration;
- (void)setEnterTabTimer:(id)arg0;
- (void)tryShowSnackBarWithAction:(long long)arg0 aweme:(id)arg1 withResult:(id /* block */)arg2;
- (BOOL)inCurrentTabAndTopVc;
- (id)getSnackBarTitleTextWithAction:(long long)arg0 categoryText:(id)arg1;
- (id)snackIDWithAction:(long long)arg0;
- (void)updateEnable:(BOOL)arg0;
- (void)handleLifePinTop;
- (void)clearLifePinTopDataWhenLeaveTab;
- (void)handleClickDiamondWithParams:(id)arg0;
- (void)handleLynxMakeDealInLife;
- (id)actionTimesRecord;
- (void)setActionTimesRecord:(id)arg0;
- (void)setInTabActionTimesRecord:(id)arg0;
- (void)setInTabActionSettings:(id)arg0;
- (void)clearnAction:(long long)arg0;
- (BOOL)enable;
- (void).cxx_destruct;
- (void)setEnable:(BOOL)arg0;
- (id)pageContext;
- (void)setPageContext:(id)arg0;

@end
