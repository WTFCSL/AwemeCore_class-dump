//
//     Generated by private class-dump
//

@class IESECGoodsDetailHeaderServiceProvider, NSMutableDictionary, IESECLLDCLynxManager, IESECGoodsDetailHeaderSliceEventHandler, NSString;
@protocol IESECSliceXInstanceInterface;

@interface IESECGoodsDetailHeaderViewManager : NSObject <IESECGoodsDetailHeaderViewManagerServeice> {
    NSMutableDictionary *_sliceViewMap;
    NSMutableDictionary *_sliceModelMap;
    IESECLLDCLynxManager *_lynxManager;
    IESECGoodsDetailHeaderServiceProvider *_serviceProvider;
    id<IESECSliceXInstanceInterface> _sliceInstance;
    IESECGoodsDetailHeaderSliceEventHandler *_sliceXEventHandler;
    NSString *_pageIdentifier;
    struct CGSize { double width; double height; } _footerSize;
}

@property (retain, nonatomic) NSMutableDictionary *sliceViewMap;
@property (retain, nonatomic) NSMutableDictionary *sliceModelMap;
@property (retain, nonatomic) IESECLLDCLynxManager *lynxManager;
@property (weak, nonatomic) IESECGoodsDetailHeaderServiceProvider *serviceProvider;
@property (nonatomic) struct CGSize { double width; double height; } footerSize;
@property (retain, nonatomic) id<IESECSliceXInstanceInterface> sliceInstance;
@property (retain, nonatomic) IESECGoodsDetailHeaderSliceEventHandler *sliceXEventHandler;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupPageVC:(id)arg0;
- (id)lynxManager;
- (void)setLynxManager:(id)arg0;
- (void)triggerAction:(id)arg0;
- (id)getSliceViewWithSlice:(id)arg0 fitSize:(struct CGSize { double x0; double x1; })arg1;
- (id)getSliceViewWithSlice:(id)arg0 fitSize:(struct CGSize { double x0; double x1; })arg1 skipBind:(BOOL)arg2;
- (id)getSliceViewWithSlice:(id)arg0;
- (id)getLynxCardWithURL:(id)arg0 data:(id)arg1;
- (id)initWithContext:(id)arg0 serviceProvider:(id)arg1;
- (id)sliceXEventHandler;
- (id)sliceViewMap;
- (id)sliceInstance;
- (void)setSliceViewMap:(id)arg0;
- (id)sliceModelMap;
- (void)setSliceModelMap:(id)arg0;
- (void)setSliceInstance:(id)arg0;
- (void)setSliceXEventHandler:(id)arg0;
- (void).cxx_destruct;
- (void)setServiceProvider:(id)arg0;
- (id)serviceProvider;
- (struct CGSize { double x0; double x1; })footerSize;
- (void)setFooterSize:(struct CGSize { double x0; double x1; })arg0;
- (id)pageIdentifier;
- (void)setPageIdentifier:(id)arg0;

@end
