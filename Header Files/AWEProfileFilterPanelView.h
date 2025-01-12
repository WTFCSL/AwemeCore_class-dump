//
//     Generated by private class-dump
//

@class UIView, NSSet, NSMutableDictionary, DUXFilterPanelItem, AWEProfileFilterPanelModel, NSMutableSet, NSMutableArray, DUXFilterPanel, UIColor;

@interface AWEProfileFilterPanelView : UIView {
    BOOL _allowsMultipleSelection;
    AWEProfileFilterPanelModel *_model;
    UIColor *_panelBackgroundColor;
    NSSet *_filterRuleIDSet;
    id /* block */ _filterChangedBlock;
    id /* block */ _maskTapBlock;
    id /* block */ _tapFilterItemBlock;
    double _maxHeight;
    DUXFilterPanel *_panelView;
    UIView *_maskView;
    DUXFilterPanelItem *_lastSection;
    NSMutableSet *_defaultSet;
    NSMutableArray *_sectionSetList;
    NSMutableDictionary *_ruleMap;
    double _width;
    UIView *_accessibilityContentView;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _edge;
}

@property (retain, nonatomic) DUXFilterPanel *panelView;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) DUXFilterPanelItem *lastSection;
@property (retain, nonatomic) NSMutableSet *defaultSet;
@property (retain, nonatomic) NSMutableArray *sectionSetList;
@property (retain, nonatomic) NSMutableDictionary *ruleMap;
@property (nonatomic) double width;
@property (retain, nonatomic) UIView *accessibilityContentView;
@property (retain, nonatomic) AWEProfileFilterPanelModel *model;
@property (retain, nonatomic) UIColor *panelBackgroundColor;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edge;
@property (retain, nonatomic) NSSet *filterRuleIDSet;
@property (copy, nonatomic) id /* block */ filterChangedBlock;
@property (copy, nonatomic) id /* block */ maskTapBlock;
@property (copy, nonatomic) id /* block */ tapFilterItemBlock;
@property (nonatomic) BOOL allowsMultipleSelection;
@property (nonatomic) double maxHeight;

- (id)panelView;
- (void)setPanelView:(id)arg0;
- (id)panelBackgroundColor;
- (void)setPanelBackgroundColor:(id)arg0;
- (id)ruleMap;
- (id)accessibilityContentView;
- (double)filterPanelHeight;
- (id)defaultSet;
- (id)sectionSetList;
- (void)resetFiltersState:(id)arg0 without:(id)arg1;
- (void)mergeSectionSet;
- (id /* block */)tapFilterItemBlock;
- (void)updateFilterItemSelected;
- (id /* block */)maskTapBlock;
- (void)setAccessibilityContentView:(id)arg0;
- (id)filterRuleIDSet;
- (id /* block */)filterChangedBlock;
- (void)dismiss:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)setFilterRuleIDSet:(id)arg0;
- (void)setFilterChangedBlock:(id /* block */)arg0;
- (void)setMaskTapBlock:(id /* block */)arg0;
- (void)setTapFilterItemBlock:(id /* block */)arg0;
- (void)setDefaultSet:(id)arg0;
- (void)setSectionSetList:(id)arg0;
- (void)setRuleMap:(id)arg0;
- (void)setModel:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edge;
- (id)init;
- (void)setEdge:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void).cxx_destruct;
- (id)model;
- (void)setAllowsMultipleSelection:(BOOL)arg0;
- (id)maskView;
- (void)setMaxHeight:(double)arg0;
- (void)touchesEnded:(id)arg0 withEvent:(id)arg1;
- (void)setWidth:(double)arg0;
- (id)lastSection;
- (double)maxHeight;
- (void)layoutSubviews;
- (double)width;
- (void)setMaskView:(id)arg0;
- (BOOL)allowsMultipleSelection;
- (void)setupUI;
- (void)show:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)setLastSection:(id)arg0;

@end
