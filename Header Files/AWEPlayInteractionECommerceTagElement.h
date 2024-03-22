//
//     Generated by private class-dump
//

@class UIView, NSString, UIStackView;
@protocol AWEECommerceLabelActionProtocol;

@interface AWEPlayInteractionECommerceTagElement : AWEPlayInteractionLeftElement <AWEFeedTagsPosPriorityAvoidElementProtocol> {
    UIStackView *_tagsStackView;
    UIView<AWEECommerceLabelActionProtocol> *_ecommerceTagEntryView;
    UIView<AWEECommerceLabelActionProtocol> *_ecommerceTagLabelView;
}

@property (retain, nonatomic) UIStackView *tagsStackView;
@property (weak, nonatomic) UIView<AWEECommerceLabelActionProtocol> *ecommerceTagEntryView;
@property (weak, nonatomic) UIView<AWEECommerceLabelActionProtocol> *ecommerceTagLabelView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActiveWithData:(id)arg0 context:(id)arg1;

- (void)viewDidDisposed;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:(id)arg0;
- (void)layoutElementView;
- (long long)elementPriority;
- (void)hideComponent;
- (id)tagsStackView;
- (id)ecommerceTagEntryView;
- (id)ecommerceTagLabelView;
- (id)goodsTrackObject:(unsigned long long)arg0 withType:(long long)arg1;
- (void)adClickTrackWithLabel:(id)arg0;
- (BOOL)shouldShowFriendsBoughtTagWithVid:(id)arg0;
- (void)friendTagShowedWithVid:(id)arg0;
- (id)friendTagShowCountKey;
- (long long)frequencyInEcommerceScene:(unsigned long long)arg0;
- (id)ecommerceVideoFriendBuyKey:(unsigned long long)arg0;
- (void)setTagsStackView:(id)arg0;
- (id)getViews;
- (void)setEcommerceTagLabelView:(id)arg0;
- (void)setEcommerceTagEntryView:(id)arg0;
- (void).cxx_destruct;
- (id)businessID;
- (void)viewDidLoad;
- (void)showActionSheet;

@end