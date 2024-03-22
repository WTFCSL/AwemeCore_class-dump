//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;
@protocol IESServiceProvider;

@interface ACCTrimCropComponentManager : NSObject <ACCTrimCropComponentManager> {
    id<IESServiceProvider> _context;
    NSMutableArray *_components;
}

@property (readonly, weak, nonatomic) id<IESServiceProvider> context;
@property (retain, nonatomic) NSMutableArray *components;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadComponents;
- (void)assemblyComponent:(id)arg0;
- (void)componentsDidLoad;
- (void)componentsWillAppear;
- (void)componentsDidAppear;
- (void)componentsWillDisappear;
- (void)componentsDidDisappear;
- (id)components;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)setComponents:(id)arg0;
- (id)context;
- (void)willTransitionIn;

@end