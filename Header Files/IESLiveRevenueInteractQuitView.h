//
//     Generated by private class-dump
//

@interface IESLiveRevenueInteractQuitView : HTSLivePopUpView {
    id /* block */ _confirmBlock;
    id /* block */ _relinkAnchorBlock;
    id /* block */ _leaveWithTeamMateBlock;
}

@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ relinkAnchorBlock;
@property (copy, nonatomic) id /* block */ leaveWithTeamMateBlock;

- (id /* block */)confirmBlock;
- (void)setConfirmBlock:(id /* block */)arg0;
- (void)onCancelButtonClicked;
- (void)onConfirmButtonClicked;
- (void)setRelinkAnchorBlock:(id /* block */)arg0;
- (void)setLeaveWithTeamMateBlock:(id /* block */)arg0;
- (void)onLeaveWithTeamMateClicked;
- (void)onChooseAnchorClicked;
- (id /* block */)relinkAnchorBlock;
- (id /* block */)leaveWithTeamMateBlock;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupUI;

@end
