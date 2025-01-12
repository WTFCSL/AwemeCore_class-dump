//
//     Generated by private class-dump
//

@class UIButton, IESECCommentMediaItemViewModel, IESECInsetsLabel;
@protocol IESECCommentMediaStatusBarDelegate;

@interface IESECCommentMediaStatusBarView : UIView {
    id<IESECCommentMediaStatusBarDelegate> _delegate;
    long long _index;
    UIButton *_backButton;
    IESECInsetsLabel *_indexLabel;
    UIButton *_multipleMediaModeButton;
    IESECCommentMediaItemViewModel *_model;
    unsigned long long _enterFrom;
}

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) IESECInsetsLabel *indexLabel;
@property (retain, nonatomic) UIButton *multipleMediaModeButton;
@property (retain, nonatomic) IESECCommentMediaItemViewModel *model;
@property (nonatomic) unsigned long long enterFrom;
@property (weak, nonatomic) id<IESECCommentMediaStatusBarDelegate> delegate;
@property (nonatomic) long long index;

- (void)setEnterFrom:(unsigned long long)arg0;
- (unsigned long long)enterFrom;
- (void)setIndexLabel:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 enterFrom:(unsigned long long)arg1;
- (void)updateViewWithModel:(id)arg0 length:(long long)arg1;
- (void)updateMultiplyButtonStatus:(BOOL)arg0;
- (id)multipleMediaModeButton;
- (void)clickBackButton;
- (void)clickMultipleMediasButton;
- (void)setMultipleMediaModeButton:(id)arg0;
- (void)setModel:(id)arg0;
- (void)setIndex:(long long)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)delegate;
- (long long)index;
- (id)indexLabel;
- (void)setDelegate:(id)arg0;
- (id)backButton;
- (void)setBackButton:(id)arg0;
- (void)setupSubviews;

@end
