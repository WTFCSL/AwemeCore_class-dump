//
//     Generated by private class-dump
//

@class AWEPOIDetailNGHeaderImageComponentViewModel, AWEPOILynxContainerView, NSString, UIView;

@interface AWEPOIDetailHeaderImageLynxView : AWEPOIDetailHeaderImageComponentBaseView <AWEPOICubeViewDelegate> {
    BOOL _hasInitLynxViewSize;
    AWEPOILynxContainerView *_lynxView;
    double _initScrollViewOffset;
    AWEPOIDetailNGHeaderImageComponentViewModel *_headerImageVM;
    UIView *_contentView;
    double _lastScrollEventTime;
    double _height;
}

@property (retain, nonatomic) AWEPOILynxContainerView *lynxView;
@property (nonatomic) BOOL hasInitLynxViewSize;
@property (nonatomic) double initScrollViewOffset;
@property (weak, nonatomic) AWEPOIDetailNGHeaderImageComponentViewModel *headerImageVM;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) double lastScrollEventTime;
@property (nonatomic) double height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)lynxView;
- (void)setLynxView:(id)arg0;
- (void)updateViewModel:(id)arg0;
- (void)cubeView:(id)arg0 viewDidChangeContentSize:(struct CGSize { double x0; double x1; })arg1;
- (id)extraParamsForLynx;
- (void)pageDidScroll:(struct CGPoint { double x0; double x1; })arg0;
- (void)updateComponentViewAlpha:(double)arg0;
- (id)headerImageVM;
- (void)setHeaderImageVM:(id)arg0;
- (id)buildLynxContainerViewWithCubeModel:(id)arg0;
- (void)setHasInitLynxViewSize:(BOOL)arg0;
- (BOOL)hasInitLynxViewSize;
- (double)initScrollViewOffset;
- (void)setInitScrollViewOffset:(double)arg0;
- (id)getPreloadView:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (double)height;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)contentView;
- (void)setHeight:(double)arg0;
- (double)lastScrollEventTime;
- (void)setLastScrollEventTime:(double)arg0;
- (void)setContentView:(id)arg0;

@end
