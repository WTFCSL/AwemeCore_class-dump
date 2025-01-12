//
//     Generated by private class-dump
//

@class NSString, NSDictionary, AWEAwemeModel;

@interface AFDRichAwemeFullPageAnchorViewModel : AFDRichAwemeFullPageBaseViewModel <AFDRichAwemeFullPageAnchorViewModelProtocol> {
    BOOL _shouldHidePOIAnchor;
    BOOL _shouldHideOtherExtraAnchor;
    NSString *_referString;
    NSDictionary *_logExtraDict;
    NSString *_priorityType;
    AWEAwemeModel *_enterModel;
    AWEAwemeModel *_model;
}

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSString *priorityType;
@property (retain, nonatomic) AWEAwemeModel *enterModel;
@property (nonatomic) BOOL shouldHidePOIAnchor;
@property (nonatomic) BOOL shouldHideOtherExtraAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (void)setReferString:(id)arg0;
- (void)setLogExtraDict:(id)arg0;
- (id)logExtraDict;
- (id)priorityType;
- (void)setPriorityType:(id)arg0;
- (void)setShouldHideOtherExtraAnchor:(BOOL)arg0;
- (id)configMusicAnchorModel;
- (void)trackAnchorShowWithExtraInfo:(id)arg0;
- (void)trackGoodsAnchorViewShowIfNeedWithHost:(id)arg0;
- (id)configExtraAnchorModel;
- (void)setEnterModel:(id)arg0;
- (void)setShouldHidePOIAnchor:(BOOL)arg0;
- (id)initWithContext:(id)arg0 awemeModel:(id)arg1;
- (id)enterModel;
- (id)iconWithName:(id)arg0 whiteIconName:(id)arg1 needWhiteIcon:(BOOL)arg2;
- (id)musicDescLabelText;
- (void)p_enterMusicDetailWithClickExtraDict:(id)arg0;
- (void)p_onIronManClick;
- (void)p_showGoodsPanel;
- (void)p_enterLocalLifeDetail;
- (void)p_onOpenPlatformAnchorClick;
- (void)p_enterMvDetail;
- (void)p_enterStickerDetail;
- (void)p_onMediumClick;
- (void)p_enterGameDetail;
- (void)p_enterGeneralAnchorDetail;
- (void)p_onGreenScreenAnchorClick;
- (void)p_onCarAnchorClick;
- (void)p_onNormalAppClick;
- (void)p_gamecpAnchorClick;
- (id)extraAnchorModelWithAweme:(id)arg0 priorityKey:(id)arg1 needWhiteIcon:(BOOL)arg2 tapAnchorBlock:(id /* block */)arg3;
- (BOOL)shouldHideOtherExtraAnchor;
- (BOOL)shouldHidePOIAnchor;
- (void)trackAnchorClick:(id)arg0 extraInfo:(id)arg1;
- (id)typeStringForGeneralAnchor;
- (id)getGameCPAnchorReportParams;
- (id)welfareRouterPathStringWith:(id)arg0;
- (id)p_appendEnterFromToOpenURL:(id)arg0;
- (id)createMusicAnchorModel;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;

@end
