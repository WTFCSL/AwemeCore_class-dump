//
//     Generated by private class-dump
//

@class NSString, DitoPageContext;
@protocol DitoExtensionContainerProtocol;

@interface AWEPOIDetailIntentActionExtension : NSObject <DitoExtensionProtocol> {
    BOOL _hasTriggeredGoodsDetailNotification;
    DitoPageContext *_context;
    id<DitoExtensionContainerProtocol> _container;
}

@property (nonatomic) BOOL hasTriggeredGoodsDetailNotification;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeExtension;
- (void)notifyIntentActionForType:(unsigned long long)arg0;
- (void)handleGoodDetailExitNotification:(id)arg0;
- (BOOL)hasTriggeredGoodsDetailNotification;
- (void)setHasTriggeredGoodsDetailNotification:(BOOL)arg0;
- (id)container;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)setContainer:(id)arg0;
- (id)context;
- (void)dealloc;

@end