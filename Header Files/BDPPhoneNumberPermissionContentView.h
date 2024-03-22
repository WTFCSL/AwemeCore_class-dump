//
//     Generated by private class-dump
//

@class NSString, UIImageView, NSArray, UILabel, NSMutableArray, UIView;

@interface BDPPhoneNumberPermissionContentView : UIView {
    BOOL _usePhoneNumberList;
    NSArray *_phoneNumbers;
    UILabel *_titleLabel;
    UIImageView *_phoneIconView;
    id /* block */ _phoneNumChooseBlock;
    UIView *_containerView;
    UILabel *_subtitleLabel;
    NSMutableArray *_phoneNumDisplayViews;
    NSString *_tagLabelText;
    UILabel *_singlePhoneNumLabel;
    UIImageView *_singlePhoneNumChosenIcon;
    NSString *_subTitleText;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) NSMutableArray *phoneNumDisplayViews;
@property (copy, nonatomic) NSString *tagLabelText;
@property (nonatomic) BOOL usePhoneNumberList;
@property (retain, nonatomic) UILabel *singlePhoneNumLabel;
@property (retain, nonatomic) UIImageView *singlePhoneNumChosenIcon;
@property (copy, nonatomic) NSString *subTitleText;
@property (retain, nonatomic) NSArray *phoneNumbers;
@property (readonly, nonatomic) UIImageView *phoneIconView;
@property (copy, nonatomic) id /* block */ phoneNumChooseBlock;

- (void)setupContainer;
- (void)setSubTitleText:(id)arg0;
- (id)phoneIconView;
- (BOOL)usePhoneNumberList;
- (double)mainContainerHeight;
- (void)setSinglePhoneNumChosenIcon:(id)arg0;
- (void)setSinglePhoneNumLabel:(id)arg0;
- (void)setPhoneNumDisplayViews:(id)arg0;
- (id)phoneNumDisplayViews;
- (id)tagLabelText;
- (id /* block */)phoneNumChooseBlock;
- (void)onTapPhoneNumberViewWithGesture:(id)arg0;
- (void)setupSinglePhoneNumberView;
- (void)setupPhoneNumberDisplayViews;
- (id)initWithTagText:(id)arg0 usePhoneNumberList:(BOOL)arg1 subTitleText:(id)arg2;
- (void)setPhoneNumChooseBlock:(id /* block */)arg0;
- (void)setTagLabelText:(id)arg0;
- (void)setUsePhoneNumberList:(BOOL)arg0;
- (id)singlePhoneNumLabel;
- (id)singlePhoneNumChosenIcon;
- (void)setSubtitleLabel:(id)arg0;
- (id)phoneNumbers;
- (void).cxx_destruct;
- (void)setNeedsLayout;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setPhoneNumbers:(id)arg0;
- (id)titleLabel;
- (void)setContainerView:(id)arg0;
- (id)subtitleLabel;
- (id)containerView;
- (id)subTitleText;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (void)setupTitleLabel;
- (void)setupSubtitleLabel;

@end