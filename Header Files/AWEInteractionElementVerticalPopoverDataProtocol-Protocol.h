//
//     Generated by private class-dump
//

@protocol AWEInteractionElementVerticalPopoverDataProtocol <NSObject>

- (void)loadDataIfNeeded:(id /* block */)arg0 releaseBlock:(id /* block */)arg1;
- (long long)dataCount;

@optional

- (id)elementCustomContentView;
- (void)didClickAtIndex:(long long)arg0;
- (id)leadingImageViewAtIndex:(long long)arg0;
- (id)nameLabelAtIndex:(long long)arg0;
- (void)configCustomContentView:(id)arg0 atIndex:(long long)arg1;
- (struct CGSize { double x0; double x1; })customDataItemSize;
- (BOOL)shouldUseCustomView;

@end