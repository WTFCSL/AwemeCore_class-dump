//
//     Generated by private class-dump
//

@class UIImageView, DUXActionSheetCellTextView, UIView, DUXActionSheetItemModel, UIButton;
@protocol DUXActionSheetCellDelegate;

@interface DUXActionSheetCellView : UIView {
    DUXActionSheetCellTextView *_textView;
    UIImageView *_iconImageView;
    DUXActionSheetItemModel *_model;
    id<DUXActionSheetCellDelegate> _delegate;
    UIView *_maskView;
    UIButton *_button;
    UIView *_contentView;
}

@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) DUXActionSheetCellTextView *textView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) DUXActionSheetItemModel *model;
@property (weak, nonatomic) id<DUXActionSheetCellDelegate> delegate;

- (id)initWithModel:(id)arg0 andDelegate:(id)arg1;
- (void)cellTouched:(id)arg0;
- (void)cellClicked:(id)arg0;
- (void)cellTouchCancelled:(id)arg0;
- (id)textView;
- (id)initWithModel:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)button;
- (void)setButton:(id)arg0;
- (id)model;
- (id)maskView;
- (id)contentView;
- (id)delegate;
- (void)setTextView:(id)arg0;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (id)iconImageView;
- (void)setMaskView:(id)arg0;
- (void)setContentView:(id)arg0;
- (void)setIconImageView:(id)arg0;

@end
