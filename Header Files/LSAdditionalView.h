//
//     Generated by private class-dump
//

@class NSObject, NSString, UIView;
@protocol LSAdditionalViewDelegate;

@interface LSAdditionalView : UIView <LSAdditionalViewProtocol> {
    BOOL _heightChangedLinkageList;
    double _heightValue;
    NSObject<LSAdditionalViewDelegate> *_delegate;
    UIView *_customView;
}

@property (retain, nonatomic) UIView *customView;
@property (nonatomic) double heightValue;
@property (nonatomic) BOOL heightChangedLinkageList;
@property (weak, nonatomic) NSObject<LSAdditionalViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupUI;
- (BOOL)heightChangedLinkageList;
- (void)setHeightChangedLinkageList:(BOOL)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (id)customView;
- (void)setDelegate:(id)arg0;
- (void)setCustomView:(id)arg0;
- (double)heightValue;
- (void)setHeightValue:(double)arg0;

@end