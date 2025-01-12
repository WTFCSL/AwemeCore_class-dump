//
//     Generated by private class-dump
//

@class NSString, UIImageView, IESLiveActivityDetailItem, UIView, UILabel, UIButton;
@protocol IESHYContainerProtocol, IESLiveRefactGiftPanelSectionVMProtocol;

@interface IESLiveActivityDetailView : UIView <IESHYHybridViewLifecycleProtocol, IESLiveRefactGiftPanelSectionViewProtocol> {
    id<IESLiveRefactGiftPanelSectionVMProtocol> _sectionVM;
    IESLiveActivityDetailItem *_viewModel;
    UIView<IESHYContainerProtocol> *_hybridContainer;
    NSString *_activityData;
    UIView *_nativeContainer;
    UILabel *_title;
    UIImageView *_titleImage;
    UILabel *_text;
    UIButton *_button;
}

@property (retain, nonatomic) IESLiveActivityDetailItem *viewModel;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (retain, nonatomic) NSString *activityData;
@property (retain, nonatomic) UIView *nativeContainer;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UIImageView *titleImage;
@property (retain, nonatomic) UILabel *text;
@property (retain, nonatomic) UIButton *button;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLiveRefactGiftPanelSectionVMProtocol> sectionVM;

- (id)hybridContainer;
- (void)setHybridContainer:(id)arg0;
- (void)bindAction;
- (void)p_tap;
- (void)setNativeContainer:(id)arg0;
- (id)nativeContainer;
- (id)sectionVM;
- (void)setSectionVM:(id)arg0;
- (void)setUpNativeUI;
- (void)trackForShowNormalView;
- (void)updateHybtidUIWithMsg:(id)arg0;
- (void)updateHybtidUIWithActivityData:(id)arg0;
- (id)pageInitialDataWithMsg:(id)arg0;
- (void)setUpHybridUIWithMsg:(id)arg0;
- (void)trackForClickNormalView;
- (void).cxx_destruct;
- (id)button;
- (void)setButton:(id)arg0;
- (void)setText:(id)arg0;
- (void)didMoveToSuperview;
- (void)setViewModel:(id)arg0;
- (id)title;
- (id)viewModel;
- (id)text;
- (void)update;
- (void)setUp;
- (void)setTitle:(id)arg0;
- (id)activityData;
- (void)setTitleImage:(id)arg0;
- (id)titleImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 viewModel:(id)arg1;
- (void)setActivityData:(id)arg0;

@end
