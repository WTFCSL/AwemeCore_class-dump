//
//     Generated by private class-dump
//

@protocol CJPayHomeBizAdapterDelegate, CJPayManagerAdapterDelegate;

@interface CJPayBinaryAdapter : NSObject {
    id<CJPayManagerAdapterDelegate> _managerDelegate;
    id<CJPayHomeBizAdapterDelegate> _confirmPresenterDelegate;
}

@property (weak, nonatomic) id<CJPayManagerAdapterDelegate> managerDelegate;
@property (weak, nonatomic) id<CJPayHomeBizAdapterDelegate> confirmPresenterDelegate;

+ (id)shared;

- (id)confirmPresenterDelegate;
- (void)setConfirmPresenterDelegate:(id)arg0;
- (void).cxx_destruct;
- (void)setManagerDelegate:(id)arg0;
- (id)managerDelegate;

@end
