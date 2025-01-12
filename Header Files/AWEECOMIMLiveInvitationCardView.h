//
//     Generated by private class-dump
//

@class AWEECOMIMCardComponentCommonTitleView, AWEECOMIMSubCardLiveInvitationCard, AWEECOMIMCardComponentOperationPanel;

@interface AWEECOMIMLiveInvitationCardView : AWEECOMIMCardBaseView {
    AWEECOMIMCardComponentCommonTitleView *_headerView;
    AWEECOMIMSubCardLiveInvitationCard *_liveInvitationView;
    AWEECOMIMCardComponentOperationPanel *_btnPanel;
}

@property (retain, nonatomic) AWEECOMIMCardComponentCommonTitleView *headerView;
@property (retain, nonatomic) AWEECOMIMSubCardLiveInvitationCard *liveInvitationView;
@property (retain, nonatomic) AWEECOMIMCardComponentOperationPanel *btnPanel;

+ (double)heightWithWidth:(double)arg0 model:(id)arg1;
+ (BOOL)isDynamicHeight;

- (id)btnPanel;
- (void)setBtnPanel:(id)arg0;
- (void)tapCard;
- (id)liveInvitationView;
- (void)setLiveInvitationView:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setHeaderView:(id)arg0;
- (id)headerView;
- (void)updateData;

@end
