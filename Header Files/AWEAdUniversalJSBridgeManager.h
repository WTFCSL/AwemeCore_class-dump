//
//     Generated by private class-dump
//

@class NSMutableDictionary, AWEAwemeModel, NSDate, NSMutableArray, UIViewController;
@protocol AWEAdUniversalJSBridgeContainerProtocol, AWEPlayInteractionViewControllerProtocol;

@interface AWEAdUniversalJSBridgeManager : NSObject {
    BOOL _hasReset;
    AWEAwemeModel *_awemeModel;
    UIViewController<AWEPlayInteractionViewControllerProtocol> *_interactionViewController;
    NSMutableArray *_leftElements;
    NSMutableDictionary *_elementsDic;
    id<AWEAdUniversalJSBridgeContainerProtocol> _container;
    NSDate *_showDate;
}

@property (retain, nonatomic) NSMutableArray *leftElements;
@property (retain, nonatomic) NSMutableDictionary *elementsDic;
@property (weak, nonatomic) id<AWEAdUniversalJSBridgeContainerProtocol> container;
@property (nonatomic) BOOL hasReset;
@property (retain, nonatomic) NSDate *showDate;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (weak, nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> *interactionViewController;

- (id)awemeModel;
- (void)setInteractionViewController:(id)arg0;
- (void)setAwemeModel:(id)arg0;
- (void)sendEvent:(id)arg0 componentId:(id)arg1 params:(id)arg2 callback:(id /* block */)arg3;
- (id)lynxBridges;
- (id)leftElements;
- (void)setLeftElements:(id)arg0;
- (BOOL)hasReset;
- (void)setHasReset:(BOOL)arg0;
- (id)initWithViewController:(id)arg0 model:(id)arg1 container:(id)arg2;
- (void)onAwemeDiggNotification:(id)arg0;
- (void)onAddCommentNotification:(id)arg0;
- (void)hideNativeInfoArea:(id)arg0;
- (void)showNativeInfoArea:(id)arg0;
- (id)elementsDic;
- (void)setElementsDic:(id)arg0;
- (id)container;
- (id)init;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;
- (void)dealloc;
- (void)reset;
- (void)addObservers;
- (id)interactionViewController;
- (id)showDate;
- (void)setShowDate:(id)arg0;

@end