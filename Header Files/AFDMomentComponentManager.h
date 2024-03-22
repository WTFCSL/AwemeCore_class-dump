//
//     Generated by private class-dump
//

@class NSArray, AFDCloseFriendsMomentContext, AWESimpleContainer;

@interface AFDMomentComponentManager : NSObject {
    NSArray *_components;
    AFDCloseFriendsMomentContext *_context;
    AWESimpleContainer *_serviceContainer;
}

@property (retain, nonatomic) NSArray *components;
@property (retain, nonatomic) AFDCloseFriendsMomentContext *context;
@property (retain, nonatomic) AWESimpleContainer *serviceContainer;

- (void)setServiceContainer:(id)arg0;
- (id)initWithContext:(id)arg0 serviceContainer:(id)arg1;
- (void)resolveWithComponentClassArray:(id)arg0 customInit:(id /* block */)arg1;
- (void)empty;
- (id)components;
- (void).cxx_destruct;
- (id)serviceContainer;
- (void)forwardInvocation:(id)arg0;
- (void)setContext:(id)arg0;
- (void)setComponents:(id)arg0;
- (id)methodSignatureForSelector:(SEL)arg0;
- (id)context;

@end
