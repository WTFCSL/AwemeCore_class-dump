//
//     Generated by private class-dump
//

@class NSArray, AWENaviDuetModifyBackgroundPanelView, NSString;

@interface AWENaviDuetModifyBackgroundView : UIView <UIGestureRecognizerDelegate> {
    id /* block */ _onClosedBlock;
    AWENaviDuetModifyBackgroundPanelView *_panelView;
}

@property (retain, nonatomic) AWENaviDuetModifyBackgroundPanelView *panelView;
@property (copy, nonatomic) NSArray *backgrounds;
@property (copy, nonatomic) id /* block */ onClosedBlock;
@property (copy, nonatomic) id /* block */ onSelectedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)panelView;
- (void)setOnSelectedBlock:(id /* block */)arg0;
- (id /* block */)onSelectedBlock;
- (void)showPanelCompletion:(id /* block */)arg0;
- (void)removePanelCompletion:(id /* block */)arg0;
- (void)setOnClosedBlock:(id /* block */)arg0;
- (void)setPanelView:(id)arg0;
- (id /* block */)onClosedBlock;
- (void)setBackgrounds:(id)arg0;
- (void)updateSelectedBackgroundWithIndex:(unsigned long long)arg0;
- (id)backgrounds;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (void)handleTapGesture:(id)arg0;

@end