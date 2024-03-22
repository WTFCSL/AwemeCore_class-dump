//
//     Generated by private class-dump
//

@class NSDictionary, NLELayer_OC, NSString;
@protocol ACCStickerContainerProtocol;

@interface ACCNLELayerView : UIView <ACCStickerContentProtocol> {
    id /* block */ coordinateDidChange;
    id<ACCStickerContainerProtocol> stickerContainer;
    NSDictionary *_commonTrackParams;
    NLELayer_OC *_NLEImageLayer;
    NSString *_NLEImageLayerId;
    id /* block */ _triggerDragDeleteCallback;
}

@property (retain, nonatomic) NSDictionary *commonTrackParams;
@property (weak, nonatomic) NLELayer_OC *NLEImageLayer;
@property (retain, nonatomic) NSString *NLEImageLayerId;
@property (copy, nonatomic) id /* block */ triggerDragDeleteCallback;
@property (copy, nonatomic) id /* block */ coordinateDidChange;
@property (weak, nonatomic) id<ACCStickerContainerProtocol> stickerContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonTrackParams;
- (void)setCommonTrackParams:(id)arg0;
- (id)stickerContainer;
- (void)setStickerContainer:(id)arg0;
- (void)setNLEImageLayer:(id)arg0;
- (id)NLEImageLayer;
- (id /* block */)coordinateDidChange;
- (id)copyForContext:(id)arg0;
- (void)updateWithInstance:(id)arg0 context:(id)arg1;
- (void)setCoordinateDidChange:(id /* block */)arg0;
- (id)NLEImageLayerId;
- (void)setNLEImageLayerId:(id)arg0;
- (id /* block */)triggerDragDeleteCallback;
- (void)setTriggerDragDeleteCallback:(id /* block */)arg0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)isAccessibilityElement;

@end