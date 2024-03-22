//
//     Generated by private class-dump
//

@class UIView, _TtC8TempoiOS11TempoEngine;
@protocol AWEPOIAnchorTempoManagerDelegate;

@interface AWEPOIAnchorTempoManager : NSObject {
    id<AWEPOIAnchorTempoManagerDelegate> _delegate;
    _TtC8TempoiOS11TempoEngine *_engine;
    UIView *_oldRootView;
}

@property (retain, nonatomic) _TtC8TempoiOS11TempoEngine *engine;
@property (retain, nonatomic) UIView *oldRootView;
@property (weak, nonatomic) id<AWEPOIAnchorTempoManagerDelegate> delegate;

- (void)loadTempoTemplate:(id)arg0 uniqueID:(id)arg1 data:(id)arg2 constrainedSize:(struct CGSize { double x0; double x1; })arg3 completion:(id /* block */)arg4;
- (id)oldRootView;
- (void)setOldRootView:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)engine;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setEngine:(id)arg0;
- (void)setupEngine;

@end