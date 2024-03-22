//
//     Generated by private class-dump
//

@class NSString, UILabel, UIView, UIButton;

@interface ACCAlbumEnlargeToastBottomView : UIView <ACCSelectedAssetsBottomViewProtocol> {
    BOOL _doAnimation;
    UILabel *_titleLabel;
    UIButton *_nextButton;
    UILabel *_textLable;
    UIView *_lineSeperator;
}

@property (retain, nonatomic) UILabel *textLable;
@property (retain, nonatomic) UIView *lineSeperator;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *nextButton;
@property (nonatomic) BOOL doAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)doAnimation;
- (void)setDoAnimation:(BOOL)arg0;
- (BOOL)shouldShowBottomView:(BOOL)arg0 hasSelectedAssets:(BOOL)arg1;
- (id)lineSeperator;
- (id)textLable;
- (void)setTextLable:(id)arg0;
- (void)setLineSeperator:(id)arg0;
- (void).cxx_destruct;
- (id)initWithText:(id)arg0;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg0;
- (id)nextButton;
- (void)setNextButton:(id)arg0;

@end