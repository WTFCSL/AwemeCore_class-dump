//
//     Generated by private class-dump
//

@class NSString, NSObject;
@protocol IESECGoodsDetailHostInjectable, IESECCommentBarExpandContainerProtocol;

@interface IESECCommentBarExpandContainerSwitchModeAction : NSObject <IESECGoodsDetailContainerSwitchMode> {
    NSObject<IESECGoodsDetailHostInjectable, IESECCommentBarExpandContainerProtocol> *_container;
}

@property (retain, nonatomic) NSObject<IESECGoodsDetailHostInjectable, IESECCommentBarExpandContainerProtocol> *container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerDidSwitchTo:(long long)arg0;
- (void)containerWillSwitchTo:(long long)arg0;
- (void)containerDidCancelSwitchTo:(long long)arg0;
- (void)additionActionAfterSwitchTo:(long long)arg0;
- (void)containerDidAppearAgain;
- (void)containerEnterOtherPageFullScreen:(BOOL)arg0;
- (id)container;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;

@end
