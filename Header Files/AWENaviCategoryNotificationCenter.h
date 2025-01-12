//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface AWENaviCategoryNotificationCenter : NSObject {
    NSMutableArray *_observers;
}

@property (retain, nonatomic) NSMutableArray *observers;

- (void)addObserver:(id)arg0 categoryKeys:(id)arg1;
- (BOOL)notifyCategory:(id)arg0 changeEffect:(id)arg1 byViewModel:(id)arg2 targetCategoryKey:(id)arg3;
- (BOOL)notifyCategory:(id)arg0 changeInspiration:(id)arg1 byViewModel:(id)arg2 targetCategoryKey:(id)arg3;
- (void)notifyCategory:(id)arg0 changeColor:(id)arg1 byViewModel:(id)arg2 targetCategoryKey:(id)arg3;
- (void)notifyCategory:(id)arg0 willApplyCollection:(id)arg1;
- (void)notifyCategory:(id)arg0 didApplyCollection:(id)arg1;
- (void)notifyCategory:(id)arg0 applyOrphanEffect:(id)arg1;
- (void)notifyCategory:(id)arg0 applyOrphanInspiration:(id)arg1;
- (void)notifyClickCategory:(id)arg0 data:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (id)observers;
- (void)setObservers:(id)arg0;
- (void)removeObserver:(id)arg0;

@end
