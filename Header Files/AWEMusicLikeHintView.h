//
//     Generated by private class-dump
//

@class NSString, UIImageView, UILabel, UIView, UITapGestureRecognizer;

@interface AWEMusicLikeHintView : UIView <UIGestureRecognizerDelegate> {
    id /* block */ _entranceTapped;
    UILabel *_infoLabel;
    UILabel *_hintLabel;
    UIImageView *_iconView;
    UIImageView *_arrowView;
    UIView *_separateLine;
    UITapGestureRecognizer *_tapGes;
}

@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UIView *separateLine;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (copy, nonatomic) id /* block */ entranceTapped;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)separateLine;
- (void)setSeparateLine:(id)arg0;
- (id)tapGes;
- (void)setTapGes:(id)arg0;
- (void)addTapGesture;
- (id /* block */)entranceTapped;
- (void)setEntranceTapped:(id /* block */)arg0;
- (id)accessibilityLabel;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (BOOL)isAccessibilityElement;
- (id)arrowView;
- (void)setArrowView:(id)arg0;
- (void)setupView;
- (void)tapped;
- (id)hintLabel;
- (void)setHintLabel:(id)arg0;
- (id)infoLabel;
- (void)setInfoLabel:(id)arg0;
- (double)suggestedHeight;

@end
