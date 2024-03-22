//
//     Generated by private class-dump
//

@class UILabel, IESLivePaidStreamFeedTicketView, NSString;

@interface IESLivePaidStreamFeedBlockView : UIView <IESLivePaidStreamBlockView> {
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    IESLivePaidStreamFeedTicketView *_feedTicketView;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) IESLivePaidStreamFeedTicketView *feedTicketView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)install:(unsigned long long)arg0 uiConfig:(id)arg1 actionHandler:(id /* block */)arg2;
- (void)setFeedTicketView:(id)arg0;
- (id)feedTicketView;
- (id)init;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)uninstall;
- (void)setTitleLabel:(id)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;

@end
