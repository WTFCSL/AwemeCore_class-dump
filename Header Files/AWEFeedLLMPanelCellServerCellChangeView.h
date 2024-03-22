//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UITapGestureRecognizer;
@protocol AWEFeedLLMPanelCellServerCellChangeViewDelegate;

@interface AWEFeedLLMPanelCellServerCellChangeView : UIView {
    id<AWEFeedLLMPanelCellServerCellChangeViewDelegate> _delegate;
    UIImageView *_iconView;
    UILabel *_textLabel;
    UITapGestureRecognizer *_tapGesture;
}

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (weak, nonatomic) id<AWEFeedLLMPanelCellServerCellChangeViewDelegate> delegate;

- (void)viewDidClicked:(id)arg0;
- (id)textLabel;
- (id)init;
- (void).cxx_destruct;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (id)tapGesture;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setTextLabel:(id)arg0;
- (void)setupUI;
- (void)setTapGesture:(id)arg0;

@end
