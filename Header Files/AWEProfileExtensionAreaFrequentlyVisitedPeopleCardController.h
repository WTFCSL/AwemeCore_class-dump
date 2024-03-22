//
//     Generated by private class-dump
//

@class UIView, NSString, NSArray, AWEProfileExtensionAreaCommonParamModel, UIImageView, NSDictionary, AWEURLModel, UILabel;
@protocol AWEProfileExtensionAreaCardViewProtocol;

@interface AWEProfileExtensionAreaFrequentlyVisitedPeopleCardController : NSObject <AWEProfileExtensionAreaCardControllerProtocol> {
    UIView<AWEProfileExtensionAreaCardViewProtocol> *_cardView;
    AWEProfileExtensionAreaCommonParamModel *_commonParamModel;
    NSString *_subtitleText;
    UIView *_customDetailView;
    UIImageView *_unwatchUserAvatar;
    UILabel *_unwatchCountLabel;
    NSDictionary *_decodedCardData;
    NSArray *_popoverAvatarUrlList;
    AWEURLModel *_unwatchAvatarUrlModel;
}

@property (retain, nonatomic) UIView<AWEProfileExtensionAreaCardViewProtocol> *cardView;
@property (retain, nonatomic) AWEProfileExtensionAreaCommonParamModel *commonParamModel;
@property (retain, nonatomic) NSString *subtitleText;
@property (retain, nonatomic) UIView *customDetailView;
@property (retain, nonatomic) UIImageView *unwatchUserAvatar;
@property (retain, nonatomic) UILabel *unwatchCountLabel;
@property (retain, nonatomic) NSDictionary *decodedCardData;
@property (retain, nonatomic) NSArray *popoverAvatarUrlList;
@property (retain, nonatomic) AWEURLModel *unwatchAvatarUrlModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardControllerWithCommonParam:(id)arg0;

- (BOOL)shouldShowCard;
- (void)passCardView:(id)arg0;
- (void)cardDidClicked;
- (void)cardNewlyAddedAfterAppInstall;
- (BOOL)isForcedToShowAfterHomePageRefresh;
- (BOOL)needToShowPopover;
- (void)configPopoverConfigModel:(id)arg0;
- (void)setCommonParamModel:(id)arg0;
- (id)commonParamModel;
- (id)customDetailView;
- (void)setCustomDetailView:(id)arg0;
- (void)setDecodedCardData:(id)arg0;
- (id)decodedCardData;
- (void)setPopoverAvatarUrlList:(id)arg0;
- (void)setUnwatchAvatarUrlModel:(id)arg0;
- (BOOL)p_enableCustomDetailView;
- (void)p_createCustomDetailView;
- (double)p_customDetailViewWidth;
- (id)popoverAvatarUrlList;
- (id)p_createPopoverView;
- (id)unwatchAvatarUrlModel;
- (id)unwatchUserAvatar;
- (id)unwatchCountLabel;
- (void)setUnwatchUserAvatar:(id)arg0;
- (void)setUnwatchCountLabel:(id)arg0;
- (id)subtitleText;
- (void).cxx_destruct;
- (void)setSubtitleText:(id)arg0;
- (id)cardView;
- (void)setCardView:(id)arg0;

@end
