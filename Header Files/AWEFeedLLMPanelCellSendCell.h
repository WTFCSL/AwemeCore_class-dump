//
//     Generated by private class-dump
//

@class NSString, AWEFeedLLMRecommendPanelCellModel, UILabel, UIView;

@interface AWEFeedLLMPanelCellSendCell : UITableViewCell <AWEFeedLLMRecommendPanelCellProtocol> {
    AWEFeedLLMRecommendPanelCellModel *_cellModel;
    UIView *_containerView;
    UILabel *_cellTextLabel;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *cellTextLabel;
@property (retain, nonatomic) AWEFeedLLMRecommendPanelCellModel *cellModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)calculateCellHeightWithCellModel:(id)arg0;

- (void)cellWillDisplay;
- (void)setCellModel:(id)arg0;
- (void)cellDidEndDisplay;
- (id)cellTextLabel;
- (void)configCellWithCellModel:(id)arg0;
- (BOOL)closeKeyboardGestureCanBeginWithTouch:(id)arg0;
- (void)updateCellWithCellModel:(id)arg0 interactiveType:(long long)arg1;
- (void)setCellTextLabel:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (void)setupUI;
- (id)cellModel;

@end