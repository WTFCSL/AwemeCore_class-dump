//
//     Generated by private class-dump
//

@class IESECLigoContext, NSMutableDictionary, NSString;

@interface IESECLiveLynxManager : NSObject <IESECLigoLynxService> {
    NSMutableDictionary *_viewMap;
    IESECLigoContext *_ligoContext;
}

@property (retain, nonatomic) NSMutableDictionary *viewMap;
@property (retain, nonatomic) IESECLigoContext *ligoContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setViewMap:(id)arg0;
- (void)setLigoContext:(id)arg0;
- (id)ligoContext;
- (void)updateComponentWithModel:(id)arg0;
- (void)didPageVisibilityChange:(BOOL)arg0;
- (void)p_updateLynxCardWithModel:(id)arg0 Identifier:(id)arg1;
- (id)genLynxViewWithModel:(id)arg0 identifier:(id)arg1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2;
- (void)clearLynxComponentsDic;
- (id)init;
- (void).cxx_destruct;
- (id)viewMap;

@end