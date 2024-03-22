//
//     Generated by private class-dump
//

@class AWEProfileExtensionAreaCommonParamModel, NSString, UIView;
@protocol AWEProfileExtensionAreaCardViewProtocol, AWEProfileExtensionAreaContainerProtocol;

@interface AWEPOIUserProfileEntryControllerPrivateDomain : NSObject <AWEProfileExtensionAreaCardControllerProtocol> {
    BOOL _isCurrentUser;
    UIView<AWEProfileExtensionAreaCardViewProtocol> *_cardView;
    AWEProfileExtensionAreaCommonParamModel *_commonParamModel;
    id<AWEProfileExtensionAreaContainerProtocol> _delegate;
    NSString *_sessionId;
}

@property (retain, nonatomic) UIView<AWEProfileExtensionAreaCardViewProtocol> *cardView;
@property (retain, nonatomic) AWEProfileExtensionAreaCommonParamModel *commonParamModel;
@property (weak, nonatomic) id<AWEProfileExtensionAreaContainerProtocol> delegate;
@property (nonatomic) BOOL isCurrentUser;
@property (copy, nonatomic) NSString *sessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardControllerWithCommonParam:(id)arg0;

- (BOOL)shouldShowCard;
- (void)passCardView:(id)arg0;
- (void)cardDidClicked;
- (void)cardWillAppear;
- (void)configDelegate:(id)arg0;
- (void)trackEvent:(id)arg0 extra:(id)arg1;
- (void)transferToURLString:(id)arg0;
- (void)setCommonParamModel:(id)arg0;
- (id)commonParamModel;
- (id)webviewSchemaString:(id)arg0 joinParameters:(id)arg1;
- (id)webviewUrlString:(id)arg0 joinParameters:(id)arg1;
- (id)flashSaleExtra;
- (void)addLifeInitialInfoIfNeeded;
- (BOOL)isFirstLocalLifeEntry;
- (id)addExtraBussinessParams;
- (id)offlineShopExtra;
- (void)trackAssistantWorkdeskFor:(id)arg0;
- (void)setSessionId:(id)arg0;
- (void).cxx_destruct;
- (id)sessionId;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (BOOL)isCurrentUser;
- (void)setIsCurrentUser:(BOOL)arg0;
- (id)cardView;
- (void)setCardView:(id)arg0;

@end
