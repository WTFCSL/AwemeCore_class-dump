//
//     Generated by private class-dump
//

@class NSString, NSDictionary, ACCBeautyPanel, UIView, ACCAnimatedButton;
@protocol ACCBeautyComponentConfigProtocol, ACCBeautyFeatureComponentViewDelegate, AWEComposerBeautyDelegate;

@interface ACCBeautyFeatureComponentView : NSObject {
    BOOL _isBeautySwitchButtonSelected;
    id<ACCBeautyFeatureComponentViewDelegate, AWEComposerBeautyDelegate> _delegate;
    ACCBeautyPanel *_beautyPanel;
    ACCAnimatedButton *_beautySwitchButton;
    UIView *_redView;
    ACCAnimatedButton *_modernBeautyButton;
    NSString *_modernLbl;
    NSString *_switchLbl;
    NSDictionary *_referExtra;
    id<ACCBeautyComponentConfigProtocol> _config;
}

@property (retain, nonatomic) UIView *redView;
@property (retain, nonatomic) ACCAnimatedButton *modernBeautyButton;
@property (retain, nonatomic) NSString *modernLbl;
@property (retain, nonatomic) NSString *switchLbl;
@property (retain, nonatomic) NSDictionary *referExtra;
@property (retain, nonatomic) id<ACCBeautyComponentConfigProtocol> config;
@property (nonatomic) BOOL isBeautySwitchButtonSelected;
@property (weak, nonatomic) id<ACCBeautyFeatureComponentViewDelegate, AWEComposerBeautyDelegate> delegate;
@property (retain, nonatomic) ACCBeautyPanel *beautyPanel;
@property (retain, nonatomic) ACCAnimatedButton *beautySwitchButton;

- (id)redView;
- (void)setRedView:(id)arg0;
- (void)hidePointView;
- (id)referExtra;
- (void)setReferExtra:(id)arg0;
- (id)switchLbl;
- (void)setSwitchLbl:(id)arg0;
- (id)modernBeautyButtonConfig;
- (id)beautyPanel;
- (void)setIsBeautySwitchButtonSelected:(BOOL)arg0;
- (id)initWithModernTitle:(id)arg0 switchTitle:(id)arg1 referExtra:(id)arg2;
- (void)setBeautyPanel:(id)arg0;
- (id)modernBeautyButton;
- (id)modernLbl;
- (void)showPointView;
- (void)clickBeautyButton:(id)arg0;
- (id)beautySwitchButton;
- (void)clickSwitchBeautyBtn:(id)arg0;
- (BOOL)isBeautySwitchButtonSelected;
- (id)cachePointViewKey;
- (id)beautySwitchButtonConfig;
- (void)setBeautySwitchButton:(id)arg0;
- (void)setModernBeautyButton:(id)arg0;
- (void)setModernLbl:(id)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)dealloc;

@end
