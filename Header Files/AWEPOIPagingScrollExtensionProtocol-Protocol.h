//
//     Generated by private class-dump
//

@protocol AWEPOIPagingScrollDelegateProtocol;

@protocol AWEPOIPagingScrollExtensionProtocol <NSObject>

@property (nonatomic) struct CGPoint { double x0; double x1; } centerPoint;
@property (weak, nonatomic) id<AWEPOIPagingScrollDelegateProtocol> delegate;

- (void)startPagingScroll;
- (void)endPagingScroll;
- (void)reloadPagingScrollModels;
- (void)setCenterPoint:(struct CGPoint { double x0; double x1; })arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (struct CGPoint { double x0; double x1; })centerPoint;

@end
