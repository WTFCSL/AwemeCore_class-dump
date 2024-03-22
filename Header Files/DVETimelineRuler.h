//
//     Generated by private class-dump
//

@class UIFont, NSMutableDictionary, CAShapeLayer, DVERulerModel, DVETimelineRulerViewModel;

@interface DVETimelineRuler : UIView {
    DVETimelineRulerViewModel *_viewModel;
    CAShapeLayer *_pointLayer;
    UIFont *_font;
    NSMutableDictionary *_textLayers;
    DVERulerModel *_model;
}

@property (class, readonly, nonatomic) double height;

@property (retain, nonatomic) DVETimelineRulerViewModel *viewModel;
@property (retain, nonatomic) CAShapeLayer *pointLayer;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) NSMutableDictionary *textLayers;
@property (retain, nonatomic) DVERulerModel *model;

+ (double)height;

- (void)drawRuler;
- (id)textLayers;
- (id)buildTextLayer;
- (void)setTextLayers:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)arg0;
- (id)model;
- (void)setViewModel:(id)arg0;
- (id)font;
- (id)viewModel;
- (void)setFont:(id)arg0;
- (id)pointLayer;
- (void)setPointLayer:(id)arg0;
- (void)addObservers;

@end