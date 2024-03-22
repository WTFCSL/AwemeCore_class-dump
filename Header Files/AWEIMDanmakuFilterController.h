//
//     Generated by private class-dump
//

@class NSArray, AWEGroupFilterView;
@protocol AWEIMDanmakuFilterControllerDelegate;

@interface AWEIMDanmakuFilterController : NSObject {
    id<AWEIMDanmakuFilterControllerDelegate> _delegate;
    NSArray *_groupModels;
    NSArray *_dataControllers;
    AWEGroupFilterView *_filterView;
    id /* block */ _toggleMenuBlock;
}

@property (weak, nonatomic) id<AWEIMDanmakuFilterControllerDelegate> delegate;
@property (retain, nonatomic) NSArray *groupModels;
@property (retain, nonatomic) NSArray *dataControllers;
@property (retain, nonatomic) AWEGroupFilterView *filterView;
@property (copy, nonatomic) id /* block */ toggleMenuBlock;

+ (unsigned long long)indexForGroupFilterModelType:(unsigned long long)arg0;
+ (void)trackDidSelectIndex:(unsigned long long)arg0;

- (id /* block */)toggleMenuBlock;
- (void)setToggleMenuBlock:(id /* block */)arg0;
- (void)updateFilterUserInteractionEnabled:(BOOL)arg0;
- (unsigned long long)currentSelectIdx;
- (id)dataControllers;
- (void)setGroupModels:(id)arg0;
- (void)setDataControllers:(id)arg0;
- (id)groupModels;
- (void)setupGroupsWithMaxWidth:(double)arg0 selectBlock:(id /* block */)arg1;
- (unsigned long long)currentGroupFilterType;
- (id)init;
- (void).cxx_destruct;
- (id)filterView;
- (void)setFilterView:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end