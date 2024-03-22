//
//     Generated by private class-dump
//

@class IESLiveRelatedLiveSelectionTabView, NSArray, IESLiveButton, HTSEventContext, UIView, HTSLiveAmazingBackgroundView;
@protocol IESLiveRelatedLiveListViewProtocol;

@interface IESLiveRelatedLivePortraitPanel : UIView {
    id /* block */ _dismissPanel;
    id /* block */ _selectionTabDidClick;
    HTSEventContext *_trackContext;
    NSArray *_tabModels;
    UIView *_contentView;
    HTSLiveAmazingBackgroundView *_backgroundMaskView;
    IESLiveRelatedLiveSelectionTabView *_headerView;
    UIView<IESLiveRelatedLiveListViewProtocol> *_contentListView;
    IESLiveButton *_closeButton;
}

@property (retain, nonatomic) NSArray *tabModels;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) HTSLiveAmazingBackgroundView *backgroundMaskView;
@property (retain, nonatomic) IESLiveRelatedLiveSelectionTabView *headerView;
@property (retain, nonatomic) UIView<IESLiveRelatedLiveListViewProtocol> *contentListView;
@property (retain, nonatomic) IESLiveButton *closeButton;
@property (copy, nonatomic) id /* block */ dismissPanel;
@property (copy, nonatomic) id /* block */ selectionTabDidClick;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (void)startShowAnimation;
- (void)closeButtonDidClick;
- (id /* block */)dismissPanel;
- (id)tabModels;
- (void)setTabModels:(id)arg0;
- (id)initWithPanelTabModels:(id)arg0 bgColor:(id)arg1;
- (void)setSelectionTabDidClick:(id /* block */)arg0;
- (void)setDismissPanel:(id /* block */)arg0;
- (void)startHideAnimation:(BOOL)arg0;
- (void)setupSubViewsWithContentViewBgColor:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculatePanelFrameWithPlayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)updateContentListView:(id)arg0;
- (id /* block */)selectionTabDidClick;
- (void)startHideAnimation;
- (id)contentListView;
- (void)setContentListView:(id)arg0;
- (void).cxx_destruct;
- (void)setHeaderView:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (id)contentView;
- (id)headerView;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)setContentView:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)backgroundMaskView;
- (void)setBackgroundMaskView:(id)arg0;
- (void)handleTapGesture:(id)arg0;

@end