//
//     Generated by private class-dump
//

@class BDXBridgeEventSubscriber, AWENearbyLynxContainerView;

@interface AWENearbyDynamicEventSubscriber : NSObject {
    AWENearbyLynxContainerView *_lynxContainer;
    id /* block */ _handler;
}

@property (retain, nonatomic) BDXBridgeEventSubscriber *bdxSubscriber;
@property (weak, nonatomic) AWENearbyLynxContainerView *lynxContainer;
@property (copy, nonatomic) id /* block */ handler;

+ (id)subscriberWithHandler:(id /* block */)arg0;
+ (id)subscriberWithContainer:(id)arg0;

- (id)lynxContainer;
- (void)setLynxContainer:(id)arg0;
- (void)setBdxSubscriber:(id)arg0;
- (id)bdxSubscriber;
- (void).cxx_destruct;
- (void)receiveEvent:(id)arg0;
- (void)setHandler:(id /* block */)arg0;
- (id /* block */)handler;

@end
