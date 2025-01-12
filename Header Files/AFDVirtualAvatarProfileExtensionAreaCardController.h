//
//     Generated by private class-dump
//

@class AWEProfileExtensionAreaCommonParamModel, NSString, UIView;
@protocol AWEProfileExtensionAreaCardViewProtocol;

@interface AFDVirtualAvatarProfileExtensionAreaCardController : NSObject <AWEProfileExtensionAreaCardControllerProtocol> {
    BOOL _isShowingActSubtitle;
    BOOL _isAppearing;
    AWEProfileExtensionAreaCommonParamModel *_commonParamModel;
    UIView<AWEProfileExtensionAreaCardViewProtocol> *_cardView;
    NSString *_originSubtitle;
}

@property (retain, nonatomic) AWEProfileExtensionAreaCommonParamModel *commonParamModel;
@property (retain, nonatomic) UIView<AWEProfileExtensionAreaCardViewProtocol> *cardView;
@property (retain, nonatomic) NSString *originSubtitle;
@property (nonatomic) BOOL isShowingActSubtitle;
@property (nonatomic) BOOL isAppearing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardControllerWithCommonParam:(id)arg0;

- (BOOL)shouldShowCard;
- (void)passCardView:(id)arg0;
- (void)cardDidClicked;
- (void)cardWillAppear;
- (void)cardDidAppear;
- (void)cardWillDisappear;
- (void)cardDidDisappear;
- (void)setCommonParamModel:(id)arg0;
- (id)commonParamModel;
- (id)originSubtitle;
- (void)setOriginSubtitle:(id)arg0;
- (void)setIsShowingActSubtitle:(BOOL)arg0;
- (BOOL)isShowingActSubtitle;
- (void).cxx_destruct;
- (void)setIsAppearing:(BOOL)arg0;
- (BOOL)isAppearing;
- (id)cardView;
- (void)setCardView:(id)arg0;

@end
