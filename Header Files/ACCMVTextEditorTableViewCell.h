//
//     Generated by private class-dump
//

@class ACCTemplateTextFragment, UIImageView, UILabel, UIView;

@interface ACCMVTextEditorTableViewCell : UITableViewCell {
    BOOL _isCellSelected;
    ACCTemplateTextFragment *_textFragment;
    UIView *_topVerticalLine;
    UIImageView *_coverImageView;
    UIView *_bottomVerticalLine;
    UIView *_textContainerView;
    UILabel *_contentLabel;
    UIImageView *_hintIcon;
    UILabel *_hintLabel;
}

@property (retain, nonatomic) UIView *topVerticalLine;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *bottomVerticalLine;
@property (retain, nonatomic) UIView *textContainerView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *hintIcon;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) ACCTemplateTextFragment *textFragment;
@property (nonatomic) BOOL isCellSelected;

+ (id)cellIdentifier;

- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (void)p_setupUI;
- (BOOL)isCellSelected;
- (void)setIsCellSelected:(BOOL)arg0;
- (id)hintIcon;
- (void)setHintIcon:(id)arg0;
- (id)textFragment;
- (void)updateCover:(id)arg0;
- (void)prepareForUnSelectedAnimation;
- (void)setTextFragment:(id)arg0 topContent:(BOOL)arg1 bottomContent:(BOOL)arg2 selected:(BOOL)arg3;
- (id)topVerticalLine;
- (id)bottomVerticalLine;
- (void)setTextFragment:(id)arg0;
- (void)setTopVerticalLine:(id)arg0;
- (void)setBottomVerticalLine:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (id)hintLabel;
- (void)setHintLabel:(id)arg0;
- (id)textContainerView;
- (void)setTextContainerView:(id)arg0;

@end