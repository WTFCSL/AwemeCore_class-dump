//
//     Generated by private class-dump
//

@protocol AWELiveShareCouponVCDelegate;

@protocol AWELiveShareCouponVC <NSObject>

@property (weak, nonatomic) id<AWELiveShareCouponVCDelegate> delegate;
@property (readonly, nonatomic) BOOL lynxLoadFinished;

- (BOOL)lynxLoadFinished;
- (id)initWithUpdateData:(id)arg0;
- (void)configSharePanelCloseBlock:(id /* block */)arg0;
- (void)updateLynxViewWithData:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
