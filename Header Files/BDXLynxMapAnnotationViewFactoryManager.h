//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface BDXLynxMapAnnotationViewFactoryManager : NSObject <BDXLynxMapAnnotationViewFactory> {
    NSArray *_factories;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)managerWithAnnotationViewFactories:(id)arg0;

- (id)viewForAnnotation:(id)arg0 inMapView:(id)arg1;
- (void)updateAnnotationView:(id)arg0 withAnnotation:(id)arg1;
- (void)startAnimationWithAnnotationView:(id)arg0 withAnimation:(id)arg1;
- (void).cxx_destruct;

@end
