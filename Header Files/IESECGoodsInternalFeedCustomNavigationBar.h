//
//     Generated by private class-dump
//

@class UIButton;

@interface IESECGoodsInternalFeedCustomNavigationBar : UIView {
    BOOL _shouldShowMallEntrance;
    UIButton *_closeButton;
    id /* block */ _closeButtonDidTap;
    id /* block */ _searchButtonDidTap;
    id /* block */ _mallEntranceDidTap;
    id /* block */ _eventTrack;
}

@property (retain, nonatomic) UIButton *closeButton;
@property (copy, nonatomic) id /* block */ closeButtonDidTap;
@property (copy, nonatomic) id /* block */ searchButtonDidTap;
@property (copy, nonatomic) id /* block */ mallEntranceDidTap;
@property (copy, nonatomic) id /* block */ eventTrack;
@property (nonatomic) BOOL shouldShowMallEntrance;

- (void)closeButtonDidClick:(id)arg0;
- (id /* block */)eventTrack;
- (void)setCloseButtonDidTap:(id /* block */)arg0;
- (id /* block */)closeButtonDidTap;
- (void)mallEntranceDidClick:(id)arg0;
- (BOOL)shouldShowMallEntrance;
- (id /* block */)mallEntranceDidTap;
- (id /* block */)searchButtonDidTap;
- (void)setSearchButtonDidTap:(id /* block */)arg0;
- (void)setMallEntranceDidTap:(id /* block */)arg0;
- (void)setEventTrack:(id /* block */)arg0;
- (void)setShouldShowMallEntrance:(BOOL)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupUI;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;

@end
