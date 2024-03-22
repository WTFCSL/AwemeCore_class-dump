//
//     Generated by private class-dump
//

@class NSArray, NSMutableDictionary, NSDictionary, UIView, NSMutableArray, NSString;

@interface AWEEcomSearchFeedOutLynxViewManager : NSObject <BDXContainerLifecycleProtocol> {
    NSMutableDictionary *_publicLynxViewPendant;
    NSDictionary *_extraParams;
    NSMutableArray *_lynxViewTypes;
    UIView *_lynxSuperView;
    NSArray *_pushTimeFeedOutLynxModel;
}

@property (retain, nonatomic) NSMutableArray *lynxViewTypes;
@property (retain, nonatomic) UIView *lynxSuperView;
@property (retain, nonatomic) NSArray *pushTimeFeedOutLynxModel;
@property (retain, nonatomic) NSMutableDictionary *publicLynxViewPendant;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)arg0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })arg1;
- (id)extraParams;
- (void)setExtraParams:(id)arg0;
- (id)pushTimeFeedOutLynxModel;
- (void)setPushTimeFeedOutLynxModel:(id)arg0;
- (void)setLynxSuperView:(id)arg0;
- (id)lynxViewTypes;
- (id)publicLynxViewPendant;
- (id)creatBDXLynxViewWithModel:(id)arg0;
- (id)lynxSuperView;
- (void)updateLynxViewUIWithModel:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1 lynxView:(id)arg2;
- (void)configUIWithLynxView:(id)arg0 model:(id)arg1;
- (id)initWithSuperView:(id)arg0;
- (void)bindLynxViewWithModel:(id)arg0;
- (void)setPublicLynxViewPendant:(id)arg0;
- (void)setLynxViewTypes:(id)arg0;
- (void).cxx_destruct;

@end
