//
//     Generated by private class-dump
//

@class UILabel, UIView;

@interface IESLiveFaceEffectAlertView : NSObject {
    long long _scene;
    UIView *_faceAlertView;
    UILabel *_hintLabel;
}

@property (nonatomic) long long scene;
@property (retain, nonatomic) UIView *faceAlertView;
@property (retain, nonatomic) UILabel *hintLabel;

- (void)configSubviews;
- (void)hideFaceAlertView;
- (void)setFaceAlertView:(id)arg0;
- (id)faceAlertView;
- (void)showHintLabelIfNeed:(id)arg0;
- (void)showFaceAlertView;
- (void)configFaceAlertView;
- (void)configHintLabel;
- (id)initWithScene:(long long)arg0;
- (void)setScene:(long long)arg0;
- (void).cxx_destruct;
- (long long)scene;
- (id)hintLabel;
- (void)setHintLabel:(id)arg0;

@end
