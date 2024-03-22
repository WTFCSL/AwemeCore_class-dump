//
//     Generated by private class-dump
//

@class AWEUGCrossDiversionInfo, UITapGestureRecognizer, UIImageView, UIView, UIPanGestureRecognizer, DUXBaseLabel;
@protocol AWEUGCrossDiversionBuoyViewDelegate;

@interface AWEUGCrossDiversionBuoyView : UIView {
    BOOL _isMoving;
    id<AWEUGCrossDiversionBuoyViewDelegate> _delegate;
    AWEUGCrossDiversionInfo *_info;
    UIView *_backgroundView;
    DUXBaseLabel *_titleLabel;
    UIView *_separateLine;
    UIView *_closeArea;
    UIImageView *_closeIconView;
    UIPanGestureRecognizer *_panGesture;
    UITapGestureRecognizer *_tapGesture;
}

@property (retain, nonatomic) AWEUGCrossDiversionInfo *info;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) DUXBaseLabel *titleLabel;
@property (retain, nonatomic) UIView *separateLine;
@property (retain, nonatomic) UIView *closeArea;
@property (retain, nonatomic) UIImageView *closeIconView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (nonatomic) BOOL isMoving;
@property (weak, nonatomic) id<AWEUGCrossDiversionBuoyViewDelegate> delegate;

- (double)safeAreaBottom;
- (id)separateLine;
- (void)setSeparateLine:(id)arg0;
- (id)closeArea;
- (void)setCloseArea:(id)arg0;
- (id)closeIconView;
- (double)defaultYPosition;
- (void)setCloseIconView:(id)arg0;
- (BOOL)isMoving;
- (id)initWithInfo:(id)arg0;
- (id)info;
- (id)backgroundView;
- (void)setIsMoving:(BOOL)arg0;
- (void).cxx_destruct;
- (void)show;
- (id)titleLabel;
- (void)setInfo:(id)arg0;
- (id)tapGesture;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setBackgroundView:(id)arg0;
- (id)panGesture;
- (void)setPanGesture:(id)arg0;
- (void)setupUI;
- (double)safeAreaTop;
- (void)handlePanGesture:(id)arg0;
- (void)setTapGesture:(id)arg0;
- (void)handleTapGesture:(id)arg0;
- (void)closeButtonTapped;

@end
