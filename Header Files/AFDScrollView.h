//
//     Generated by private class-dump
//

@class NSString;

@interface AFDScrollView : DUXBaseScrollView <UIGestureRecognizerDelegate> {
    id /* block */ _awe_gestureRecognizerShouldBeginBlock;
}

@property (copy, nonatomic) id /* block */ awe_gestureRecognizerShouldBeginBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id /* block */)awe_gestureRecognizerShouldBeginBlock;
- (void)setAwe_gestureRecognizerShouldBeginBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;

@end
