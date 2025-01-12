//
//     Generated by private class-dump
//

@class NSArray, NSDictionary, NSString, AWENewPublishCompanyCouponTableCell;

@interface AWEPostPageCompanyCouponElement : AWEPostPageCellElement <AWECommerceAnchorMessageProtocol, AWEPostPageAnchorProtocol> {
    BOOL _isFromLocalLifeMissionInfo;
    BOOL _isRepeatShowVisible;
    BOOL _isAlreadyPublishTradeAnchor;
    BOOL _isSetupCell;
    NSDictionary *_extras;
    AWENewPublishCompanyCouponTableCell *_companyCouponTableViewCell;
    NSArray *_originalAnchorIconList;
    NSDictionary *_reeditContentInfo;
    long long _reeditSourceType;
}

@property (retain, nonatomic) AWENewPublishCompanyCouponTableCell *companyCouponTableViewCell;
@property (nonatomic) BOOL isFromLocalLifeMissionInfo;
@property (nonatomic) BOOL isRepeatShowVisible;
@property (copy, nonatomic) NSArray *originalAnchorIconList;
@property (copy, nonatomic) NSDictionary *reeditContentInfo;
@property (nonatomic) BOOL isAlreadyPublishTradeAnchor;
@property (nonatomic) long long reeditSourceType;
@property (nonatomic) BOOL isSetupCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *extras;

+ (void)_aweLazyRegisterPostPage;

- (void)didSelectAnchorWithType:(long long)arg0 anchorDismissBlock:(id /* block */)arg1 enterFromType:(long long)arg2;
- (void)addAIAnchorWithType:(long long)arg0 anchorDismissBlock:(id /* block */)arg1;
- (void)elementAppear;
- (void)setLocalLifeAnchorPublishPunishCanShow:(BOOL)arg0;
- (void)setupCell:(id)arg0;
- (id)localLife;
- (void)refreshWithAnchorVM:(id)arg0;
- (id)poiService;
- (BOOL)anchor:(id)arg0 shouldSelectAnchorWithType:(long long)arg1;
- (id)companyCouponService;
- (BOOL)hasLocalLifeAnchor;
- (BOOL)forceReceiveEvents;
- (id)anchorService;
- (BOOL)isRepeatShowVisible;
- (void)setIsRepeatShowVisible:(BOOL)arg0;
- (id)companyToolService;
- (void)p_addBindSignObserver;
- (void)p_addCompanyCouponObserver;
- (void)p_setupUIForCompanyCoupon;
- (BOOL)isSetupCell;
- (void)p_trackUIShowForCompanyCoupon;
- (void)setIsSetupCell:(BOOL)arg0;
- (id)companyCouponTableViewCell;
- (void)trackCompanyCouponRemindViewEvent;
- (void)clickCompanyToolsEvent;
- (id)p_currentLocalLifeAnchorInfoModel;
- (id)p_jumpToDetailPageWithSchema:(id)arg0 isAutoJump:(BOOL)arg1;
- (BOOL)isAlreadyPublishTradeAnchor;
- (id)reeditContentInfo;
- (void)updateCompanyCouponWithJSON:(id)arg0;
- (id)aggregateService;
- (void)companyCouponJSBResultNotification:(id)arg0;
- (void)companyCouponAddAnchorJSBNotification:(id)arg0;
- (id)p_getTopSpuIdParamsDict;
- (void)setIsAlreadyPublishTradeAnchor:(BOOL)arg0;
- (void)setReeditSourceType:(long long)arg0;
- (void)setReeditContentInfo:(id)arg0;
- (void)p_jumpToTitleEditPageFromLifeTask;
- (id)adaptJsonFromMicroApp:(id)arg0;
- (void)p_reeditContent;
- (id)repoTrackInfo;
- (id)poiTradeAnchorIcon;
- (long long)p_currentLocalLifeAnchorType;
- (void)setIsFromLocalLifeMissionInfo:(BOOL)arg0;
- (void)p_checkoutIsLocalLifeMissionWithDict:(id)arg0;
- (BOOL)isFromLocalLifeMissionInfo;
- (void)p_trackCompanyCouponAnchorChosenWithParams:(id)arg0;
- (id)reeditAnchorContentHandleWithOriginContent:(id)arg0;
- (void)p_assemblePublishParamsWithDict:(id)arg0;
- (long long)reeditSourceType;
- (void)addReminViewWithModel:(id)arg0 cell:(id)arg1;
- (void)clearCompanyCouponData;
- (void)setCompanyCouponTableViewCell:(id)arg0;
- (id)originalAnchorIconList;
- (void)setOriginalAnchorIconList:(id)arg0;
- (void)cleanUp;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)type;
- (id)extras;
- (BOOL)isEnabled;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewWillLayoutSubviews;
- (BOOL)isVisible;
- (id)cell;
- (void)didSelect;

@end
