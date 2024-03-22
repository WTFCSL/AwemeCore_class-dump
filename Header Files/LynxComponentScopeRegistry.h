//
//     Generated by private class-dump
//

@class NSSet, NSMutableDictionary;

@interface LynxComponentScopeRegistry : NSObject {
    NSMutableDictionary *_uiClasses;
    NSMutableDictionary *_shadowNodeClasses;
}

@property (retain, nonatomic) NSMutableDictionary *uiClasses;
@property (retain, nonatomic) NSMutableDictionary *shadowNodeClasses;
@property (readonly, nonatomic) NSSet *allRegisteredComponent;

- (void)registerUI:(Class)arg0 withName:(id)arg1;
- (void)registerShadowNode:(Class)arg0 withName:(id)arg1;
- (Class)uiClassWithName:(id)arg0 accessible:(BOOL *)arg1;
- (Class)shadowNodeClassWithName:(id)arg0 accessible:(BOOL *)arg1;
- (void)makeIntoGloabl;
- (id)allRegisteredComponent;
- (id)uiClasses;
- (void)setUiClasses:(id)arg0;
- (id)shadowNodeClasses;
- (void)setShadowNodeClasses:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end