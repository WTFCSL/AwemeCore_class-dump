//
//     Generated by private class-dump
//

@interface AWEFriendsImpl.GeneralRedButtonManager : HTSService <AWEUserMessage, AFDGeneralRedButtonManageService> {
    void /* unknown type, empty encoding */ activityListSettingsConfigKeysArray;
    void /* unknown type, empty encoding */ generalButtonExitDict;
    void /* unknown type, empty encoding */ eCommerceAssistCompleteSet;
}

- (void)didFinishLogout;
- (void)addVideoPlayTrackParamsTo:(id)arg0 forAweme:(id)arg1;
- (BOOL)isCurrentGeneralButtonTypeInHighPriorityList:(id)arg0;
- (BOOL)isCurrentGeneralButtonTypeInActivityWhiteList:(id)arg0;
- (BOOL)isGeneralButtonHasExitedWithModel:(id)arg0 buttonType:(id)arg1;
- (void)markGeneralButtonExitWithModel:(id)arg0 buttonType:(id)arg1;
- (void)markGeneralButtonNotExitWithModel:(id)arg0 buttonType:(id)arg1;
- (void)showGeneralButtonEcommercePostActivityInnerPush:(id)arg0;
- (void)updateGeneralRedButtonActionBlockIfNeededWithModel:(id)arg0 enterFrom:(id)arg1;
- (void)addButtonEntranceParamsTo:(id)arg0 forAweme:(id)arg1 isClick:(BOOL)arg2;
- (void)addActivityNameTrackParamsTo:(id)arg0 forAweme:(id)arg1;
- (void)addActivityNameTrackParamsTo:(id)arg0 forShootEnterFrom:(id)arg1;
- (id)init;
- (void).cxx_destruct;

@end
