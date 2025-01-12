//
//     Generated by private class-dump
//

@class AWEProfileExtensionAreaCommonParamModel, NSString, UIView;
@protocol AWEProfileExtensionAreaContainerProtocol;

@interface AWEProfileExtensionAreaFindMoreCardController : NSObject <AWEProfileExtensionAreaCardControllerProtocol> {
    AWEProfileExtensionAreaCommonParamModel *_commonParamModel;
    UIView *_cardView;
    id<AWEProfileExtensionAreaContainerProtocol> _delegate;
}

@property (retain, nonatomic) AWEProfileExtensionAreaCommonParamModel *commonParamModel;
@property (retain, nonatomic) UIView *cardView;
@property (weak, nonatomic) id<AWEProfileExtensionAreaContainerProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardControllerWithCommonParam:(id)arg0;

- (BOOL)shouldShowCard;
- (void)passCardView:(id)arg0;
- (void)cardDidClicked;
- (void)configDelegate:(id)arg0;
- (void)setCommonParamModel:(id)arg0;
- (id)commonParamModel;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)cardView;
- (void)setCardView:(id)arg0;

@end
