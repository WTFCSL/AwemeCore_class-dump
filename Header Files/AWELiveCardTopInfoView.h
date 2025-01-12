//
//     Generated by private class-dump
//

@class AWELiveCardTopInfoTagView, UILabel, AWELiveCardTopInfoInsetLabel;

@interface AWELiveCardTopInfoView : UIView {
    AWELiveCardTopInfoTagView *_tagView;
    UILabel *_titleLabel;
    AWELiveCardTopInfoInsetLabel *_subTitleLabel;
    UILabel *_subTitleLabelThin;
}

@property (retain, nonatomic) AWELiveCardTopInfoTagView *tagView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWELiveCardTopInfoInsetLabel *subTitleLabel;
@property (retain, nonatomic) UILabel *subTitleLabelThin;

- (id)createStackView;
- (id)createSubTitleLabel;
- (id)createSubTitleLabelThin;
- (void)setSubTitleLabelThin:(id)arg0;
- (id)subTitleLabelThin;
- (void)updateWithFirstTagTitle:(id)arg0 secondTagTitle:(id)arg1 tagType:(long long)arg2 titleLabel:(id)arg3 subTitleLabel:(id)arg4 subTitleLabelThin:(id)arg5;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleLabel:(id)arg0;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (id)createTitleLabel;
- (id)tagView;
- (void)setTagView:(id)arg0;

@end
