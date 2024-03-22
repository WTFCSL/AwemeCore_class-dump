//
//     Generated by private class-dump
//

@class UILabel, UIButton, UIView;

@interface IESLiveAudienceInteractiveSettingHeaderView : UITableViewHeaderFooterView {
    BOOL _hasMoreButton;
    BOOL _enablePaidQueue;
    id /* block */ _didClick;
    UIView *_normalContentContainer;
    UILabel *_titleLabel;
    UIButton *_moreButton;
    UIView *_paidQueueContainer;
}

@property (retain, nonatomic) UIView *normalContentContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *moreButton;
@property (retain, nonatomic) UIView *paidQueueContainer;
@property (nonatomic) BOOL hasMoreButton;
@property (copy, nonatomic) id /* block */ didClick;
@property (nonatomic) BOOL enablePaidQueue;

- (id /* block */)didClick;
- (void)setDidClick:(id /* block */)arg0;
- (id)normalContentContainer;
- (void)setNormalContentContainer:(id)arg0;
- (void)p_moreButtonDidTap;
- (BOOL)enablePaidQueue;
- (id)paidQueueContainer;
- (void)setPaidQueueContainer:(id)arg0;
- (void)p_refreshPaidQueueView;
- (void)setHasMoreButton:(BOOL)arg0;
- (void)setEnablePaidQueue:(BOOL)arg0;
- (BOOL)hasMoreButton;
- (void).cxx_destruct;
- (id)moreButton;
- (id)titleLabel;
- (void)setMoreButton:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)initWithReuseIdentifier:(id)arg0;
- (void)updateWithTitle:(id)arg0;

@end
