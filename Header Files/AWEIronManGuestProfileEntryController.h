//
//     Generated by private class-dump
//

@class AWEProfileExtensionAreaCommonParamModel, NSString, NSDictionary, UIView;
@protocol AWEProfileExtensionAreaCardViewProtocol;

@interface AWEIronManGuestProfileEntryController : NSObject <AWEProfileExtensionAreaCardControllerProtocol> {
    BOOL _shouldReported;
    AWEProfileExtensionAreaCommonParamModel *_commonParamModel;
    UIView<AWEProfileExtensionAreaCardViewProtocol> *_cardNewView;
    NSDictionary *_trackData;
}

@property (nonatomic) BOOL shouldReported;
@property (retain, nonatomic) AWEProfileExtensionAreaCommonParamModel *commonParamModel;
@property (retain, nonatomic) UIView<AWEProfileExtensionAreaCardViewProtocol> *cardNewView;
@property (retain, nonatomic) NSDictionary *trackData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardControllerWithCommonParam:(id)arg0;

- (BOOL)shouldShowCard;
- (void)passCardView:(id)arg0;
- (void)cardDidClicked;
- (void)cardWillAppear;
- (void)cardDidDisappear;
- (id)cardModel;
- (void)setCommonParamModel:(id)arg0;
- (id)commonParamModel;
- (void)setShouldReported:(BOOL)arg0;
- (void)setCardNewView:(id)arg0;
- (BOOL)shouldReported;
- (void)sendExposeTrackEvent;
- (void)sendClickTrackEvent;
- (id)cardNewView;
- (id)init;
- (void).cxx_destruct;
- (void)setCardData:(id)arg0;
- (id)trackData;
- (void)setTrackData:(id)arg0;

@end
