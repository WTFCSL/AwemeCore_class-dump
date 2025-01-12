//
//     Generated by private class-dump
//

@class NSString, IESECGoodsDetailParameters, UITapGestureRecognizer;

@interface IESECGoodsFeedActionButton : IESECButton <IESECReservateDepositMessage, IESECLLComponent> {
    IESECGoodsDetailParameters *_param;
    UITapGestureRecognizer *_tapGesture;
    BOOL _useNewUI;
}

@property (nonatomic) BOOL useNewUI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateUIWithModel:(id)arg0;
- (void)registerMessages;
- (void)updateWithParameters:(id)arg0;
- (void)unregisterMessages;
- (void)handleActivityUpdateNotification:(id)arg0;
- (void)reservateDepositSuccess;
- (id)updateTextWithModel:(id)arg0;
- (BOOL)useNewUI;
- (void)updateNewColorWithType:(long long)arg0;
- (void)updateColorWithType:(long long)arg0;
- (void)setUseNewUI:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)handleTapGesture:(id)arg0;

@end
