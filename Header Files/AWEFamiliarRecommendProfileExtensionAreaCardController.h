//
//     Generated by private class-dump
//

@class AWEProfileExtensionAreaCommonParamModel, NSString, UIView;
@protocol AWEProfileExtensionAreaCardViewProtocol;

@interface AWEFamiliarRecommendProfileExtensionAreaCardController : NSObject <AWEProfileExtensionAreaCardControllerProtocol> {
    UIView<AWEProfileExtensionAreaCardViewProtocol> *_cardView;
    AWEProfileExtensionAreaCommonParamModel *_commonParamModel;
}

@property (retain, nonatomic) UIView<AWEProfileExtensionAreaCardViewProtocol> *cardView;
@property (retain, nonatomic) AWEProfileExtensionAreaCommonParamModel *commonParamModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardControllerWithCommonParam:(id)arg0;

- (BOOL)shouldShowCard;
- (void)passCardView:(id)arg0;
- (void)cardDidClicked;
- (BOOL)isForcedToShowAfterHomePageRefresh;
- (BOOL)needToShowPopover;
- (void)configPopoverConfigModel:(id)arg0;
- (void)setCommonParamModel:(id)arg0;
- (id)commonParamModel;
- (void).cxx_destruct;
- (id)cardView;
- (void)setCardView:(id)arg0;

@end