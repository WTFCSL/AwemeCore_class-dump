//
//     Generated by private class-dump
//

@interface AWEAwemeDetailDislikeController : AWEAwemeNewDetailBaseController {
    BOOL _isAppear;
}

@property (nonatomic) BOOL isAppear;

- (BOOL)isAppear;
- (void)setIsAppear:(BOOL)arg0;
- (void)didDislikeAweme:(id)arg0;
- (long long)_findFirstOriginItemWithID:(id)arg0;
- (void)onScrollToIndex:(unsigned long long)arg0 animated:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;

@end
