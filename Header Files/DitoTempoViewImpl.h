//
//     Generated by private class-dump
//

@class NSString, _TtC8TempoiOS11TempoOCView;
@protocol DitoTempoViewProxyProtocol;

@interface DitoTempoViewImpl : NSObject <TempoiOS.TempoOCViewProxy> {
    id<DitoTempoViewProxyProtocol> _proxy;
    _TtC8TempoiOS11TempoOCView *_tempoView;
}

@property (retain, nonatomic) id<DitoTempoViewProxyProtocol> proxy;
@property (weak, nonatomic) _TtC8TempoiOS11TempoOCView *tempoView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didBuildView;
- (void)completeShow;
- (void)endShow;
- (void)buildContentWithSuperView:(id)arg0;
- (void)setTempoView:(id)arg0;
- (id)tempoView;
- (id)proxy;
- (void)setProxy:(id)arg0;
- (void).cxx_destruct;
- (id)initWithProxy:(id)arg0;
- (void)willShow;

@end
