//
//     Generated by private class-dump
//

@class NSString, CAShapeLayer;

@interface IESECYataCircleLoadingView : IESECSliceXViewElementView <IESECSliceXFlexObserver> {
    CAShapeLayer *_ringLayer;
}

@property (retain, nonatomic) CAShapeLayer *ringLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)flexDidLayout:(id)arg0;
- (void)createLayerIfNeeded;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)endAnimation;
- (void)startAnimation;
- (id)ringLayer;
- (void)setRingLayer:(id)arg0;

@end
