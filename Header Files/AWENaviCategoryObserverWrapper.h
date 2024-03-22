//
//     Generated by private class-dump
//

@class NSArray;
@protocol AWENaviCategoryChangeObserver;

@interface AWENaviCategoryObserverWrapper : NSObject {
    id<AWENaviCategoryChangeObserver> _target;
    NSArray *_filterKeys;
}

@property (weak, nonatomic) id<AWENaviCategoryChangeObserver> target;
@property (copy, nonatomic) NSArray *filterKeys;

+ (id)observerWithTarget:(id)arg0 keys:(id)arg1;

- (void)setFilterKeys:(id)arg0;
- (id)filterKeys;
- (void).cxx_destruct;
- (void)setTarget:(id)arg0;
- (id)target;

@end
