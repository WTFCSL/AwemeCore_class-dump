//
//     Generated by private class-dump
//

@class UIButton, NSString, UIView;
@protocol AWENoxusPlayerSettingTypeView;

@interface AWELandscapeLVSelectResolutionElement : AWELandscapeInteractionBaseElement <AWENoxusPlayerSettingTypeViewDelegate> {
    BOOL _isShowingResolutionPanel;
    UIButton *_resolutionButton;
    UIView<AWENoxusPlayerSettingTypeView> *_selectResolutionView;
}

@property (retain, nonatomic) UIButton *resolutionButton;
@property (retain, nonatomic) UIView<AWENoxusPlayerSettingTypeView> *selectResolutionView;
@property (nonatomic) BOOL isShowingResolutionPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hideAllPanels;
- (BOOL)isShowingPanel;
- (void)noxusSettingTypeListSelectModel:(id)arg0;
- (void)noxusSettingTypeDismiss:(BOOL)arg0;
- (void)refreshResolutionButton:(unsigned long long)arg0;
- (id)resolutionTextWithType:(unsigned long long)arg0;
- (id)resolutionButton;
- (void)showResolutionSettingView;
- (void)setResolutionButton:(id)arg0;
- (void)trackResolutionButtonShow;
- (BOOL)isShowingResolutionPanel;
- (void)dismissResolutionSettingView;
- (id)selectResolutionView;
- (void)setIsShowingResolutionPanel:(BOOL)arg0;
- (void)trackResolutionTypeSelected:(unsigned long long)arg0;
- (void)setSelectResolutionView:(id)arg0;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (BOOL)isInteracting;
- (void)viewDidLoad;

@end