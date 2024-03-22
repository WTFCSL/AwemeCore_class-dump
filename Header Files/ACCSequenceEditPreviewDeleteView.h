//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView;

@interface ACCSequenceEditPreviewDeleteView : UIView <ACCSequencePreViewDeleteViewProtocol> {
    BOOL _allowDelete;
    UIView *_containerView;
    UIImageView *_trashIcon;
    UILabel *_tipLabel;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *trashIcon;
@property (retain, nonatomic) UILabel *tipLabel;
@property (nonatomic) BOOL allowDelete;

+ (double)deleteViewHeight;

- (void)p_setupViews;
- (void)impactFeedBack;
- (BOOL)allowDelete;
- (void)updateDeleteStatus:(BOOL)arg0;
- (void)setAllowDelete:(BOOL)arg0;
- (id)trashIcon;
- (void)setTrashIcon:(id)arg0;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)containerView;
- (id)tipLabel;
- (void)setTipLabel:(id)arg0;

@end