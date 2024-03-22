//
//     Generated by private class-dump
//

@class NSString, UIView;
@protocol HunterContainerProtocol;

@interface AWERelatedVideoHunterContainer : UIView <HunterContainerLifeCycleProtocol, AWELongVideoLVWidgetContainerProtocol> {
    UIView<HunterContainerProtocol> *_container;
}

@property (retain, nonatomic) UIView<HunterContainerProtocol> *container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preloadHunterWithSchama:(id)arg0 awemeModel:(id)arg1 widgetList:(id)arg2 extraParams:(id)arg3;
- (id)container;
- (struct CGSize { double x0; double x1; })contentSize;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 context:(id)arg1;

@end