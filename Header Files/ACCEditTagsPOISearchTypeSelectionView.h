//
//     Generated by private class-dump
//

@class NSArray, ACCEditTagsPOISearchType, CAShapeLayer, UIView, NSString, UITableView;
@protocol ACCEditTagsPOISearchTypeSelectionViewDelegate;

@interface ACCEditTagsPOISearchTypeSelectionView : UIView <UITableViewDelegate, UITableViewDataSource> {
    UITableView *_tableView;
    id<ACCEditTagsPOISearchTypeSelectionViewDelegate> _delegate;
    NSArray *_dataSource;
    CAShapeLayer *_maskLayer;
    ACCEditTagsPOISearchType *_selectedSearchType;
    double _topInset;
    UIView *_topMaskView;
    UIView *_bottomMaskView;
}

@property (copy, nonatomic) NSArray *dataSource;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) ACCEditTagsPOISearchType *selectedSearchType;
@property (nonatomic) double topInset;
@property (retain, nonatomic) UIView *topMaskView;
@property (retain, nonatomic) UIView *bottomMaskView;
@property (retain, nonatomic) UITableView *tableView;
@property (weak, nonatomic) id<ACCEditTagsPOISearchTypeSelectionViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnView:(id)arg0;
- (id)topMaskView;
- (id)bottomMaskView;
- (void)setTopMaskView:(id)arg0;
- (void)setBottomMaskView:(id)arg0;
- (double)menuHeight;
- (void)handleTapOnSafeArea;
- (void)setSelectedSearchType:(id)arg0;
- (id)selectedSearchType;
- (void)updateWithSearchTypes:(id)arg0 selectedType:(id)arg1;
- (void)setTopInset:(double)arg0;
- (double)topInset;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void)dismiss;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (double)animationDuration;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)setDelegate:(id)arg0;
- (id)maskLayer;
- (void)setMaskLayer:(id)arg0;
- (double)cellHeight;

@end
