//
//     Generated by private class-dump
//

@interface AWEECPersonalCenterShopView : AWEProfileFunctionEntryView {
    BOOL _hasUnread;
}

@property (nonatomic) BOOL hasUnread;

+ (id)storeSourceParamsWithExtraInfoDic:(id)arg0;
+ (id)commonTrackParamsByExtraInfoDic:(id)arg0 userModel:(id)arg1 cardData:(id)arg2 cardModel:(id)arg3 cardIndex:(unsigned long long)arg4 isDotViewShow:(BOOL)arg5 userIsMaster:(BOOL)arg6;
+ (void)handleProfileExtensionAreaActionWithUserModel:(id)arg0 schema:(id)arg1 cardModel:(id)arg2 extraInfo:(id)arg3 cardIndex:(unsigned long long)arg4 isDotViewShow:(BOOL)arg5 cardData:(id)arg6 shouldTrackAppearEvent:(BOOL)arg7;

- (void)cardWillAppear;
- (void)cardDidAppear;
- (BOOL)shouldShowDot;
- (void)setHasUnread:(BOOL)arg0;
- (void)configHasUnread;
- (void)updateOrderCounterWhenMsgReceived;
- (void)entryDidClicked;
- (void)dealloc;
- (void)viewDidLoad;
- (void)onInit;
- (BOOL)hasUnread;

@end
