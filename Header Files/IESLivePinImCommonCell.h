//
//     Generated by private class-dump
//

@class UIView, NSString, IESLivePinOperateView, IESLivePinCommentCheckTipView, HTSLiveTemplateEngineConfiguration, IESLiveEmojiTextParser, IESLiveImageView, UILabel, IESLivePinCommentNode;
@protocol HTSLiveTemplateProvider, IESLiveLanguageService, IESLivePinCommentCellDelegate;

@interface IESLivePinImCommonCell : UICollectionViewCell <IESLivePinCommentCellProtocol> {
    IESLivePinCommentNode *_node;
    id<IESLivePinCommentCellDelegate> delegate;
    UIView *_redLineView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UILabel *_descLabel;
    IESLiveImageView *_iconImgView;
    UIView *_operateBaseLine;
    IESLivePinCommentCheckTipView *_checkTipView;
    IESLivePinOperateView *_operateView;
    IESLiveEmojiTextParser *_emojiParser;
    id<HTSLiveTemplateProvider> _templateParser;
    HTSLiveTemplateEngineConfiguration *_templateConfig;
    id<IESLiveLanguageService> _languageService;
}

@property (retain, nonatomic) UIView *redLineView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) IESLiveImageView *iconImgView;
@property (retain, nonatomic) UIView *operateBaseLine;
@property (retain, nonatomic) IESLivePinCommentCheckTipView *checkTipView;
@property (retain, nonatomic) IESLivePinOperateView *operateView;
@property (retain, nonatomic) IESLiveEmojiTextParser *emojiParser;
@property (retain, nonatomic) id<HTSLiveTemplateProvider> templateParser;
@property (retain, nonatomic) HTSLiveTemplateEngineConfiguration *templateConfig;
@property (retain, nonatomic) id<IESLiveLanguageService> languageService;
@property (retain, nonatomic) IESLivePinCommentNode *node;
@property (weak, nonatomic) id<IESLivePinCommentCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (id)iconImgView;
- (void)setIconImgView:(id)arg0;
- (id)languageService;
- (void)setLanguageService:(id)arg0;
- (id)templateConfig;
- (void)setTemplateConfig:(id)arg0;
- (id)templateParser;
- (void)setTemplateParser:(id)arg0;
- (id)emojiParser;
- (void)setEmojiParser:(id)arg0;
- (void)disableHostLocalizationsWithLabel:(id)arg0;
- (id)operateBaseLine;
- (void)setCheckTipView:(id)arg0;
- (id)checkTipView;
- (void)showOperateArea:(BOOL)arg0;
- (void)configWithNode:(id)arg0 containerWidth:(double)arg1;
- (void)setOperateBaseLine:(id)arg0;
- (void)setRedLineView:(id)arg0;
- (id)redLineView;
- (void)setOperateView:(id)arg0;
- (id)operateView;
- (void)resetLayoutForImageStyle;
- (void)resetLayoutForTextStyle;
- (id)node;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)prepareForReuse;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setNode:(id)arg0;
- (void)setupView;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;

@end
