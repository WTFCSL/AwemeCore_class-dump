//
//     Generated by private class-dump
//

@class NSString;

@interface AWEScrollViewHookMethods : NSObject <UIScrollViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hookScrollViewDelegate:(id)arg0;

- (void)perf_isa_scrollViewWillBeginDragging:(id)arg0;
- (void)perf_isa_scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)perf_isa_scrollViewDidEndDecelerating:(id)arg0;

@end