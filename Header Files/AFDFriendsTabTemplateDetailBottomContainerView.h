//
//     Generated by private class-dump
//

@class UIButton;
@protocol AFDFriendsTabTemplateDetailBottomContainerViewDelegate;

@interface AFDFriendsTabTemplateDetailBottomContainerView : UIView {
    BOOL _hasCollection;
    id<AFDFriendsTabTemplateDetailBottomContainerViewDelegate> _delegate;
    UIButton *_confirmButton;
    UIButton *_confirmButtonNewStyle;
    UIButton *_collectButton;
}

@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *confirmButtonNewStyle;
@property (retain, nonatomic) UIButton *collectButton;
@property (weak, nonatomic) id<AFDFriendsTabTemplateDetailBottomContainerViewDelegate> delegate;
@property (nonatomic) BOOL hasCollection;

+ (double)height;

- (id)collectButton;
- (void)setCollectButton:(id)arg0;
- (void)confirmButtonDidClicked:(id)arg0;
- (void)setHasCollection:(BOOL)arg0;
- (BOOL)useNewStyleUI;
- (id)confirmButtonNewStyle;
- (void)collectButtonDidClicked:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 hasCollect:(BOOL)arg1;
- (void)updateWithConfirmButtonText:(id)arg0 image:(id)arg1;
- (void)updateNewStyleCollectBtnWithActionType:(BOOL)arg0;
- (void)setConfirmButtonNewStyle:(id)arg0;
- (void).cxx_destruct;
- (BOOL)hasCollection;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setupViews;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg0;

@end
