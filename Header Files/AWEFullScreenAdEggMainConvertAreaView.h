//
//     Generated by private class-dump
//

@class AWEFullScreenAdEggModel, UIView;
@protocol AWEAdTagView;

@interface AWEFullScreenAdEggMainConvertAreaView : UIView {
    UIView<AWEAdTagView> *_adTagView;
    AWEFullScreenAdEggModel *_model;
}

@property (retain, nonatomic) UIView<AWEAdTagView> *adTagView;
@property (retain, nonatomic) AWEFullScreenAdEggModel *model;

- (id)adTagView;
- (void)setAdTagView:(id)arg0;
- (void)setModel:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)model;
- (void)setup;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)updateWithModel:(id)arg0;

@end
