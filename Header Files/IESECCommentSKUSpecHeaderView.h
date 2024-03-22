//
//     Generated by private class-dump
//

@class UILabel, NSString, UIView;
@protocol IESECCommentSKUSpecHeaderDelegate;

@interface IESECCommentSKUSpecHeaderView : UICollectionReusableView <IESECCommentSKUSpecHeaderDelegate> {
    id<IESECCommentSKUSpecHeaderDelegate> _delegate;
    NSString *_title;
    UILabel *_titleLabel;
    UILabel *_warningLabel;
    UILabel *_sizeComponentLabel;
    UILabel *_sizeAssistantLabel;
    UIView *_sizeAssistantView;
    UIView *_separator;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *warningLabel;
@property (retain, nonatomic) UILabel *sizeComponentLabel;
@property (retain, nonatomic) UILabel *sizeAssistantLabel;
@property (retain, nonatomic) UIView *sizeAssistantView;
@property (retain, nonatomic) UIView *separator;
@property (weak, nonatomic) id<IESECCommentSKUSpecHeaderDelegate> delegate;
@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sizeAssistantView;
- (id)sizeComponentLabel;
- (void)tappedSizeComponent;
- (void)setSizeComponentLabel:(id)arg0;
- (id)sizeAssistantLabel;
- (void)setSizeAssistantLabel:(id)arg0;
- (void)setSizeAssistantView:(id)arg0;
- (void).cxx_destruct;
- (id)separator;
- (void)setSeparator:(id)arg0;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)title;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setTitle:(id)arg0;
- (id)warningLabel;
- (void)setWarningLabel:(id)arg0;
- (void)setupGestures;

@end
