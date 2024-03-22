//
//     Generated by private class-dump
//

@class IESLiveSelfDisciplinePanelContentView_v2, HTSEventContext, IESLiveSelfDisciplineOpenPanelViewModel, UILabel, UIButton;

@interface IESLiveSelfDisciplineOpenPanelView : UIView {
    UILabel *_panelTitle;
    UILabel *_panelTitleDesc;
    UIButton *_descBtn;
    UIButton *_stopButton;
    UIButton *_confirmBtn;
    HTSEventContext *_trackContext;
    IESLiveSelfDisciplineOpenPanelViewModel *_viewModel;
    IESLiveSelfDisciplinePanelContentView_v2 *_contentView_v2;
}

@property (retain, nonatomic) UILabel *panelTitle;
@property (retain, nonatomic) UILabel *panelTitleDesc;
@property (retain, nonatomic) UIButton *descBtn;
@property (retain, nonatomic) UIButton *stopButton;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveSelfDisciplineOpenPanelViewModel *viewModel;
@property (retain, nonatomic) IESLiveSelfDisciplinePanelContentView_v2 *contentView_v2;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)confirmBtn;
- (void)setConfirmBtn:(id)arg0;
- (id)panelTitle;
- (void)setPanelTitle:(id)arg0;
- (void)bindViewModel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 viewModel:(id)arg1 diContext:(id)arg2 trackContext:(id)arg3;
- (void)p_makeConfirmButtonAvailable:(BOOL)arg0;
- (id)panelTitleDesc;
- (id)descBtn;
- (id)contentView_v2;
- (void)onDescClicked;
- (void)onStopBtnClicked;
- (void)onConfirmBtnClicked;
- (void)setPanelTitleDesc:(id)arg0;
- (void)setDescBtn:(id)arg0;
- (void)setContentView_v2:(id)arg0;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)setupViews;
- (id)stopButton;
- (void)setStopButton:(id)arg0;

@end
