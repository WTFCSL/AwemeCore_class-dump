//
//     Generated by private class-dump
//

@class UIImageView, UILabel, AWEGeneralSearchActivityTagModel;

@interface AWESearchSlidingBarTagView : UIView {
    BOOL _isShowing;
    long long _buttonIndex;
    AWEGeneralSearchActivityTagModel *_tagModel;
    UIImageView *_tagImageView;
    UILabel *_tagLabel;
    long long _showCount;
}

@property (retain, nonatomic) UIImageView *tagImageView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (nonatomic) long long showCount;
@property (nonatomic) long long buttonIndex;
@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) AWEGeneralSearchActivityTagModel *tagModel;

- (void)setIsShowing:(BOOL)arg0;
- (void)setTagImageView:(id)arg0;
- (id)tagImageView;
- (id)tagLabel;
- (void)setTagLabel:(id)arg0;
- (void)setTagModel:(id)arg0;
- (id)tagModel;
- (void)hideAt:(long long)arg0;
- (void)showOn:(long long)arg0 activityTagModel:(id)arg1 showCount:(long long)arg2;
- (struct CGSize { double x0; double x1; })barTagSizeWithModel:(id)arg0;
- (BOOL)barTagCanShow:(id)arg0;
- (void).cxx_destruct;
- (BOOL)isShowing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;
- (long long)buttonIndex;
- (void)setButtonIndex:(long long)arg0;
- (long long)showCount;
- (void)setShowCount:(long long)arg0;

@end
