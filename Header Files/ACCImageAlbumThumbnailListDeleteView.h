//
//     Generated by private class-dump
//

@class UIImageView, UILabel;

@interface ACCImageAlbumThumbnailListDeleteView : UIView <ACCSequencePreViewDeleteViewProtocol> {
    BOOL _allowDelete;
    UIImageView *_trashIcon;
    UILabel *_tipLabel;
}

@property (retain, nonatomic) UIImageView *trashIcon;
@property (retain, nonatomic) UILabel *tipLabel;
@property (nonatomic) BOOL allowDelete;

- (void)p_setupViews;
- (void)impactFeedBack;
- (BOOL)allowDelete;
- (void)updateDeleteStatus:(BOOL)arg0;
- (void)setAllowDelete:(BOOL)arg0;
- (id)trashIcon;
- (void)setTrashIcon:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)tipLabel;
- (void)setTipLabel:(id)arg0;
- (void)updateUI:(BOOL)arg0;

@end
