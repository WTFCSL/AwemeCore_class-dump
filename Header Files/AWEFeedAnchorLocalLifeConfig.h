//
//     Generated by private class-dump
//

@class NSObject, NSString, UIView;
@protocol AWEPOIPromptCardManager, AWELocalLifeAnchorManagerProtocol;

@interface AWEFeedAnchorLocalLifeConfig : AWEFeedAnchorBaseConfig <AWEPOIPlayInteractionVCManagerProtocol, AWELocalLifeAnchorActionDelegate> {
    BOOL _promptCardAlreadyShown;
    id<AWELocalLifeAnchorManagerProtocol> _anchorManager;
    UIView *_entryView;
    NSObject<AWEPOIPromptCardManager> *_promptCardManager;
    NSObject *_douDiscountObserver;
}

@property (retain, nonatomic) UIView *entryView;
@property (retain, nonatomic) NSObject<AWEPOIPromptCardManager> *promptCardManager;
@property (retain, nonatomic) NSObject *douDiscountObserver;
@property (nonatomic) BOOL promptCardAlreadyShown;
@property (retain, nonatomic) id<AWELocalLifeAnchorManagerProtocol> anchorManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:(id)arg0 extraInfo:(id)arg1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForCommentList:(id)arg0 extraInfo:(id)arg1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForBulletScreen:(id)arg0 extraInfo:(id)arg1;
+ (void)p_handleScanSceneAnchorParams:(id)arg0 referString:(id)arg1 logExtra:(id)arg2;
+ (BOOL)hasMutableAnchorViewDataWithAwemeModelForFeed:(id)arg0 extraInfo:(id)arg1 anchorInfo:(id)arg2;
+ (void)onMutableAnchorSheetShowWithAweme:(id)arg0 context:(id)arg1 count:(long long)arg2;
+ (void)onMutableAnchorSheetClickWithAweme:(id)arg0 context:(id)arg1 count:(long long)arg2;
+ (id)anchorType;

- (id)anchorViewWithModel:(id)arg0;
- (void)anchorViewWillShowOnSuperview;
- (void)updateWithAwemeModel:(id)arg0 needPerformOnDisplay:(BOOL)arg1;
- (id /* block */)layoutWithAwemeModel:(id)arg0 commonLayoutInfo:(id)arg1;
- (id)anchorManager;
- (void)showPOIPromptCard;
- (void)setAnchorManager:(id)arg0;
- (void)showAnchorDetail;
- (void)showPOIPromptCardImmediately:(BOOL)arg0;
- (id)p_getCurrentAnchorDataBuilderWithAweme:(id)arg0;
- (id)douDiscountObserver;
- (id)promptCardManager;
- (void)setDouDiscountObserver:(id)arg0;
- (void)setupPOIPromptCard;
- (void)setPromptCardAlreadyShown:(BOOL)arg0;
- (BOOL)promptCardAlreadyShown;
- (void)trackProjectCardShow;
- (BOOL)shouldShowPOIAnchor;
- (void)updatePromptLogExtraWithAwemeModel:(id)arg0;
- (void)setPromptCardManager:(id)arg0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reset;
- (id)entryView;
- (void)setEntryView:(id)arg0;

@end
