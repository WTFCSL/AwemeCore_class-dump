//
//     Generated by private class-dump
//

@class IESGCPPBGameDetailReserveGameSimpleInfoV3, NSArray, IESGCPPBGameDetailOfficialAccount, IESGCPDetailSectionReserveGameInfoThemeConfig, IESGCPPBGameImageBundler, NSString;

@interface IESGCPDetailSectionReserveGameInfoViewModel : IESGCPDetailBaseViewModel {
    IESGCPDetailSectionReserveGameInfoThemeConfig *_themeConfig;
    IESGCPPBGameDetailReserveGameSimpleInfoV3 *_info;
    IESGCPPBGameDetailOfficialAccount *_officialAccount;
    NSArray *_noticeListArray;
}

@property (retain, nonatomic) IESGCPPBGameDetailReserveGameSimpleInfoV3 *info;
@property (retain, nonatomic) IESGCPPBGameDetailOfficialAccount *officialAccount;
@property (retain, nonatomic) NSArray *noticeListArray;
@property (retain, nonatomic) IESGCPDetailSectionReserveGameInfoThemeConfig *themeConfig;
@property (readonly, nonatomic) IESGCPPBGameImageBundler *gameIcon;
@property (readonly, copy, nonatomic) NSString *gameID;
@property (readonly, copy, nonatomic) NSString *gameName;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *descriptionText;
@property (readonly, nonatomic) BOOL showDescriptionArrow;
@property (readonly, copy, nonatomic) NSString *descriptionAdditionText;
@property (readonly, nonatomic) BOOL showDescriptionAdditionArrow;
@property (readonly, nonatomic) BOOL shouldShowOfficialAccount;
@property (readonly, copy, nonatomic) NSString *officialUserId;
@property (readonly, copy, nonatomic) NSString *officialSecUserId;
@property (readonly, copy, nonatomic) NSArray *tagsArray;

- (id)gameName;
- (id)tagsArray;
- (id)themeConfig;
- (void)setThemeConfig:(id)arg0;
- (void)openSchema:(id)arg0;
- (id)gameIcon;
- (id)getTrackerEncodedString;
- (id)noticeArrowIconName;
- (void)userDidTapDescriptionText;
- (id)officialAccount;
- (id)officialSecUserId;
- (id)officialUserId;
- (BOOL)shouldShowOfficialAccount;
- (id)noticeListArray;
- (id)getJumpContentFromNotice:(id)arg0;
- (void)setOfficialAccount:(id)arg0;
- (BOOL)showDescriptionArrow;
- (id)descriptionAdditionText;
- (BOOL)showDescriptionAdditionArrow;
- (void)userDidTapDescriptionAdditionText;
- (BOOL)descriptionNoticeTextCouldDoJumpAction;
- (id)descriptionNoticeModel;
- (id)appendCustomQueryParamAt:(id)arg0;
- (BOOL)descriptionAdditionNoticeTextCouldDoJumpAction;
- (id)descriptionAdditionNoticeModel;
- (void)setNoticeListArray:(id)arg0;
- (id)info;
- (void).cxx_destruct;
- (void)setInfo:(id)arg0;
- (id)title;
- (void)setContent:(id)arg0;
- (id)descriptionText;
- (id)gameID;

@end
