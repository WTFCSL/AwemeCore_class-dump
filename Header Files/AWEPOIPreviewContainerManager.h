//
//     Generated by private class-dump
//

@class NSString, AWEPOILynxContainerView, AWEPOITouchThroughView, NSDictionary;

@interface AWEPOIPreviewContainerManager : NSObject <AWEPOICubeViewDelegate> {
    NSString *_lynxURL;
    NSString *_rawData;
    NSString *_lynxCommonData;
    NSDictionary *_extraParams;
    AWEPOILynxContainerView *_lynxView;
    AWEPOITouchThroughView *_containerView;
    double _height;
}

@property (retain, nonatomic) AWEPOILynxContainerView *lynxView;
@property (retain, nonatomic) AWEPOITouchThroughView *containerView;
@property (nonatomic) double height;
@property (copy, nonatomic) NSString *lynxURL;
@property (copy, nonatomic) NSString *rawData;
@property (copy, nonatomic) NSString *lynxCommonData;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setLynxURL:(id)arg0;
- (id)extraParams;
- (void)setExtraParams:(id)arg0;
- (id)lynxView;
- (id)lynxURL;
- (void)setLynxView:(id)arg0;
- (void)cubeView:(id)arg0 viewDidChangeContentSize:(struct CGSize { double x0; double x1; })arg1;
- (id)lynxCommonData;
- (void)setLynxCommonData:(id)arg0;
- (void)updateWithContainerModel:(id)arg0;
- (id)createLynxViewWithModel:(id)arg0 extraParams:(id)arg1 delegate:(id)arg2;
- (void)updateLynxView:(id)arg0 extraParams:(id)arg1 withModel:(id)arg2;
- (void)reloadLynxView:(id)arg0 extraParams:(id)arg1 withModel:(id)arg2;
- (void).cxx_destruct;
- (double)height;
- (id)initWithDictionary:(id)arg0;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (id)rawData;
- (void)setRawData:(id)arg0;
- (void)setHeight:(double)arg0;

@end
