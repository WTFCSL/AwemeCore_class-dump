//
//     Generated by private class-dump
//

@class NSMutableDictionary, UIView, NSMutableArray, IESLiveVSGiftPanelViewModel;
@protocol IESLiveVSGiftSectionCell;

@interface IESLiveVSGiftSectionView : UIView {
    IESLiveVSGiftPanelViewModel *_viewModel;
    UIView *_containerView;
    NSMutableArray *_cells;
    NSMutableDictionary *_cellMap;
    UIView<IESLiveVSGiftSectionCell> *_lastCell;
    double _currentLineWidth;
}

@property (retain, nonatomic) IESLiveVSGiftPanelViewModel *viewModel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) NSMutableArray *cells;
@property (retain, nonatomic) NSMutableDictionary *cellMap;
@property (retain, nonatomic) UIView<IESLiveVSGiftSectionCell> *lastCell;
@property (nonatomic) double currentLineWidth;

- (void)bindViewModel;
- (void)p_reloadViewIfNeeded;
- (void)setLastCell:(id)arg0;
- (void)setCurrentLineWidth:(double)arg0;
- (void)p_dismissCells:(id)arg0;
- (void)p_displayCells:(id)arg0;
- (void)p_appendCell:(id)arg0;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (void)setViewModel:(id)arg0;
- (id)containerView;
- (id)viewModel;
- (id)cells;
- (void)setupUI;
- (void)setCells:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 viewModel:(id)arg1;
- (double)currentLineWidth;
- (id)lastCell;
- (void)setCellMap:(id)arg0;
- (id)cellMap;

@end
