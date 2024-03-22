//
//     Generated by private class-dump
//

@class ACCVideoQualityBaseSource, NSString, NSHashTable, AWEVideoPublishViewModel;
@protocol ACCVideoQualitySaverProtocol, ACCVideoSourceWriterProtocol, ACCVideoQualityLifeCycleObserverProtocol, ACCVideoSourceRendererProtocol, ACCVideoQualityCompilerProtocol;

@interface ACCVideoQualityLifeCycleImpl : NSObject <ACCVideoQualityLifeCycleProtocol> {
    ACCVideoQualityBaseSource *_source;
    NSHashTable *_observers;
    id<ACCVideoQualityLifeCycleObserverProtocol> _multicastDelegate;
    AWEVideoPublishViewModel *_context;
    id<ACCVideoSourceWriterProtocol> _writer;
    id<ACCVideoSourceRendererProtocol> _renderer;
    id<ACCVideoQualityCompilerProtocol> _compiler;
    id<ACCVideoQualitySaverProtocol> _saver;
}

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) id<ACCVideoQualityLifeCycleObserverProtocol> multicastDelegate;
@property (weak, nonatomic) AWEVideoPublishViewModel *context;
@property (retain, nonatomic) id<ACCVideoSourceWriterProtocol> writer;
@property (retain, nonatomic) id<ACCVideoSourceRendererProtocol> renderer;
@property (retain, nonatomic) id<ACCVideoQualityCompilerProtocol> compiler;
@property (retain, nonatomic) id<ACCVideoQualitySaverProtocol> saver;
@property (weak, nonatomic) ACCVideoQualityBaseSource *source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onPrepareSourceOnWriter:(id)arg0 completion:(id /* block */)arg1;
- (void)setMulticastDelegate:(id)arg0;
- (id)multicastDelegate;
- (void)onFinishCompileWithError:(id)arg0;
- (void)onFinishSave;
- (void)onFinishRender;
- (void)onPrepareCompile:(id)arg0 completion:(id /* block */)arg1;
- (void)onPrepareSave:(id)arg0 completion:(id /* block */)arg1;
- (void)onFinishSource;
- (void)onPrepareRender:(id)arg0 completion:(id /* block */)arg1;
- (void)setCompiler:(id)arg0;
- (void)setSaver:(id)arg0;
- (id)saver;
- (id)compiler;
- (id)initWithContext:(id)arg0;
- (id)init;
- (id)source;
- (void).cxx_destruct;
- (void)setRenderer:(id)arg0;
- (void)setContext:(id)arg0;
- (id)observers;
- (void)setObservers:(id)arg0;
- (id)context;
- (void)addObserver:(id)arg0;
- (void)setSource:(id)arg0;
- (void)dealloc;
- (void)setWriter:(id)arg0;
- (id)writer;
- (void)removeObserver:(id)arg0;
- (id)renderer;

@end