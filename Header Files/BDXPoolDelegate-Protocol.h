//
//     Generated by private class-dump
//

@protocol BDXPoolDelegate <NSObject>

@optional

- (BOOL)xpool:(id)arg0 shouldRecycleContainer:(id)arg1;
- (BOOL)xpool:(id)arg0 shouldLoadContainer:(id)arg1;
- (void)xpool:(id)arg0 didLoadSuccessWithContainer:(id)arg1;
- (void)xpool:(id)arg0 didLoadFailedWithContainer:(id)arg1 error:(id)arg2;
- (void)xpool:(id)arg0 didRecycleContainer:(id)arg1;
- (void)xpool:(id)arg0 didFetchContatiner:(id)arg1;
- (void)xpool:(id)arg0 didCreateContainer:(id)arg1;
- (void)xpool:(id)arg0 didClearWithIdentifer:(id)arg1;
- (void)xpoolDidClearAll:(id)arg0;
- (void)xpoolDidReceiveMemoryWarning:(id)arg0;

@end
